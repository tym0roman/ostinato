/****************************************************************************
** Meta object code from reading C++ file 'pbrpcchannel.h'
**
** Created: Mon Apr 28 09:08:31 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pbrpcchannel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pbrpcchannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PbRpcChannel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      26,   13,   13,   13, 0x05,
      53,   41,   13,   13, 0x05,
     101,   89,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     144,   13,   13,   13, 0x08,
     168,   13,   13,   13, 0x08,
     195,   89,   13,   13, 0x08,
     250,   41,   13,   13, 0x08,
     298,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PbRpcChannel[] = {
    "PbRpcChannel\0\0connected()\0disconnected()\0"
    "socketError\0error(QAbstractSocket::SocketError)\0"
    "socketState\0stateChanged(QAbstractSocket::SocketState)\0"
    "on_mpSocket_connected()\0"
    "on_mpSocket_disconnected()\0"
    "on_mpSocket_stateChanged(QAbstractSocket::SocketState)\0"
    "on_mpSocket_error(QAbstractSocket::SocketError)\0"
    "on_mpSocket_readyRead()\0"
};

void PbRpcChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PbRpcChannel *_t = static_cast<PbRpcChannel *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->on_mpSocket_connected(); break;
        case 5: _t->on_mpSocket_disconnected(); break;
        case 6: _t->on_mpSocket_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 7: _t->on_mpSocket_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->on_mpSocket_readyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PbRpcChannel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PbRpcChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PbRpcChannel,
      qt_meta_data_PbRpcChannel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PbRpcChannel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PbRpcChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PbRpcChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PbRpcChannel))
        return static_cast<void*>(const_cast< PbRpcChannel*>(this));
    if (!strcmp(_clname, "::google::protobuf::RpcChannel"))
        return static_cast< ::google::protobuf::RpcChannel*>(const_cast< PbRpcChannel*>(this));
    return QObject::qt_metacast(_clname);
}

int PbRpcChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PbRpcChannel::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PbRpcChannel::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PbRpcChannel::error(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PbRpcChannel::stateChanged(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
