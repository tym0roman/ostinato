/*
Copyright (C) 2013 Fedorenko A.

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

#include "lacp.h"


LacpConfigForm::LacpConfigForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
}

LacpProtocol::LacpProtocol(StreamBase *stream, AbstractProtocol *parent)
    : AbstractProtocol(stream, parent)
{
    /* The configWidget is created lazily */
    configForm = NULL;
}

LacpProtocol::~LacpProtocol()
{
    delete configForm;
}

AbstractProtocol* LacpProtocol::createInstance(StreamBase *stream,
    AbstractProtocol *parent)
{
    return new LacpProtocol(stream, parent);
}

quint32 LacpProtocol::protocolNumber() const
{
    return OstProto::Protocol::kLacpFieldNumber;
}

void LacpProtocol::protoDataCopyInto(OstProto::Protocol &protocol) const
{
    protocol.MutableExtension(OstProto::lacp)->CopyFrom(data);
    protocol.mutable_protocol_id()->set_id(protocolNumber());
}

void LacpProtocol::protoDataCopyFrom(const OstProto::Protocol &protocol)
{
    if (protocol.protocol_id().id() == protocolNumber() &&
            protocol.HasExtension(OstProto::lacp))
        data.MergeFrom(protocol.GetExtension(OstProto::lacp));
}

QString LacpProtocol::name() const
{
    return QString("Link Aggregation Control Protocol");
}

QString LacpProtocol::shortName() const
{
    return QString("LACP");
}


AbstractProtocol::ProtocolIdType LacpProtocol::protocolIdType() const
{
    return ProtocolIdIp;
}

quint32 LacpProtocol::protocolId(ProtocolIdType type) const
{
    switch(type)
    {
        //oleh
        //case ProtocolIdIp: return 1234;
        case ProtocolIdEth: return 0x8809;
        default:break;
    }

    return AbstractProtocol::protocolId(type);
}

int LacpProtocol::fieldCount() const
{
    return lacp_fieldCount;
}

AbstractProtocol::FieldFlags LacpProtocol::fieldFlags(int index) const
{
    AbstractProtocol::FieldFlags flags;

    flags = AbstractProtocol::fieldFlags(index);

    switch (index)
    {
        case lacp_subtype:
        case lacp_ver_num:
        case lacp_TLV_typeA:
        case lacp_Act_info_len:
        case lacp_Act_sys_prior:
        case lacp_Asys:
        case lacp_Akey:
        case lacp_Aport_prior:
        case lacp_Aport:
        case lacp_Astate:
        case lacp_Areserved:

        case lacp_TLV_typeP:
        case lacp_Par_info_len:
        case lacp_Par_sys_prior:
        case lacp_Psys:
        case lacp_Pkey:
        case lacp_Pport_prior:
        case lacp_Pport:
        case lacp_Pstate:
        case lacp_Preserved:
        case lacp_FCS:
            break;
      // Meta Fields

        case is_subtype:
        case is_version:
        case is_tlv_a :
        case is_actor_info:
        case is_tlv_p:
        case is_partner_info:
        case is_tlv_c:
        case is_collector_info:
        case is_tlv_t:
        case is_terminator_len:
        flags &= ~FrameField;
        flags |= MetaField;
            break;
    }

    return flags;
}
QVariant LacpProtocol::fieldData(int index, FieldAttrib attrib,
        int streamIndex) const
{
    QString str[8]={"Activity","Timeout" ,"Aggregation", "Synchronization",
                    "Collecting", "Distributing","Defaulted","Expired"};

    switch (index)
    {

        case lacp_subtype:
        {
            switch(attrib)
            {
                case FieldName:
                    return QString("Subtype = LACP");
                case FieldValue:
                     return data.proto_subtype();
                case FieldTextValue:
                return QString("0x%1").
                        arg(data.proto_subtype(), 2, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                   return QByteArray(1, (char) data.proto_subtype());
            default:
                break;
            }
            break;

        }
        case lacp_ver_num:
        {

            switch(attrib)
            {
                case FieldName:
                    return QString("Version Number");
                case FieldValue:
                     return data.proto_ver_num();
                case FieldTextValue:
                return QString("0x%1").
                        arg(data.proto_ver_num(), 2, BASE_HEX, QChar('0'));
                case FieldFrameValue:
                return QByteArray(1, (char) data.proto_ver_num());
            default:
                break;
            }
            break;

        }
    case lacp_TLV_typeA:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Actor Information");
            case FieldValue:
                 return data.proto_tlv_typea();
            case FieldTextValue:
                 return QString("0x%1").
                         arg(data.proto_tlv_typea(), 2, BASE_HEX, QChar('0'));
            case FieldFrameValue:
               return QByteArray(1, (char) data.proto_tlv_typea());
            default:
                break;
        }
        break;

    }
    case lacp_Act_info_len:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Actor Information Length");
            case FieldValue:
                 return data.proto_act_info_len();
            case FieldTextValue:
            return QString("0x%1").
                    arg(data.proto_act_info_len(), 2, BASE_HEX, QChar('0'));
            case FieldFrameValue:
               return QByteArray(1, (char) data.proto_act_info_len());
        default:
            break;
        }
        break;

    }
    case lacp_Act_sys_prior:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Actor System Priority");
            case FieldValue:
                 return data.proto_act_sys_prior();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_act_sys_prior());
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(4);
                qToBigEndian((quint32) data.proto_act_sys_prior(), (uchar*) fv.data());
                fv.remove(0,2);
                return fv;
            }
        default:
            break;
        }
        break;

    }
    case lacp_Asys:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Actor System");
            case FieldValue:
                 return (quint64)data.proto_asys();
                 /* MOD */
            case FieldTextValue:
            return uintToHexStr(data.proto_asys(), 6);
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(8);
                qToBigEndian((quint64)data.proto_asys() , (uchar*) fv.data());
                fv.remove(0,2);
                return fv;
            }
        default:
            break;
        }
        break;

    }

    case lacp_Akey:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Actor Key");
            case FieldValue:
                 return data.proto_akey();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_akey());
            case FieldFrameValue:
            {
            QByteArray fv;
            fv.resize(2);
            qToBigEndian((quint16) data.proto_akey(), (uchar*) fv.data());
            return fv;
            }
        default:
            break;
        }
        break;

    }

    case lacp_Aport_prior:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Actor Port Priority");
            case FieldValue:
                 return data.proto_aport_prior();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_aport_prior());
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(2);
                qToBigEndian((quint16) data.proto_aport_prior(), (uchar*)fv.data());
                return fv;
            }

        default:
            break;
        }
        break;

    }
    case lacp_Aport:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Actor Port Priority");
            case FieldValue:
                 return data.proto_aport();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_aport());
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(2);
                qToBigEndian((quint16) data.proto_aport(), (uchar*)fv.data());
                return fv;
            }

        default:
            break;
        }
        break;

    }
    case lacp_Astate:
    {
        switch(attrib)
        {
            case FieldName:
                return QString("Actor State");
            case FieldValue:
                 return data.proto_astate();
            case FieldTextValue:
            {
            QString str_temp="( ";
            if((data.proto_astate() & 1))str_temp+=" "+str[0];
            if((data.proto_astate() & 2))str_temp+=" "+str[1];
            if((data.proto_astate() & 4))str_temp+=" "+str[2];
            if((data.proto_astate() & 8))str_temp+=" "+str[3];
            if((data.proto_astate() & 16))str_temp+=" "+str[4];
            if((data.proto_astate() & 32))str_temp+=" "+str[5];
            if((data.proto_astate() & 64))str_temp+=" "+str[6];
            if((data.proto_astate() & 128))str_temp+=" "+str[7];
            str_temp+=" )";
            return str_temp;
            }
            case FieldFrameValue:
              return QByteArray(1, (char) data.proto_astate());

        default:
            break;
        }
        break;
      }
    case lacp_Areserved:
        {

            switch(attrib)
            {
                case FieldName:
                    return QString("Reserved");
                case FieldValue:
                     return data.proto_areserved();
                case FieldTextValue:
                return uintToHexStr(data.proto_areserved(),3);
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(3);
                    qToBigEndian((quint32) data.proto_areserved(), (uchar*)fv.data());
                    return fv;
                }

            default:
                break;
            }
            break;

        }
//--------------------------------Partner----------------------------------------------------------
    case lacp_TLV_typeP:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Partner Information");
            case FieldValue:
                 return data.proto_tlv_typep();
            case FieldTextValue:
                 return QString("0x%1").
                         arg(data.proto_tlv_typep(), 2, BASE_HEX, QChar('0'));
            case FieldFrameValue:
               return QByteArray(1, (char) data.proto_tlv_typep());
            default:
                break;
        }
        break;

    }
    case lacp_Par_info_len:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Partner Information Length");
            case FieldValue:
                 return data.proto_par_info_len();
            case FieldTextValue:
            return QString("0x%1").
                    arg(data.proto_par_info_len(), 2, BASE_HEX, QChar('0'));
            case FieldFrameValue:
               return QByteArray(1, (char) data.proto_par_info_len());
        default:
            break;
        }
        break;

    }
    case lacp_Par_sys_prior:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Partner System Priority");
            case FieldValue:
                 return data.proto_par_sys_prior();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_par_sys_prior());
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(2);
                qToBigEndian((quint16) data.proto_par_sys_prior(), (uchar*) fv.data());
                return fv;
            }
        default:
            break;
        }
        break;

    }
    case lacp_Psys:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Partner System");
            case FieldValue:
                 return (quint64)data.proto_psys();
            case FieldTextValue:
            return uintToHexStr(data.proto_psys(), 6);
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(8);
                qToBigEndian((quint64)data.proto_psys() , (uchar*) fv.data());
                fv.remove(0,2);
                return fv;
            }
        default:
            break;
        }
        break;

    }

    case lacp_Pkey:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Partner Key");
            case FieldValue:
                 return data.proto_pkey();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_pkey());
            case FieldFrameValue:
            {
            QByteArray fv;
            fv.resize(2);
            qToBigEndian((quint16) data.proto_pkey(), (uchar*) fv.data());
            return fv;
            }
        default:
            break;
        }
        break;

    }

    case lacp_Pport_prior:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Partner Port Priority");
            case FieldValue:
                 return data.proto_pport_prior();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_pport_prior());
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(2);
                qToBigEndian((quint16) data.proto_pport_prior(), (uchar*)fv.data());
                return fv;
            }

        default:
            break;
        }
        break;

    }
    case lacp_Pport:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Partner Port Priority");
            case FieldValue:
                 return data.proto_pport();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_pport());
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(2);
                qToBigEndian((quint16) data.proto_pport(), (uchar*)fv.data());
                return fv;
            }

        default:
            break;
        }
        break;

    }
    case lacp_Pstate:
    {
        switch(attrib)
        {
            case FieldName:
                return QString("Partner State");
            case FieldValue:
                 return data.proto_pstate();
            case FieldTextValue:
            {
            QString str_tempp="( ";
            if((data.proto_pstate() & 1))str_tempp+=" "+str[0];
            if((data.proto_pstate() & 2))str_tempp+=" "+str[1];
            if((data.proto_pstate() & 4))str_tempp+=" "+str[2];
            if((data.proto_pstate() & 8))str_tempp+=" "+str[3];
            if((data.proto_pstate() & 16))str_tempp+=" "+str[4];
            if((data.proto_pstate() & 32))str_tempp+=" "+str[5];
            if((data.proto_pstate() & 64))str_tempp+=" "+str[6];
            if((data.proto_pstate() & 128))str_tempp+=" "+str[7];
            str_tempp+=" )";
            return str_tempp;
            }
            case FieldFrameValue:
              return QByteArray(1, (char) data.proto_pstate());

        default:
            break;
        }
        break;
      }
    case lacp_Preserved:
        {

            switch(attrib)
            {
                case FieldName:
                    return QString("Reserved");
                case FieldValue:
                     return data.proto_preserved();
                case FieldTextValue:
                return uintToHexStr(data.proto_preserved(),3);
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(3);
                    qToBigEndian((quint32) data.proto_preserved(), (uchar*)fv.data());
                    return fv;
                }

            default:
                break;
            }
            break;

        }
//--------------------------------------------Collector------------------------------------
    case lacp_TLV_typeC:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Collector Information");
            case FieldValue:
                 return data.proto_tlv_typec();
            case FieldTextValue:
                 return QString("0x%1").
                         arg(data.proto_tlv_typec(), 2, BASE_HEX, QChar('0'));
            case FieldFrameValue:
               return QByteArray(1, (char) data.proto_tlv_typec());
            default:
                break;
        }
        break;

    }
    case lacp_Coll_info_len:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Collector Information Length");
            case FieldValue:
                 return data.proto_coll_info_len();
            case FieldTextValue:
            return QString("0x%1").
                    arg(data.proto_coll_info_len(), 2, BASE_HEX, QChar('0'));
            case FieldFrameValue:
               return QByteArray(1, (char) data.proto_coll_info_len());
        default:
            break;
        }
        break;

    }
    case lacp_CollMaxDelay:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Collector Max Delay");
            case FieldValue:
                 return data.proto_collmaxdelay();
            case FieldTextValue:
            return QString("%1").
                    arg(data.proto_collmaxdelay());
            case FieldFrameValue:
            {
                QByteArray fv;
                fv.resize(2);
                qToBigEndian((quint16) data.proto_collmaxdelay(), (uchar*)fv.data());
                return fv;
            }

        default:
            break;
        }
        break;

    }
    case lacp_Creserved:
        {

            switch(attrib)
            {
                case FieldName:
                    return QString("Reserved");
                case FieldValue:
                return 0;
                case FieldTextValue:
                return 0;
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(12);
                    qToBigEndian((quint64) data.proto_creserved0(), (uchar*)fv.data());
                    qToBigEndian((quint64) data.proto_creserved1(), (uchar*)fv.data()+8);
                    return fv;
                }

            default:
                break;
            }
            break;

        }

    case lacp_TLV_typeTerm:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Terminator Information");
            case FieldValue:
                 return data.proto_tlv_typeterm();
            case FieldTextValue:
            return QString("0x%1").
                    arg(data.proto_tlv_typeterm(), 2, BASE_HEX, QChar('0'));
            case FieldFrameValue:
               return QByteArray(1, (char) data.proto_tlv_typeterm());
        default:
            break;
        }
        break;
    }
    case lacp_Term_len:
    {

        switch(attrib)
        {
            case FieldName:
                return QString("Terminator Length");
            case FieldValue:
                 return data.proto_term_len();
            case FieldTextValue:
            return QString("0x%1").
                    arg(data.proto_term_len(), 2, BASE_HEX, QChar('0'));
            case FieldFrameValue:
               return QByteArray(1, (char) data.proto_term_len());
        default:
            break;
        }
        break;
    }
    case lacp_reserved:
        {

            switch(attrib)
            {
                case FieldName:
                    return QString("Reserved");
                case FieldValue:
                return 0;
                case FieldTextValue:
                return 0;
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(50);
                    qToBigEndian((quint64) data.proto_reserved0(), (uchar*)fv.data());
                    qToBigEndian((quint64) data.proto_reserved1(), (uchar*)fv.data()+8);
                    qToBigEndian((quint64) data.proto_reserved2(), (uchar*)fv.data()+16);
                    qToBigEndian((quint64) data.proto_reserved3(), (uchar*)fv.data()+24);
                    qToBigEndian((quint64) data.proto_reserved4(), (uchar*)fv.data()+32);
                    qToBigEndian((quint64) data.proto_reserved5(), (uchar*)fv.data()+40);
                    qToBigEndian((quint64) data.proto_reserved6(), (uchar*)fv.data()+48);
                    return fv;
                }

            default:
                break;
            }
            break;
        }
    case lacp_FCS:
        {

            switch(attrib)
            {
                case FieldName:
                    return QString("FCS");
                case FieldValue:
                return (quint64)data.proto_fcs();
                case FieldTextValue:
                return uintToHexStr(data.proto_fcs(), 4);
                case FieldFrameValue:
                {
                    QByteArray fv;
                    fv.resize(8);
                    qToBigEndian((quint64) data.proto_fcs(), (uchar*)fv.data());
                    fv.remove(0,4);
                    return fv;
                }

            default:
                break;
            }
            break;
        }

    case is_subtype:
    case is_version:
    case is_tlv_a :
    case is_actor_info:
    case is_tlv_p:
    case is_partner_info:
    case is_tlv_c:
    case is_collector_info:
    case is_tlv_t:
    case is_terminator_len:
    default:
            break;
    }

    return AbstractProtocol::fieldData(index, attrib, streamIndex);
}
bool LacpProtocol::setFieldData(int index, const QVariant &value,
        FieldAttrib attrib)
{
    return false;
}


QWidget* LacpProtocol::configWidget()
{
    /* Lazy creation of the configWidget */
    if (configForm == NULL)
    {
        configForm = new LacpConfigForm;
        loadConfigWidget();
    }

    return configForm;
}


void LacpProtocol::loadConfigWidget()
{
    configWidget();


   configForm->ui_Subtype->setText(QString().setNum(data.proto_subtype()));
   configForm->ui_Version->setText(QString().setNum(data.proto_ver_num()));
   configForm->ui_TLV_Actor->setText(QString().setNum(data.proto_tlv_typea()));
   configForm->ui_ActorInfo->setText(QString().setNum(data.proto_act_info_len()));
   configForm->ui_act_sys_prior->setText(QString().setNum(data.proto_act_sys_prior()));
   configForm->ui_lacp_asys->setText(uintToHexStr(data.proto_asys(),6));
   configForm->ui_akey->setText(QString().setNum(data.proto_akey()));
   configForm->ui_aport_prior->setText(QString().setNum(data.proto_aport_prior()));
   configForm->ui_aport->setText(QString().setNum(data.proto_aport()));

   configForm->ui_TLV_Partner->setText(QString().setNum(data.proto_tlv_typep()));
   configForm->ui_PartnerInfo->setText(QString().setNum(data.proto_par_info_len()));
   configForm->ui_par_sys_prior->setText(QString().setNum(data.proto_par_sys_prior()));
   configForm->ui_psys->setText(uintToHexStr(data.proto_psys(),6));
   configForm->ui_pkey->setText(QString().setNum(data.proto_pkey()));
   configForm->ui_pport_prior->setText(QString().setNum(data.proto_pport_prior()));
   configForm->ui_pport->setText(QString().setNum(data.proto_pport()));

   configForm->ui_TLV_Collector->setText(QString().setNum(data.proto_tlv_typec()));
   configForm->ui_CollectorInfo->setText(QString().setNum(data.proto_coll_info_len()));
   configForm->ui_collMaxDel->setText(QString().setNum(data.proto_collmaxdelay()));
   configForm->ui_collMaxDel->setText(QString().setNum(data.proto_collmaxdelay()));

   configForm->ui_TLV_Terminator->setText(QString().setNum(data.proto_tlv_typeterm()));
   configForm->ui_TerminatoLen->setText(QString().setNum(data.proto_term_len()));

   if((data.proto_pstate() & 1)) configForm->checkActivity_p->setChecked(true);
   if((data.proto_pstate() & 2)) configForm->checkTimeout_p->setChecked(true);
   if((data.proto_pstate() & 4)) configForm->checkAggregation_p->setChecked(true);
   if((data.proto_pstate() & 8))configForm->checkSynchronization_p->setChecked(true);
   if((data.proto_pstate() & 16))configForm->checkCollecting_p->setChecked(true);
   if((data.proto_pstate() & 32))configForm->checkDistributing_p->setChecked(true);
   if((data.proto_pstate() & 64))configForm->checkDefaulted_p->setChecked(true);
   if((data.proto_pstate() & 128)) configForm->checkExpired_p->setChecked(true);

   if((data.proto_astate() & 1)) configForm->checkActivity->setChecked(true);
   if((data.proto_astate() & 2)) configForm->checkTimeout->setChecked(true);
   if((data.proto_astate() & 4)) configForm->checkAggregation->setChecked(true);
   if((data.proto_astate() & 8))configForm->checkSynchronization->setChecked(true);
   if((data.proto_astate() & 16))configForm->checkCollecting->setChecked(true);
   if((data.proto_astate() & 32))configForm->checkDistributing->setChecked(true);
   if((data.proto_astate() & 64))configForm->checkDefaulted->setChecked(true);
   if((data.proto_astate() & 128)) configForm->checkExpired->setChecked(true);

    configForm->ui_FCS->setText(uintToHexStr(data.proto_fcs(),4));
   // meta data

   configForm->checkSubtype->setChecked(data.proto_is_subtype());
   configForm->checkVersion->setChecked(data.proto_is_version());
   configForm->checkTLV_A->setChecked(data.proto_is_tlv_a());
   configForm->checkActorInfo->setChecked(data.proto_is_actor_info());
   configForm->checkTLV_P->setChecked(data.proto_is_tlv_p());
   configForm->checkPartnerInfo->setChecked(data.proto_is_partner_info());
   configForm->checkTLVCollector->setChecked(data.proto_is_tlv_c());
   configForm->checkCollectorInfo->setChecked(data.proto_is_collector_info());
   configForm->checkTLV_T->setChecked(data.proto_is_tlv_t());
   configForm->checkTerminatorLen->setChecked(data.proto_is_terminator_len());
}


void LacpProtocol::storeConfigWidget()
{
    bool isOk;
    configWidget();

    data.set_proto_act_sys_prior(configForm->ui_act_sys_prior->text().toULong(&isOk));

    data.set_proto_asys(configForm->ui_lacp_asys->text()
            .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));

    data.set_proto_akey(configForm->ui_akey->text().toULong(&isOk));
    data.set_proto_aport_prior(configForm->ui_aport_prior->text().toULong(&isOk));
    data.set_proto_aport(configForm->ui_aport->text().toULong(&isOk));
    quint8 astate =0;
    if(configForm->checkActivity->isChecked()) astate = astate | 1;
    if(configForm->checkTimeout->isChecked()) astate = astate | 2;
    if(configForm->checkAggregation->isChecked()) astate = astate | 4;
    if(configForm->checkSynchronization->isChecked())astate = astate | 8;
    if(configForm->checkCollecting->isChecked())astate = astate | 16;
    if(configForm->checkDistributing->isChecked())astate = astate | 32;
    if(configForm->checkDefaulted->isChecked())astate = astate | 64;
    if(configForm->checkExpired->isChecked()) astate = astate | 128;
    data.set_proto_astate(astate);


    data.set_proto_par_sys_prior(configForm->ui_par_sys_prior->text().toULong(&isOk));

    data.set_proto_psys(configForm->ui_psys->text()
            .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));

    data.set_proto_pkey(configForm->ui_pkey->text().toULong(&isOk));
    data.set_proto_pport_prior(configForm->ui_pport_prior->text().toULong(&isOk));
    data.set_proto_pport(configForm->ui_pport->text().toULong(&isOk));
    quint8 pstate =0;
    if(configForm->checkActivity_p->isChecked()) pstate = pstate | 1;
    if(configForm->checkTimeout_p->isChecked()) pstate = pstate | 2;
    if(configForm->checkAggregation_p->isChecked()) pstate = pstate | 4;
    if(configForm->checkSynchronization_p->isChecked())pstate = pstate | 8;
    if(configForm->checkCollecting_p->isChecked())pstate = pstate | 16;
    if(configForm->checkDistributing_p->isChecked())pstate = pstate | 32;
    if(configForm->checkDefaulted_p->isChecked())pstate = pstate | 64;
    if(configForm->checkExpired_p->isChecked()) pstate = pstate | 128;
    data.set_proto_pstate(pstate);

    data.set_proto_collmaxdelay(configForm->ui_collMaxDel->text().toULong(&isOk));

    data.set_proto_fcs(configForm->ui_FCS->text()
                       .remove(QChar(' ')).toULongLong(&isOk, BASE_HEX));

    // meta data

    data.set_proto_is_subtype(configForm->checkSubtype->isChecked());
    data.set_proto_subtype(configForm->ui_Subtype->text().toULong(&isOk));

    data.set_proto_is_version(configForm->checkVersion->isChecked());
    data.set_proto_ver_num(configForm->ui_Version->text().toULong(&isOk));

    data.set_proto_is_tlv_a(configForm->checkTLV_A->isChecked());
    data.set_proto_tlv_typea(configForm->ui_TLV_Actor->text().toULong(&isOk));

    data.set_proto_is_actor_info(configForm->checkActorInfo->isChecked());
    data.set_proto_act_info_len(configForm->ui_ActorInfo->text().toULong(&isOk));

    data.set_proto_is_tlv_p(configForm->checkTLV_P->isChecked());
    data.set_proto_tlv_typep(configForm->ui_TLV_Partner->text().toULong(&isOk));

    data.set_proto_is_partner_info(configForm->checkPartnerInfo->isChecked());
    data.set_proto_par_info_len(configForm->ui_PartnerInfo->text().toULong(&isOk));

    data.set_proto_is_tlv_c(configForm->checkTLVCollector->isChecked());
    data.set_proto_tlv_typec(configForm->ui_TLV_Collector->text().toULong(&isOk));

    data.set_proto_is_collector_info(configForm->checkCollectorInfo->isChecked());
    data.set_proto_coll_info_len(configForm->ui_CollectorInfo->text().toULong(&isOk));

    data.set_proto_is_tlv_t(configForm->checkTLV_T->isChecked());
    data.set_proto_tlv_typeterm(configForm->ui_TLV_Terminator->text().toULong(&isOk));

    data.set_proto_is_terminator_len(configForm->checkTerminatorLen->isChecked());
    data.set_proto_term_len(configForm->ui_TerminatoLen->text().toULong(&isOk));

}

