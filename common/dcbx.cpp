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

#include "dcbx.h"

DcbxConfigForm::DcbxConfigForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
}

DcbxProtocol::DcbxProtocol(StreamBase *stream, AbstractProtocol *parent)
    : AbstractProtocol(stream, parent)
{
    /* The configWidget is created lazily */
    configForm = NULL;
}

DcbxProtocol::~DcbxProtocol()
{
    delete configForm;
}

AbstractProtocol* DcbxProtocol::createInstance(StreamBase *stream,
    AbstractProtocol *parent)
{
    return new DcbxProtocol(stream, parent);
}

quint32 DcbxProtocol::protocolNumber() const
{
    return OstProto::Protocol::kDcbxFieldNumber;
}

void DcbxProtocol::protoDataCopyInto(OstProto::Protocol &protocol) const
{
    protocol.MutableExtension(OstProto::dcbx)->CopyFrom(data);
    protocol.mutable_protocol_id()->set_id(protocolNumber());
}

void DcbxProtocol::protoDataCopyFrom(const OstProto::Protocol &protocol)
{
    if (protocol.protocol_id().id() == protocolNumber() &&
            protocol.HasExtension(OstProto::dcbx))
        data.MergeFrom(protocol.GetExtension(OstProto::dcbx));
}

QString DcbxProtocol::name() const
{
    return QString("DcbxProtocol");
}

QString DcbxProtocol::shortName() const
{
    return QString("DCBX");
}

/*!
  TODO Return the ProtocolIdType for your protocol \n

  If your protocol doesn't have a protocolId field, you don't need to 
  reimplement this method - the base class implementation will do the 
  right thing
*/
AbstractProtocol::ProtocolIdType DcbxProtocol::protocolIdType() const
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
quint32 DcbxProtocol::protocolId(ProtocolIdType type) const
{
    switch(type)
    {
        case ProtocolIdLlc: return 0x424203;
        default:break;
    }

    return AbstractProtocol::protocolId(type);
}

int DcbxProtocol::fieldCount() const
{
    if(configForm->radioButtonConf->isChecked())
    return dcbx_fieldCount_c;
    else
    if(configForm->radioButtonRec->isChecked())
    return  dcbx_fieldCount_r;
    else
    if(configForm->radioButtonPrior->isChecked())
    return  dcbx_fieldCount_p;
    else
    if(configForm->radioButtonApp->isChecked())
    return  dcbx_fieldCount_a;
    else return 0;
}

/*!
  TODO Edit this function to return the appropriate flags for each field \n

  See AbstractProtocol::FieldFlags for more info
*/
AbstractProtocol::FieldFlags DcbxProtocol::fieldFlags(int index) const
{
    AbstractProtocol::FieldFlags flags;

    flags = AbstractProtocol::fieldFlags(index);

    switch (index)
    {
        case is_c:
        case is_r:
        case is_p :
        case is_a :
        flags &= ~FrameField;
        flags |= MetaField;
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
QVariant DcbxProtocol::fieldData(int index, FieldAttrib attrib,
        int streamIndex) const
{
    if(configForm->radioButtonConf->isChecked())
    {
    switch (index)
    {

            case tlv_type_len_c:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("TLV Type, Information string length");
                    case FieldValue:
                         return data.tlv_type_len_c();
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.tlv_type_len_c(), 2, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        {
                            QByteArray fv;
                            fv.resize(2);
                            qToBigEndian((quint16) data.tlv_type_len_c(), (uchar*)fv.data());
                            return fv;
                        }
                default:
                    break;
                }
                break;

            }
            case oui802_c:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("802.1 OUI");
                    case FieldValue:
                         return data.oui802_c() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.oui802_c(), 3, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        {
                            QByteArray fv;
                            fv.resize(4);
                            qToBigEndian((quint32) data.oui802_c(), (uchar*)fv.data());
                            fv.remove(0,1);
                            return fv;
                        }
                default:
                    break;
                }
                break;
            }
            case subtype802_c:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("802.1 subtype");
                    case FieldValue:
                         return data.subtype802_c() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.subtype802_c(), 1, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        return QByteArray(1, (char) data.subtype802_c());
                default:
                    break;
                }
                break;
            }
            case will_cbs_res_tcs:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("Willing, CBS, Reserved, MAX TCs");
                    case FieldValue:
                         return data.will_cbs_res_tcs() ;
                    case FieldTextValue:
                    return QString("%1").
                            arg(data.will_cbs_res_tcs(), 1, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        return QByteArray(1, (char) data.will_cbs_res_tcs());
                default:
                    break;
                }
                break;
            }
            case prior_ass_c:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("Priority Assignment Table");
                    case FieldValue:
                         return data.prior_ass_c() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.prior_ass_c(), 4, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        {
                            QByteArray fv;
                            fv.resize(4);
                            qToBigEndian((quint32) data.prior_ass_c(), (uchar*)fv.data());
                            return fv;
                        }
                default:
                    break;
                }
                break;
            }
            case tc_band_c:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("TC Bandwidth Table");
                    case FieldValue:
                         return (quint32)data.tc_band_c() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.tc_band_c(), 8, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        {
                            QByteArray fv;
                            fv.resize(8);
                            qToBigEndian((quint64) data.tc_band_c(), (uchar*)fv.data());
                            return fv;
                        }
                default:
                    break;
                }
            break;
        }
            case tsa_ass_c:
                {
                    switch(attrib)
                    {
                        case FieldName:
                            return QString("TSA Assignment Table");
                        case FieldValue:
                             return (quint32)data.tsa_ass_c() ;
                        case FieldTextValue:
                        return QString("0x%1").
                                arg(data.tsa_ass_c(), 8, BASE_HEX, QChar('0'));
                        case FieldFrameValue:
                            {
                                QByteArray fv;
                                fv.resize(8);
                                qToBigEndian((quint64) data.tsa_ass_c(), (uchar*)fv.data());
                                return fv;
                            }
                    default:
                        break;
                    }
                break;
            }

    default:
            break;
    }
    ///-----------------------------------------------------------------------------------------------------------
}

if(configForm->radioButtonRec->isChecked())
{
        switch (index)
        {

                case tlv_type_len_r:
                {
                    switch(attrib)
                    {
                        case FieldName:
                            return QString("TLV Type, Information string length");
                        case FieldValue:
                             return data.tlv_type_len_r();
                        case FieldTextValue:
                        return QString("0x%1").
                                arg(data.tlv_type_len_r(), 2, BASE_HEX, QChar('0'));
                        case FieldFrameValue:
                            {
                                QByteArray fv;
                                fv.resize(2);
                                qToBigEndian((quint16) data.tlv_type_len_r(), (uchar*)fv.data());
                                return fv;
                            }
                    default:
                        break;
                    }
                    break;

                }
                case oui802_r:
                {
                    switch(attrib)
                    {
                        case FieldName:
                            return QString("802.1 OUI");
                        case FieldValue:
                             return data.oui802_r() ;
                        case FieldTextValue:
                        return QString("0x%1").
                                arg(data.oui802_r(), 3, BASE_HEX, QChar('0'));
                        case FieldFrameValue:
                            {
                                QByteArray fv;
                                fv.resize(4);
                                qToBigEndian((quint32) data.oui802_r(), (uchar*)fv.data());
                                fv.remove(0,1);
                                return fv;
                            }
                    default:
                        break;
                    }
                    break;
                }
                case subtype802_r:
                {
                    switch(attrib)
                    {
                        case FieldName:
                            return QString("802.1 subtype");
                        case FieldValue:
                             return data.subtype802_r() ;
                        case FieldTextValue:
                        return QString("0x%1").
                                arg(data.subtype802_r(), 1, BASE_HEX, QChar('0'));
                        case FieldFrameValue:
                            return QByteArray(1, (char) data.subtype802_r());
                    default:
                        break;
                    }
                    break;
                }
                case reserved_r:
                {
                    switch(attrib)
                    {
                        case FieldName:
                            return QString("Reserved");
                        case FieldValue:
                             return data.reserved_r() ;
                        case FieldTextValue:
                        return QString("%1").
                                arg(data.reserved_r(), 1, BASE_HEX, QChar('0'));
                        case FieldFrameValue:
                            return QByteArray(1, (char) data.reserved_r());
                    default:
                        break;
                    }
                    break;
                }
                case prior_ass_r:
                {
                    switch(attrib)
                    {
                        case FieldName:
                            return QString("Priority Assignment Table");
                        case FieldValue:
                             return data.prior_ass_r() ;
                        case FieldTextValue:
                        return QString("0x%1").
                                arg(data.prior_ass_r(), 4, BASE_HEX, QChar('0'));
                        case FieldFrameValue:
                            {
                                QByteArray fv;
                                fv.resize(4);
                                qToBigEndian((quint32) data.prior_ass_r(), (uchar*)fv.data());
                                return fv;
                            }
                    default:
                        break;
                    }
                    break;
                }
                case tc_band_r:
                {
                    switch(attrib)
                    {
                        case FieldName:
                            return QString("TC Bandwidth Table");
                        case FieldValue:
                             return (quint32)data.tc_band_r() ;
                        case FieldTextValue:
                        return QString("0x%1").
                                arg(data.tc_band_r(), 8, BASE_HEX, QChar('0'));
                        case FieldFrameValue:
                            {
                                QByteArray fv;
                                fv.resize(8);
                                qToBigEndian((quint64) data.tc_band_r(), (uchar*)fv.data());
                                return fv;
                            }
                    default:
                        break;
                    }
                break;
            }
                case tsa_ass_r:
                    {
                        switch(attrib)
                        {
                            case FieldName:
                                return QString("TSA Assignment Table");
                            case FieldValue:
                                 return (quint32)data.tsa_ass_r() ;
                            case FieldTextValue:
                            return QString("0x%1").
                                    arg(data.tsa_ass_r(), 8, BASE_HEX, QChar('0'));
                            case FieldFrameValue:
                                {
                                    QByteArray fv;
                                    fv.resize(8);
                                    qToBigEndian((quint64) data.tsa_ass_r(), (uchar*)fv.data());
                                    return fv;
                                }
                        default:
                            break;
                        }
                    break;
                }

        default:
                break;
        }

}

if(configForm->radioButtonPrior->isChecked())
{
    switch (index)
    {

            case tlv_type_len_p:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("TLV Type, Information string length");
                    case FieldValue:
                         return data.tlv_type_len_p();
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.tlv_type_len_p(), 2, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        {
                            QByteArray fv;
                            fv.resize(2);
                            qToBigEndian((quint16) data.tlv_type_len_p(), (uchar*)fv.data());
                            return fv;
                        }
                default:
                    break;
                }
                break;

            }
            case oui802_p:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("802.1 OUI");
                    case FieldValue:
                         return data.oui802_p() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.oui802_p(), 3, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        {
                            QByteArray fv;
                            fv.resize(4);
                            qToBigEndian((quint32) data.oui802_p(), (uchar*)fv.data());
                            fv.remove(0,1);
                            return fv;
                        }
                default:
                    break;
                }
                break;
            }
            case subtype802_p:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("802.1 subtype");
                    case FieldValue:
                         return data.subtype802_p() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.subtype802_p(), 1, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        return QByteArray(1, (char) data.subtype802_p());
                default:
                    break;
                }
                break;
            }
            case will_mbc_res_pfc:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("Willing, MBC , Reserved, PFC cap");
                    case FieldValue:
                         return data.will_mbc_res_pfc() ;
                    case FieldTextValue:
                    return QString("%1").
                            arg(data.will_mbc_res_pfc(), 1, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                    return QByteArray(1, (char) data.will_mbc_res_pfc());
                default:
                    break;
                }
                break;
            }
            case pfc_enable:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("PFC Enable");
                    case FieldValue:
                         return data. pfc_enable() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data. pfc_enable(), 1, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                       return QByteArray(1, (char) data. pfc_enable());
                default:
                    break;
                }
                break;
            }

    default:
            break;
    }



}

if(configForm->radioButtonApp->isChecked())
{
    switch (index)
    {

            case tlv_type_len_a:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("TLV Type, Information string length");
                    case FieldValue:
                         return data.tlv_type_len_a();
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.tlv_type_len_a(), 2, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        {
                            QByteArray fv;
                            fv.resize(2);
                            qToBigEndian((quint16) data.tlv_type_len_a(), (uchar*)fv.data());
                            return fv;
                        }
                default:
                    break;
                }
                break;

            }
            case oui802_a:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("802.1 OUI");
                    case FieldValue:
                         return data.oui802_a() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.oui802_a(), 3, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        {
                            QByteArray fv;
                            fv.resize(4);
                            qToBigEndian((quint32) data.oui802_a(), (uchar*)fv.data());
                            fv.remove(0,1);
                            return fv;
                        }
                default:
                    break;
                }
                break;
            }
            case subtype802_a:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("802.1 subtype");
                    case FieldValue:
                         return data.subtype802_a() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.subtype802_a(), 1, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                        return QByteArray(1, (char) data.subtype802_a());
                default:
                    break;
                }
                break;
            }
            case reserved_a:
            {
                switch(attrib)
                {
                    case FieldName:
                        return QString("Reserved");
                    case FieldValue:
                         return data.reserved_a() ;
                    case FieldTextValue:
                    return QString("%1").
                            arg(data.reserved_a(), 1, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                    return QByteArray(1, (char) data.reserved_a());
                default:
                    break;
                }
                break;
            }
            case app_priority:
            {
             /*   switch(attrib)
                {
                    case FieldName:
                        return QString("Application Priority Table");
                    case FieldValue:
                         return data.app_priority() ;
                    case FieldTextValue:
                    return QString("0x%1").
                            arg(data.app_priority(), 1, BASE_HEX, QChar('0'));
                    case FieldFrameValue:
                       return QByteArray(1, (char) data.app_priority());
                default:
                    break;
                }
                break;*/
            }

    default:
            break;
    }


}

    return AbstractProtocol::fieldData(index, attrib, streamIndex);
}

/*!
TODO: Edit this function to set the data for each field

See AbstractProtocol::setFieldData() for more info
*/
bool DcbxProtocol::setFieldData(int index, const QVariant &value, 
        FieldAttrib attrib)
{
    bool isOk = false;
    if (attrib != FieldValue)
        goto _exit;

_exit:
    return isOk;
}

/*!
  TODO: Return the protocol frame size in bytes\n

  If your protocol has a fixed size - you don't need to reimplement this; the
  base class implementation is good enough
*/
int DcbxProtocol::protocolFrameSize(int streamIndex) const
{
    return AbstractProtocol::protocolFrameSize(streamIndex);
}

/*!
  TODO: If your protocol has any variable fields, return true \n

  Otherwise you don't need to reimplement this method - the base class always
  returns false
*/
bool DcbxProtocol::isProtocolFrameValueVariable() const
{
    return false;
}

/*!
  TODO: If your protocol frame size can vary across pkts of the same stream,
  return true \n

  Otherwise you don't need to reimplement this method - the base class always
  returns false
*/
bool DcbxProtocol::isProtocolFrameSizeVariable() const
{
    return false;
}

/*!
  TODO: If your protocol frame has any variable fields or has a variable
  size, return the minimum number of frames required to vary the fields \n

  Otherwise you don't need to reimplement this method - the base class always
  returns 1
*/
int DcbxProtocol::protocolFrameVariableCount() const
{
    return 298;
}
int DcbxProtocol::frameFieldCount() const
{
    int count = AbstractProtocol::frameFieldCount();
    return count;
}
QWidget* DcbxProtocol::configWidget()
{
    /* Lazy creation of the configWidget */
    if (configForm == NULL)
    {
        configForm = new DcbxConfigForm;
        loadConfigWidget();
    }

    return configForm;
}

/*!
TODO: Edit this function to load each field's data into the config Widget

See AbstractProtocol::loadConfigWidget() for more info
*/
void DcbxProtocol::loadConfigWidget()
{
     configWidget();


        quint16 type = (data.tlv_type_len_c() & 65024) >> 9;
        quint16 info = data.tlv_type_len_c() & 511;
        configForm->lineEditType->setText(QString().setNum(type));
        configForm->lineEditInfo->setText(QString().setNum(info));

        configForm->lineEditOUI_c->setText(uintToHexStr(data.oui802_c(),3));
        configForm->lineEditSubtype_c->setText(QString().setNum(data.subtype802_c()));


        configForm->lineEditWilling_c->setText(QString().setNum(( data.will_cbs_res_tcs() >> 7) & 0b00000001));
        configForm->lineEditCBS_c->setText(QString().setNum(( data.will_cbs_res_tcs() >> 6) & 0b00000001));

        configForm->lineEditReserved_c->setText(QString().setNum(( data.will_cbs_res_tcs() >> 5) & 0b00000001)
                                                +QString().setNum(( data.will_cbs_res_tcs() >> 4) & 0b00000001)
                                                +QString().setNum(( data.will_cbs_res_tcs() >> 3) & 0b00000001)
                                                );
        configForm->lineEditMAX_c->setText(QString().setNum( (data.will_cbs_res_tcs()>> 2) & 0b00000001)
                                           +QString().setNum(( data.will_cbs_res_tcs() >> 1) & 0b00000001)
                                           +QString().setNum( data.will_cbs_res_tcs() & 0b00000001)
                                           );

        configForm->lineEditPriAss_c->setText(uintToHexStr(data.prior_ass_c(),4));
        configForm->lineEditTCBand_c->setText(uintToHexStr(data.tc_band_c(),8));
        configForm->lineEditTSAAss_c->setText(uintToHexStr(data.tsa_ass_c(),8));

        type = (data.tlv_type_len_r() & 65024) >> 9;
        info = data.tlv_type_len_r() & 511;
        configForm->lineEditType->setText(QString().setNum(type));
        configForm->lineEditInfo->setText(QString().setNum(info));
        configForm->lineEditOUI_r->setText(uintToHexStr(data.oui802_r(),3));
        configForm->lineEditSubtype_r->setText(QString().setNum(data.subtype802_r()));
        configForm->lineEditReserved_r->setText(uintToHexStr(data.reserved_r(),1));
        configForm->lineEditPriority_r->setText(uintToHexStr(data.prior_ass_r(),4));
        configForm->lineEditTC_r->setText(uintToHexStr(data.tc_band_r(),8));
        configForm->lineEditTSA_r->setText(uintToHexStr(data.tsa_ass_r(),8));

        type = (data.tlv_type_len_p() & 65024) >> 9;
        info = data.tlv_type_len_p() & 511;
        configForm->lineEditType->setText(QString().setNum(type));
        configForm->lineEditInfo->setText(QString().setNum(info));

        configForm->lineEditOUI_p->setText(uintToHexStr(data.oui802_p(),3));
configForm->lineEditsubtype_p->setText(QString().setNum(data.subtype802_p()));
configForm->lineEditWilling_p->setText(QString().setNum(( data.will_mbc_res_pfc() >> 7) & 0b00000001));
configForm->lineEditMBC_p->setText(QString().setNum(( data.will_mbc_res_pfc() >> 6) & 0b00000001));
configForm->lineEditReserved_p->setText(QString().setNum(( data.will_mbc_res_pfc() >> 5) & 0b00000001)
                                        +QString().setNum(( data.will_mbc_res_pfc() >> 4) & 0b00000001)

            );
configForm->lineEditPFC_p->setText(QString().setNum(( data.will_mbc_res_pfc() >> 3) & 0b00000001)
                                   +QString().setNum(( data.will_mbc_res_pfc() >> 2) & 0b00000001)
                                   +QString().setNum(( data.will_mbc_res_pfc() >> 1) & 0b00000001)
                                   +QString().setNum( data.will_mbc_res_pfc() & 0b00000001)
            );
configForm->lineEditPFC_p_2->setText(uintToHexStr(data.pfc_enable(),1));


        type = (data.tlv_type_len_a() & 65024) >> 9;
         info = data.tlv_type_len_a() & 511;
        configForm->lineEditType->setText(QString().setNum(type));
        configForm->lineEditInfo->setText(QString().setNum(info));
        configForm->lineEditOUI_a->setText(uintToHexStr(data.oui802_a(),3));
        configForm->lineEditsubtype_a->setText(QString().setNum(data.subtype802_a()));
        configForm->lineEditReserved_a->setText(uintToHexStr(data.reserved_a(),1));
/////configForm->lineEditApplication_a->setText()


    configForm->radioButtonConf->setChecked(data.is_c());
    configForm->radioButtonRec->setChecked(data.is_r());
    configForm->radioButtonPrior->setChecked(data.is_p());
    configForm->radioButtonApp->setChecked(data.is_a());
}

/*!
TODO: Edit this function to store each field's data from the config Widget

See AbstractProtocol::storeConfigWidget() for more info
*/
void DcbxProtocol::storeConfigWidget()
{
    bool isOk;
    configWidget();

 quint16 type_info = 0;
 quint16 type = 0;
 quint16 info = 0;
 quint8 will= 0;
 quint8 temp= 0;
     if(configForm->radioButtonConf->isChecked())
     {
         type = configForm->lineEditType->text()
                 .remove(QChar(' ')).toULongLong(&isOk);
         type = type << 9;
         info =configForm->lineEditInfo->text()
                 .remove(QChar(' ')).toULongLong(&isOk);
         type_info = type | info;
        data.set_tlv_type_len_c(type_info);
        data.set_oui802_c(configForm->lineEditOUI_c->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_subtype802_c(configForm->lineEditSubtype_c->text()
                              .remove(QChar(' ')).toULongLong(&isOk));
        temp=configForm->lineEditWilling_c->text().remove(QChar(' ')).toULongLong(&isOk, BASE_BIN);
        temp = temp << 7;
        will = will | temp;
        temp=0;
        temp=configForm->lineEditCBS_c->text().remove(QChar(' ')).toULongLong(&isOk, BASE_BIN);
        temp = temp << 6;
        will = will | temp;
        temp=0;
        temp=configForm->lineEditReserved_c->text().remove(QChar(' ')).toULongLong(&isOk, BASE_BIN);
        temp = temp << 3;
        will = will | temp;
        temp=0;
        temp=configForm->lineEditMAX_c->text().remove(QChar(' ')).toULongLong(&isOk, BASE_BIN);
        will = will | temp;
        temp=0;
        data.set_will_cbs_res_tcs(will);
        data.set_prior_ass_c(configForm->lineEditPriAss_c->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_tc_band_c(configForm->lineEditTCBand_c->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_tsa_ass_c(configForm->lineEditTSAAss_c->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
     }
     if(configForm->radioButtonRec->isChecked())
     {

         type = configForm->lineEditType->text()
                 .remove(QChar(' ')).toULongLong(&isOk);
         type = type << 9;
         info =configForm->lineEditInfo->text()
                 .remove(QChar(' ')).toULongLong(&isOk);
         type_info = type | info;
        data.set_tlv_type_len_r(type_info);

        data.set_oui802_r(configForm->lineEditOUI_r->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_subtype802_r(configForm->lineEditSubtype_r->text()
                              .remove(QChar(' ')).toULongLong(&isOk));
        data.set_reserved_r(configForm->lineEditReserved_r->text()
                              .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_prior_ass_r(configForm->lineEditPriority_r->text()
                              .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_tc_band_r(configForm->lineEditTC_r->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_tsa_ass_r(configForm->lineEditTSA_r->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));

     }
     if(configForm->radioButtonPrior->isChecked())
     {
         type = configForm->lineEditType->text()
                 .remove(QChar(' ')).toULongLong(&isOk);
         type = type << 9;
         info =configForm->lineEditInfo->text()
                 .remove(QChar(' ')).toULongLong(&isOk);
         type_info = type | info;
        data.set_tlv_type_len_p(type_info);

        data.set_oui802_p(configForm->lineEditOUI_p->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_subtype802_p(configForm->lineEditsubtype_p->text()
                              .remove(QChar(' ')).toULongLong(&isOk));
        temp=configForm->lineEditWilling_p->text().remove(QChar(' ')).toULongLong(&isOk, BASE_BIN);
        temp = temp << 7;
        will = will | temp;
        temp=0;
        temp=configForm->lineEditMBC_p->text().remove(QChar(' ')).toULongLong(&isOk, BASE_BIN);
        temp = temp << 6;
        will = will | temp;
        temp=0;
        temp=configForm->lineEditReserved_p->text().remove(QChar(' ')).toULongLong(&isOk, BASE_BIN);
        temp = temp << 4;
        will = will | temp;
        temp=0;
        temp=configForm->lineEditPFC_p->text().remove(QChar(' ')).toULongLong(&isOk, BASE_BIN);
        will = will | temp;
        temp=0;
        data.set_will_mbc_res_pfc(will);
        data.set_pfc_enable(configForm->lineEditPFC_p_2->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));

     }
     if(configForm->radioButtonApp->isChecked())
     {
         type = configForm->lineEditType->text()
                 .remove(QChar(' ')).toULongLong(&isOk);
         type = type << 9;
         info =configForm->lineEditInfo->text()
                 .remove(QChar(' ')).toULongLong(&isOk);
         type_info = type | info;
        data.set_tlv_type_len_a(type_info);
        data.set_oui802_a(configForm->lineEditOUI_a->text()
                          .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
        data.set_subtype802_a(configForm->lineEditsubtype_a->text()
                              .remove(QChar(' ')).toULongLong(&isOk));
        data.set_reserved_a(configForm->lineEditReserved_a->text()
                              .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));
   ////////     data.set_app_priority(configForm->lineEditApplication_a->text()...................);
     }

     // meta data

     data.set_is_c(configForm->radioButtonConf->isChecked());
     data.set_is_r(configForm->radioButtonRec->isChecked());
     data.set_is_p(configForm->radioButtonPrior->isChecked());
     data.set_is_a(configForm->radioButtonApp->isChecked());
}

