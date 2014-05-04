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

#include "qinq.h"

QinqConfigForm::QinqConfigForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
}

QinqProtocol::QinqProtocol(StreamBase *stream, AbstractProtocol *parent)
    : AbstractProtocol(stream, parent)
{
    configForm = NULL;
}

QinqProtocol::~QinqProtocol()
{
    delete configForm;
}

AbstractProtocol* QinqProtocol::createInstance(StreamBase *stream,
    AbstractProtocol *parent)
{
    return new QinqProtocol(stream, parent);
}

quint32 QinqProtocol::protocolNumber() const
{
    return OstProto::Protocol::kQinqFieldNumber;
}

void QinqProtocol::protoDataCopyInto(OstProto::Protocol &protocol) const
{
    protocol.MutableExtension(OstProto::qinq)->CopyFrom(data);
    protocol.mutable_protocol_id()->set_id(protocolNumber());
}

void QinqProtocol::protoDataCopyFrom(const OstProto::Protocol &protocol)
{
    if (protocol.protocol_id().id() == protocolNumber() &&
            protocol.HasExtension(OstProto::qinq))
        data.MergeFrom(protocol.GetExtension(OstProto::qinq));
}

QString QinqProtocol::name() const
{
    return QString("Q-in-Q VLAN");
}

QString QinqProtocol::shortName() const
{
    return QString("QinQ");
}

int    QinqProtocol::fieldCount() const
{
    return qinq_fieldCount;
}

AbstractProtocol::FieldFlags QinqProtocol::fieldFlags(int index) const
{
    AbstractProtocol::FieldFlags flags;

    flags = AbstractProtocol::fieldFlags(index);

    switch (index)
    {
        case qinq_tpid:
        case qinq_prio:
        case qinq_cfiDei:
        case qinq_vlanId:
        case vlan_tpid:
        case vlan_prio:
        case vlan_cfiDei:
        case vlan_vlanId:
            break;

        // meta-fields
        case isOverrideTpid:
        case isOverrideVlanTpid:
            flags &= ~FrameField;
            flags |= MetaField;
            break;
    }

    return flags;
}

QVariant QinqProtocol::fieldData(int index, FieldAttrib attrib,
        int streamIndex) const
{
    switch (index)
    {
        case qinq_tpid:
        {
            quint16 tpid;
            tpid = data.is_override_tpid() ? data.qinq_tpid() : 0x88A8;
            switch(attrib)
            {
                case FieldName:
                    return QString("QinQ Tag Protocol Id");
                case FieldValue:
                    return tpid;
                case FieldTextValue:
                    return QString("0x%1").arg(tpid, 2, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian(tpid, (uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }

        case qinq_prio:
        {
            uint prio = ((data.qinq_vlan_tag() >> 13) & 0x07);

            switch(attrib)
            {
                case FieldName:
                    return QString("QinQ Priority");
                case FieldValue:
                    return prio;
                case FieldTextValue:
                    return QString("%1").arg(prio);
                case FieldFrameValue:
                    return QByteArray(1, (char) prio);
                case FieldBitSize:
                    return 3;
                default:
                    break;
            }
            break;
        }

        case qinq_cfiDei:
        {
            uint cfiDei = ((data.qinq_vlan_tag() >> 12) & 0x01);

            switch(attrib)
            {
                case FieldName:
                    return QString("QinQ CFI/DEI");
                case FieldValue:
                    return cfiDei;
                case FieldTextValue:
                    return QString("%1").arg(cfiDei);
                case FieldFrameValue:
                    return QByteArray(1, (char) cfiDei);
                case FieldBitSize:
                    return 1;
                default:
                    break;
            }
            break;
        }

        case qinq_vlanId:
        {
            quint16 vlanId = (data.qinq_vlan_tag() & 0x0FFF);

            switch(attrib)
            {
                case FieldName:
                    return QString("QinQ VLAN Id");
                case FieldValue:
                    return vlanId;
                case FieldTextValue:
                    return QString("%1").arg(vlanId);
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) vlanId, (uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 12;
                default:
                    break;
            }
            break;
        }

        case vlan_tpid:
        {
            quint16 tpid;

            tpid = data.is_override_tpid() ? data.vlan_tpid() : 0x8100;

            switch(attrib)
            {
                case FieldName:            
                    return QString("Tag Protocol Id");
                case FieldValue:
                    return tpid;
                case FieldTextValue:
                    return QString("0x%1").arg(tpid, 2, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian(tpid, (uchar*) fv.data()); 
                    return fv;
                }
                case FieldBitSize:
                    return 16;
                default:
                    break;
            }
            break;
        }

        case vlan_prio:
        {
            uint prio = ((data.vlan_vlan_tag() >> 13) & 0x07);

            switch(attrib)
            {
                case FieldName:            
                    return QString("Priority");
                case FieldValue:
                    return prio;
                case FieldTextValue:
                    return QString("%1").arg(prio);
                case FieldFrameValue:
                    return QByteArray(1, (char) prio);
                case FieldBitSize:
                    return 3;
                default:
                    break;
            }
            break;
        }

        case vlan_cfiDei:
        {
            uint cfiDei = ((data.vlan_vlan_tag() >> 12) & 0x01);

            switch(attrib)
            {
                case FieldName:            
                    return QString("CFI/DEI");
                case FieldValue:
                    return cfiDei;
                case FieldTextValue:
                    return QString("%1").arg(cfiDei);
                case FieldFrameValue:
                    return QByteArray(1, (char) cfiDei);
                case FieldBitSize:
                    return 1;
                default:
                    break;
            }
            break;
        }

        case vlan_vlanId:
        {
            quint16 vlanId = (data.vlan_vlan_tag() & 0x0FFF);

            switch(attrib)
            {
                case FieldName:            
                    return QString("VLAN Id");
                case FieldValue:
                    return vlanId;
                case FieldTextValue:
                    return QString("%1").arg(vlanId);
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(2);
                    qToBigEndian((quint16) vlanId, (uchar*) fv.data());
                    return fv;
                }
                case FieldBitSize:
                    return 12;
                default:
                    break;
            }
            break;
        }
        // Meta fields
        case isOverrideTpid:
        default:
            break;
    }

    return AbstractProtocol::fieldData(index, attrib, streamIndex);
}

bool QinqProtocol::setFieldData(int /*index*/, const QVariant &/*value*/, 
        FieldAttrib /*attrib*/)
{
    return false;
}


QWidget* QinqProtocol::configWidget()
{
    if (configForm == NULL)
    {
        configForm = new QinqConfigForm;
        loadConfigWidget();
    }
    return configForm;
}

void QinqProtocol::loadConfigWidget()
{
    configWidget();

    configForm->cbTpidOverride->setChecked(data.is_override_tpid());
    configForm->leTpid->setText(uintToHexStr(fieldData(vlan_tpid, FieldValue).toUInt(), 2));
    configForm->cmbPrio->setCurrentIndex(fieldData(vlan_prio, FieldValue).toUInt());
    configForm->cmbCfiDei->setCurrentIndex(fieldData(vlan_cfiDei, FieldValue).toUInt());
    configForm->leVlanId->setText(fieldData(vlan_vlanId, FieldValue).toString());
    configForm->cbVlanTpidOverride->setChecked(data.is_override_tpid());
    configForm->ui_qinq_tpid->setText(uintToHexStr(fieldData(qinq_tpid, FieldValue).toUInt(), 2));
    configForm->ui_qinq_priority->setCurrentIndex(fieldData(qinq_prio, FieldValue).toUInt());
    configForm->ui_qinq_cfu_dei->setCurrentIndex(fieldData(qinq_cfiDei, FieldValue).toUInt());
    configForm->ui_qinq_vlan->setText(fieldData(qinq_vlanId, FieldValue).toString());
}

void QinqProtocol::storeConfigWidget()
{
    bool isOk;

    configWidget();

    data.set_is_override_tpid(configForm->cbTpidOverride->isChecked());
    data.set_vlan_tpid(configForm->leTpid->text().remove(QChar(' ')).toULong(&isOk, BASE_HEX));
    data.set_vlan_vlan_tag(
        ((configForm->cmbPrio->currentIndex()   & 0x07) << 13) |
        ((configForm->cmbCfiDei->currentIndex() & 0x01) << 12) |
        (configForm->leVlanId->text().toULong(&isOk) & 0x0FFF));
    data.set_is_override_tpid(configForm->cbVlanTpidOverride->isChecked());
    data.set_qinq_tpid(configForm->ui_qinq_tpid->text().remove(QChar(' ')).toULong(&isOk, BASE_HEX));
    data.set_qinq_vlan_tag(
        ((configForm->ui_qinq_priority->currentIndex()   & 0x07) << 13) |
        ((configForm->ui_qinq_cfu_dei->currentIndex() & 0x01) << 12) |
        (configForm->ui_qinq_vlan->text().toULong(&isOk) & 0x0FFF));
}

