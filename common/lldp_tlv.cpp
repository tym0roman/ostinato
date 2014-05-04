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

#include "lldp_tlv.h"
#include "streambase.h"

#include <qendian.h>

Lldp_tlvConfigForm::Lldp_tlvConfigForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    hexEdit->setFont(QFont("Courier"));
    hexEdit->setOverwriteMode(false);
}

void Lldp_tlvConfigForm::on_hexEdit_overwriteModeChanged(bool isOverwriteMode)
{
    if (isOverwriteMode)
        mode->setText(tr("Ovr"));
    else
        mode->setText(tr("Ins"));
}

Lldp_tlvProtocol::Lldp_tlvProtocol(StreamBase *stream, AbstractProtocol *parent)
    : AbstractProtocol(stream, parent)
{
    /* The configWidget is created lazily */
    configForm = NULL;
}

Lldp_tlvProtocol::~Lldp_tlvProtocol()
{
    delete configForm;
}

AbstractProtocol* Lldp_tlvProtocol::createInstance(StreamBase *stream,
    AbstractProtocol *parent)
{
    return new Lldp_tlvProtocol(stream, parent);
}

quint32 Lldp_tlvProtocol::protocolNumber() const
{
    return OstProto::Protocol::kLldp_tlvFieldNumber;
}

void Lldp_tlvProtocol::protoDataCopyInto(OstProto::Protocol &protocol) const
{
    protocol.MutableExtension(OstProto::lldp_tlv)->CopyFrom(data);
    protocol.mutable_protocol_id()->set_id(protocolNumber());
}

void Lldp_tlvProtocol::protoDataCopyFrom(const OstProto::Protocol &protocol)
{
    if (protocol.protocol_id().id() == protocolNumber() &&
            protocol.HasExtension(OstProto::lldp_tlv))
        data.MergeFrom(protocol.GetExtension(OstProto::lldp_tlv));
}

QString Lldp_tlvProtocol::name() const
{
    return QString("Link Layer Discovery Protocol TLV");
}

QString Lldp_tlvProtocol::shortName() const
{
    return QString("LLDP TLV");
}

int Lldp_tlvProtocol::fieldCount() const
{
    return lldp_tlv_fieldCount;
}

AbstractProtocol::ProtocolIdType Lldp_tlvProtocol::protocolIdType() const
{
    return ProtocolIdIp;
}

quint32 Lldp_tlvProtocol::protocolId(ProtocolIdType type) const
{
    switch(type)
    {
        case ProtocolIdEth: return 0x88CC;
        default:break;
    }

    return AbstractProtocol::protocolId(type);
}

AbstractProtocol::FieldFlags Lldp_tlvProtocol::fieldFlags(int index) const
{
    AbstractProtocol::FieldFlags flags;

    flags = AbstractProtocol::fieldFlags(index);

    switch (index)
    {
        case lldp_tlv_content:
            flags |= FrameField;
            break;
        case lldp_tlv_id:
            flags |= FrameField;
            break;
        case lldp_tlv_len:
            flags |= FrameField;
            break;


        default:
            qFatal("%s: unimplemented case %d in switch", __PRETTY_FUNCTION__,
                index);
            break;
    }

    return flags;
}

QVariant Lldp_tlvProtocol::fieldData(int index, FieldAttrib attrib,
        int streamIndex) const
{
    switch (index)
    {
        case lldp_tlv_content:
        {
            QByteArray ba;
            QByteArray pad;

            switch(attrib)
            {
                case FieldValue:
                case FieldTextValue:
                case FieldFrameValue:
                    ba.append(QString().fromStdString(data.content()));

                    break;

                default:
                    break;
            }

            switch(attrib)
            {
                case FieldName:            
                    return QString("Content");
                case FieldValue:
                    return ba;
                case FieldTextValue:
                    return ba.append(pad).toHex();
                case FieldFrameValue:
                    return ba.append(pad);
                default:
                    break;
            }
            break;

        }
        case lldp_tlv_len:
        {
            switch(attrib)
            {
                case FieldName:
                    return QString("TLV Lenght");
                case FieldValue:
                    return data.len();
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) (data.len()),(uchar*) fv.data());
                    return fv;
                }
            //    return QByteArray(1, (char) data.len());
                case FieldTextValue:
                    return QString("0x%1").arg(data.len(), 3, BASE_HEX, QChar('0'));
                case FieldBitSize:
                    return 9;
                default:
                    break;
            }
            break;
        }
        case lldp_tlv_id:
        {
            switch(attrib)
            {
                case FieldName:
                    return QString("TLV ID");
                case FieldValue:
                    return data.id();
                case FieldTextValue:
                    return QString("0x%1").arg(data.id(), 2, BASE_HEX, QChar('0'));
                case FieldFrameValue:
            {   QByteArray a(1, (char) data.id());
                    return a;
            }
                case FieldBitSize:
                    return 7;
                default:
                    break;
            }
            break;
        }

        default:
            qFatal("%s: unimplemented case %d in switch", __PRETTY_FUNCTION__,
                index);
            break;
    }

    return AbstractProtocol::fieldData(index, attrib, streamIndex);
}

bool Lldp_tlvProtocol::setFieldData(int index, const QVariant &value,
        FieldAttrib attrib)
{
    bool isOk = false;

    if (attrib != FieldValue)
        goto _exit;

    switch (index)
    {
        case lldp_tlv_content:
        {
            QByteArray ba = value.toByteArray();
            data.set_content(ba.constData(), ba.size());
            isOk = true;
            break;
        }
        case lldp_tlv_id:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_id(a);
            break;
        }
        case lldp_tlv_len:
        {
            uint a = value.toUInt(&isOk);
            if (isOk)
                data.set_len(a);
            break;
        }

        default:
            qFatal("%s: unimplemented case %d in switch", __PRETTY_FUNCTION__,
                index);
            break;
    }

_exit:
    return isOk;
}

int Lldp_tlvProtocol::protocolFrameSize(int streamIndex) const
{
    int len = data.content().size();

   /* if (data.pad_until_end())
    {
        int pad = mpStream->frameLen(streamIndex) 
                    - (protocolFrameOffset(streamIndex) + len + kFcsSize);
        if (pad < 0)
            pad = 0;
        len += pad;
    }*/

    return len;
}

QWidget* Lldp_tlvProtocol::configWidget()
{
    /* Lazy creation of the configWidget */
    if (configForm == NULL)
    {
        configForm = new Lldp_tlvConfigForm;
        loadConfigWidget();
    }

    return configForm;
}

void Lldp_tlvProtocol::loadConfigWidget()
{
    configWidget();

    configForm->TLV_ID_field->setText(QString("%1").arg(data.id()));
    configForm->TLV_Len_field->setText(QString("%1").arg(data.len()));

    configForm->hexEdit->setData(
            fieldData(lldp_tlv_content, FieldValue).toByteArray());

}

void Lldp_tlvProtocol::storeConfigWidget()
{
    bool isOk;
    configWidget();
    data.set_id(configForm->TLV_ID_field->text().toULong(&isOk, 16));
    data.set_len(configForm->TLV_Len_field->text().toULong(&isOk, 16));
    setFieldData(lldp_tlv_content, configForm->hexEdit->data());

}

