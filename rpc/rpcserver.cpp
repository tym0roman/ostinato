/*
Copyright (C) 2010 Srivats P.

This file is part of "Ostinato"

This is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

//#include "pbhelper.h"
#include "rpcserver.h"
#include "pbqtio.h"

#include <qendian.h>

RpcServer::RpcServer()
{
    server = NULL;
    clientSock = NULL;

    service = NULL; 

    inStream = NULL;
    outStream = NULL;

    isPending = false;
    pendingMethodId = -1; // don't care as long as isPending is false
}

RpcServer::~RpcServer()
{ 
    if (server) 
        delete server; 
}

bool RpcServer::registerService(::google::protobuf::Service *service, 
    quint16 tcpPortNum)
{
    this->service = service;

    server = new QTcpServer();
    connect(server, SIGNAL(newConnection()), this, SLOT(when_newConnection()));
    if (!server->listen(QHostAddress::Any, tcpPortNum)) 
    {
        qDebug("Unable to start the server: %s", 
                server->errorString().toAscii().constData());
        errorString_ = QString("Error starting Ostinato server: %1").arg(
                server->errorString());
        return false;
    }

    qDebug("The server is running on %s: %d", 
            server->serverAddress().toString().toAscii().constData(),
            server->serverPort());
    errorString_ = QString();
    return true;
}

QString RpcServer::errorString()
{
    return errorString_;
}

void RpcServer::done(PbRpcController *controller)
{
    google::protobuf::Message *response = controller->response();
    QIODevice *blob;
    char msgBuf[PB_HDR_SIZE];
    char* const msg = &msgBuf[0];
    int len;

    //qDebug("In RpcServer::done");

    if (controller->Failed())
    {
        qDebug("rpc failed");
        goto _exit;
    }

    blob = controller->binaryBlob();
    if (blob)
    {
        len = blob->size();
        qDebug("is binary blob of len %d", len);

        *((quint16*)(msg+0)) = qToBigEndian(quint16(PB_MSG_TYPE_BINBLOB)); // type
        *((quint16*)(msg+2)) = qToBigEndian(quint16(pendingMethodId)); // method
        (*(quint32*)(msg+4)) = qToBigEndian(quint32(len)); // len

        clientSock->write(msg, PB_HDR_SIZE);

        blob->seek(0);
        while (!blob->atEnd())
        {    
            int l;

            len = blob->read(msg, sizeof(msgBuf));
            l = clientSock->write(msg, len);
            Q_ASSERT(l == len);
        }

        goto _exit;
    }

    if (!response->IsInitialized())
    {
        qWarning("response missing required fields!!");
        qDebug("%s", response->InitializationErrorString().c_str());
        qFatal("exiting");
        goto _exit;
    }

    len = response->ByteSize();

    *((quint16*)(msg+0)) = qToBigEndian(quint16(PB_MSG_TYPE_RESPONSE)); // type
    *((quint16*)(msg+2)) = qToBigEndian(quint16(pendingMethodId)); // method
    *((quint32*)(msg+4)) = qToBigEndian(quint32(len)); // len

    // Avoid printing stats since it happens once every couple of seconds
    if (pendingMethodId != 13)
    {
        qDebug("Server(%s): sending %d bytes to client encoding <%s>", 
            __FUNCTION__, len + PB_HDR_SIZE, response->DebugString().c_str());
        //BUFDUMP(msg, len + 8);
    }

    clientSock->write(msg, PB_HDR_SIZE);
    response->SerializeToZeroCopyStream(outStream);
    outStream->Flush();

_exit:
    delete controller;
    isPending = false;
}

void RpcServer::when_newConnection()
{
    if (clientSock)
    {
        QTcpSocket    *sock;

        qDebug("already connected, no new connections will be accepted");

        // Accept and close connection
        //! \todo (MED) Send reason msg to client
        sock = server->nextPendingConnection();
        sock->disconnectFromHost();
        sock->deleteLater();
        goto _exit;
    }

    clientSock = server->nextPendingConnection();
    qDebug("accepting new connection from %s: %d", 
            clientSock->peerAddress().toString().toAscii().constData(),
            clientSock->peerPort());
    inStream = new google::protobuf::io::CopyingInputStreamAdaptor(
            new PbQtInputStream(clientSock));
    inStream->SetOwnsCopyingStream(true);
    outStream = new google::protobuf::io::CopyingOutputStreamAdaptor(
            new PbQtOutputStream(clientSock));
    outStream->SetOwnsCopyingStream(true);

    connect(clientSock, SIGNAL(readyRead()), 
        this, SLOT(when_dataAvail()));
    connect(clientSock, SIGNAL(disconnected()), 
        this, SLOT(when_disconnected()));
    connect(clientSock, SIGNAL(error(QAbstractSocket::SocketError)), 
        this, SLOT(when_error(QAbstractSocket::SocketError)));

_exit:
    return;
}

void RpcServer::when_disconnected()
{
    qDebug("connection closed from %s: %d",
            clientSock->peerAddress().toString().toAscii().constData(),
            clientSock->peerPort());

    delete inStream;
    delete outStream;

    clientSock->deleteLater();
    clientSock = NULL;
}

void RpcServer::when_error(QAbstractSocket::SocketError socketError)
{
    qDebug("%s (%d)", clientSock->errorString().toAscii().constData(), 
            socketError);
}

void RpcServer::when_dataAvail()
{
    uchar    msg[PB_HDR_SIZE];
    int        msgLen;
    static bool parsing = false;
    static quint16    type, method;
    static quint32 len;
    const ::google::protobuf::MethodDescriptor    *methodDesc;
    ::google::protobuf::Message    *req, *resp;
    PbRpcController *controller;

    if (!parsing)
    {
        if (clientSock->bytesAvailable() < PB_HDR_SIZE)
            return;

        msgLen = clientSock->read((char*)msg, PB_HDR_SIZE);

        Q_ASSERT(msgLen == PB_HDR_SIZE);

        type = qFromBigEndian<quint16>(&msg[0]);
        method = qFromBigEndian<quint16>(&msg[2]);
        len = qFromBigEndian<quint32>(&msg[4]);
        //qDebug("type = %d, method = %d, len = %d", type, method, len);

        parsing = true;
    }

    if (type != PB_MSG_TYPE_REQUEST)
    {
        qDebug("server(%s): unexpected msg type %d (expected %d)", __FUNCTION__,
            type, PB_MSG_TYPE_REQUEST);
        goto _error_exit;
    }

    methodDesc = service->GetDescriptor()->method(method);
    if (!methodDesc)
    {
        qDebug("server(%s): invalid method id %d", __FUNCTION__, method);
        goto _error_exit; //! \todo Return Error to client
    }

    if (isPending)
    {
        qDebug("server(%s): rpc pending, try again", __FUNCTION__);
        goto _error_exit; //! \todo Return Error to client
    }

    pendingMethodId = method;
    isPending = true;

    req = service->GetRequestPrototype(methodDesc).New();
    resp = service->GetResponsePrototype(methodDesc).New();

    if (len)
        req->ParseFromBoundedZeroCopyStream(inStream, len);

    if (!req->IsInitialized())
    {
        qWarning("Missing required fields in request");
        qDebug("%s", req->InitializationErrorString().c_str());
        qFatal("exiting");
        delete req;
        delete resp;

        goto _error_exit2;
    }
    //qDebug("Server(%s): successfully parsed as <%s>", __FUNCTION__, 
        //resp->DebugString().c_str());

    controller = new PbRpcController(req, resp);

    //qDebug("before service->callmethod()");

    service->CallMethod(methodDesc, controller, req, resp,
        google::protobuf::NewCallback(this, &RpcServer::done, controller));

    parsing = false;

    return;

_error_exit:
    inStream->Skip(len);
_error_exit2:
    parsing = false;
    qDebug("server(%s): discarding msg from client", __FUNCTION__);
    return;
}

