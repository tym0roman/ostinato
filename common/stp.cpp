/*
Copyright (C) 2013 Prochkaruk M.

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

#include <qendian.h>

#include "stp.h"

StpConfigForm::StpConfigForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
}

StpProtocol::StpProtocol(StreamBase *stream, AbstractProtocol *parent)
    : AbstractProtocol(stream, parent)
{
    /* The configWidget is created lazily */
    configForm = NULL;
}

StpProtocol::~StpProtocol()
{
    delete configForm;
}

AbstractProtocol* StpProtocol::createInstance(StreamBase *stream,
    AbstractProtocol *parent)
{
    return new StpProtocol(stream, parent);
}

quint32 StpProtocol::protocolNumber() const
{
    return OstProto::Protocol::kStpFieldNumber;
}

void StpProtocol::protoDataCopyInto(OstProto::Protocol &protocol) const
{
    protocol.MutableExtension(OstProto::stp)->CopyFrom(data);
    protocol.mutable_protocol_id()->set_id(protocolNumber());
}

void StpProtocol::protoDataCopyFrom(const OstProto::Protocol &protocol)
{
    if (protocol.protocol_id().id() == protocolNumber() &&
            protocol.HasExtension(OstProto::stp))
        data.MergeFrom(protocol.GetExtension(OstProto::stp));
}

QString StpProtocol::name() const
{
    return QString("Spanning Tree Protocol");
}

QString StpProtocol::shortName() const
{
    return QString("STP");
}

/*!
  TODO Return the ProtocolIdType for your protocol \n

  If your protocol doesn't have a protocolId field, you don't need to 
  reimplement this method - the base class implementation will do the 
  right thing
*/
AbstractProtocol::ProtocolIdType StpProtocol::protocolIdType() const
{
    return ProtocolIdIp;
}

/*!
  TODO Return the protocolId for your protoocol based on the 'type' requested \n

  If not all types are valid for your protocol, handle the valid type(s) 
  and for the remaining fallback to the base class implementation; if your 
  protocol doesn't have a protocolId at all, you don't need to reimplement
  this method - the base class will do the right thing
*/
quint32 StpProtocol::protocolId(ProtocolIdType type) const
{
    switch(type)
    {
        case ProtocolIdLlc: return 0x424203;
        default:break;
    }

    return AbstractProtocol::protocolId(type);
}

int StpProtocol::fieldCount() const
{
    return stp_fieldCount;
}

/*!
  TODO Edit this function to return the appropriate flags for each field \n

  See AbstractProtocol::FieldFlags for more info
*/
AbstractProtocol::FieldFlags StpProtocol::fieldFlags(int index) const
{
    AbstractProtocol::FieldFlags flags;

    flags = AbstractProtocol::fieldFlags(index);

    switch (index)
    {
        case stp_identifier:
        case stp_version_identifier:
        case stp_BPDU_type:
        case stp_flags:
        case stp_root_identifier_extension:
        case stp_root_identifier_id:
        case stp_root_path_cost:
        case stp_bridge_identifier_extension:
        case stp_bridge_identifier_id:
        case stp_port_identifier:
        case stp_message_age:
        case stp_max_age:
        case stp_hello_time: 
        case stp_forward_delay:
            break;

        default:
            break;
    }

    return flags;
}

/*!
TODO: Edit this function to return the data for each field

See AbstractProtocol::fieldData() for more info
*/
QVariant StpProtocol::fieldData(int index, FieldAttrib attrib,
        int streamIndex) const
{
    switch (index)
    {
        case stp_identifier:
        {
            switch(attrib)
            {
                case FieldName:
                    return QString("Protocol identifier");
                case FieldValue:
                    return data.protocol_identifier();
                case FieldTextValue:
                {
                    // TO SHOW IN DEC: return data.protocol_identifier();
                    return QString("0x%1").arg(data.protocol_identifier(), 4, BASE_HEX, QChar('0'));
                }
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) data.protocol_identifier(),(uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }

        case stp_version_identifier:
        {
            switch(attrib)
            {
                case FieldName:            
                    return QString("Protocol version identifier");
                case FieldValue:
                    return data.protocol_version_identifier();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_version_identifier(), 2, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                    return QByteArray(1, (char) data.protocol_version_identifier());
                case FieldBitSize:
                    return 8;
                default:
                    break;
            }
            break;
        }

        case stp_BPDU_type:
        {
            switch(attrib)
            {
                case FieldName:            
                    return QString("BPDU type");
                case FieldValue:
                    return data.protocol_bpdu_type();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_bpdu_type(), 2, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                    return QByteArray(1, (char) data.protocol_bpdu_type());
                case FieldBitSize:
                    return 8;
                default:
                    break;
            }
            break;
        }

        case stp_flags:
        {
            switch(attrib)
            {
                case FieldName:
                    return QString("Protocol flag");
                case FieldValue:
                    return data.protocol_flags();
                case FieldTextValue:
                     return QString("0x%1").arg(data.protocol_flags(), 2, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                    return QByteArray(1, (char) data.protocol_flags());
                case FieldBitSize:
                    return 8;
                default:
                    break;
            }

            break;
        }

        case stp_root_identifier_extension:
        {
            switch(attrib)
            {
                case FieldName:
                    return QString("Root Bridge System ID Extension and Priority");
                case FieldValue:
                    return data.protocol_root_system_id_extension();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_root_system_id_extension(), 4, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) data.protocol_root_system_id_extension(),(uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }
        case stp_root_identifier_id:
        {
            quint64 root_system_id = data.protocol_root_system_id();
            switch(attrib)
            {
                case FieldName:
                    return QString("Root Bridge System ID");
                case FieldValue:
                    return root_system_id;
                case FieldTextValue:
                    return QString("0x%1").arg(root_system_id, 12, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(8);
                    qToBigEndian(root_system_id,(uchar*) fv.data());
                    fv.remove(0, 2);
                    return fv;
                }
                case FieldBitSize:
                    return 48;
                default:
                    break;
            }
            break;
        }
        case stp_root_path_cost:
        {
            quint64 root_path = data.protocol_root_path_cost();
            switch(attrib)
            {
                case FieldName:            
                    return QString("Protocol root path cost");
                case FieldValue:
                    return root_path;
                case FieldTextValue:
                    return root_path;
                case FieldFrameValue:
                    {
                        QByteArray fv;
                        fv.resize(8);
                        qToBigEndian(root_path,(uchar*) fv.data());
                        fv.remove(0, 4);
                        return fv;
                    }
                case FieldBitSize:
                    return 32;
                default:
                    break;
            }
            break;
        }


        case stp_bridge_identifier_extension:
        {
            switch(attrib)
            {
                case FieldName:
                    return QString("Bridge System ID Priority and Extension");
                case FieldValue:
                    return data.protocol_bridge_identifier_id_extension();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_bridge_identifier_id_extension(), 4, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) data.protocol_bridge_identifier_id_extension(),(uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }
        case stp_bridge_identifier_id:
        {
            quint64 bridge_system_id = data.protocol_bridge_identifier_id();
            switch(attrib)
            {
                case FieldName:
                    return QString("Bridge System ID");
                case FieldValue:
                    return bridge_system_id;
                case FieldTextValue:
                    return QString("0x%1").arg(bridge_system_id, 12, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(8);
                    qToBigEndian(bridge_system_id,(uchar*) fv.data());
                    fv.remove(0, 2);
                    return fv;
                }
                case FieldBitSize:
                    return 48;
                default:
                    break;
            }
            break;
        }
        case stp_port_identifier:
        {
            switch(attrib)
            {
                case FieldName:            
                    return QString("Protocol port identifier");
                case FieldValue:
                    return data.protocol_port_identifier();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_port_identifier(), 4, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) data.protocol_port_identifier(),(uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }
        case stp_message_age:
        {
            switch(attrib)
            {
                case FieldName:            
                    return QString("Message age");
                case FieldValue:
                    return data.protocol_message_age();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_message_age(), 4, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) (data.protocol_message_age()),(uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }
        case stp_max_age:
        {
            switch(attrib)
            {
                case FieldName:            
                    return QString("Max age");
                case FieldValue:
                    return data.protocol_max_age();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_max_age(), 4, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) data.protocol_max_age(),(uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }
        case stp_hello_time: 
        {
            switch(attrib)
            {
                case FieldName:            
                    return QString("Hello time");
                case FieldValue:
                    return data.protocol_hello_time();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_hello_time(), 4, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) data.protocol_hello_time(),(uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }
        case stp_forward_delay:
        {
            switch(attrib)
            {
                case FieldName:            
                    return QString("Forward delay");
                case FieldValue:
                    return data.protocol_forward_delay();
                case FieldTextValue:
                    return QString("0x%1").arg(data.protocol_forward_delay(), 4, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) data.protocol_forward_delay(),(uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }

        default:
            break;
    }

    return AbstractProtocol::fieldData(index, attrib, streamIndex);
}

/*!
TODO: Edit this function to set the data for each field

See AbstractProtocol::setFieldData() for more info
*/
bool StpProtocol::setFieldData(int index, const QVariant &value, 
        FieldAttrib attrib)
{
    bool isOk = false;
    if (attrib != FieldValue)
        goto _exit;

    switch (index)
    {
        case stp_identifier:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_identifier(a);
            break;
        }
        case stp_version_identifier:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_version_identifier(a);
            break;
        }
        case stp_BPDU_type:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_bpdu_type(a);
            break;
        }
        case stp_flags:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_flags(a);
            break;
        }
        case stp_root_identifier_extension:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_root_system_id_extension(a);
            break;
        }
        case stp_root_identifier_id:
        {
            quint32 a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_root_system_id(a);
            break;
        }
        case stp_root_path_cost:
        {
            quint32 a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_root_path_cost(a);
            break;
        }
        case stp_bridge_identifier_extension:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_bridge_identifier_id_extension(a);
            break;
        }
        case stp_bridge_identifier_id:
        {
            quint32 a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_bridge_identifier_id(a);
            break;
        }
        case stp_port_identifier:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_port_identifier(a);
            break;
        }
        case stp_message_age:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_message_age(a);
            break;
        }
        case stp_max_age:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_max_age(a);
            break;
        }
        case stp_hello_time:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_hello_time(a);
            break;
        }
        case stp_forward_delay:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_protocol_forward_delay(a);
            break;
        }
        default:
            break;
    }

_exit:
    return isOk;
}

/*!
  TODO: Return the protocol frame size in bytes\n

  If your protocol has a fixed size - you don't need to reimplement this; the
  base class implementation is good enough
*/
int StpProtocol::protocolFrameSize(int streamIndex) const
{
    return AbstractProtocol::protocolFrameSize(streamIndex);
}

/*!
  TODO: If your protocol has any variable fields, return true \n

  Otherwise you don't need to reimplement this method - the base class always
  returns false
*/
bool StpProtocol::isProtocolFrameValueVariable() const
{
    return false;
}

/*!
  TODO: If your protocol frame size can vary across pkts of the same stream,
  return true \n

  Otherwise you don't need to reimplement this method - the base class always
  returns false
*/
bool StpProtocol::isProtocolFrameSizeVariable() const
{
    return false;
}

/*!
  TODO: If your protocol frame has any variable fields or has a variable
  size, return the minimum number of frames required to vary the fields \n

  Otherwise you don't need to reimplement this method - the base class always
  returns 1
*/
int StpProtocol::protocolFrameVariableCount() const
{
    return 103;
}
int StpProtocol::frameFieldCount() const
{
    int count = AbstractProtocol::frameFieldCount();
    return count;
}
QWidget* StpProtocol::configWidget()
{
    /* Lazy creation of the configWidget */
    if (configForm == NULL)
    {
        configForm = new StpConfigForm;
        loadConfigWidget();
    }

    return configForm;
}

/*!
TODO: Edit this function to load each field's data into the config Widget

See AbstractProtocol::loadConfigWidget() for more info
*/
void StpProtocol::loadConfigWidget()
{
    quint64 root_system= data.protocol_root_system_id();
    quint64 bridge_system= data.protocol_bridge_identifier_id();
    quint64 root_path= data.protocol_root_path_cost();
    configWidget();
    configForm->ui_protocol_id->setText(uintToHexStr(data.protocol_identifier(), 2));
    configForm->ui_version_id->setText(uintToHexStr(data.protocol_version_identifier(),1));
    configForm->ui_protocol_type->setText(uintToHexStr(data.protocol_bpdu_type(),1));
    configForm->ui_flags->setText(uintToHexStr(data.protocol_flags(),1));

    configForm->ui_root_system_id_ex->setText(uintToHexStr(data.protocol_root_system_id_extension(),2));
    configForm->ui_root_system_id->setText(uintToHexStr(root_system,6));

    configForm->ui_root_path->setText(uintToHexStr(root_path,4));

    configForm->ui_bridge_system_id_ex->setText(uintToHexStr(data.protocol_bridge_identifier_id_extension(),2));
    configForm->ui_bridge_system_id->setText(uintToHexStr(bridge_system,6));

    configForm->ui_port_id->setText(uintToHexStr(data.protocol_port_identifier(),2));
    configForm->ui_message_age->setText(uintToHexStr(data.protocol_message_age(),2));
    configForm->ui_max_age->setText(uintToHexStr(data.protocol_max_age(),2));
    configForm->ui_hello_time->setText(uintToHexStr(data.protocol_hello_time(),2));
    configForm->ui_forward_delay->setText(uintToHexStr(data.protocol_forward_delay(),2));
}

/*!
TODO: Edit this function to store each field's data from the config Widget

See AbstractProtocol::storeConfigWidget() for more info
*/
void StpProtocol::storeConfigWidget()
{
    bool isOk;
    configWidget();
    data.set_protocol_identifier(configForm->ui_protocol_id->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_version_identifier(configForm->ui_version_id->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_bpdu_type(configForm->ui_protocol_type->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_flags(configForm->ui_flags->text().remove(QChar(' ')).toULong(&isOk, 16));

    data.set_protocol_root_system_id_extension(configForm->ui_root_system_id_ex->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_root_system_id(configForm->ui_root_system_id->text().remove(QChar(':')).toULongLong(&isOk, 16));

    data.set_protocol_root_path_cost(configForm->ui_root_path->text().remove(QChar(' ')).toULong(&isOk, 16));

    data.set_protocol_bridge_identifier_id_extension(configForm->ui_bridge_system_id_ex->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_bridge_identifier_id(configForm->ui_bridge_system_id->text().remove(QChar(':')).toULongLong(&isOk, 16));

    data.set_protocol_port_identifier(configForm->ui_port_id->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_message_age(configForm->ui_message_age->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_max_age(configForm->ui_max_age->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_hello_time(configForm->ui_hello_time->text().remove(QChar(' ')).toULong(&isOk, 16));
    data.set_protocol_forward_delay(configForm->ui_forward_delay->text().remove(QChar(' ')).toULong(&isOk, 16));
}

