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

#ifndef _LACP_H
#define _LACP_H

#include "lacp.pb.h"
#include "ui_lacp.h"

#include "abstractprotocol.h"

/* 
Lacp Protocol Frame Format -
    +-----+------+------+------+------+------+
    |  A  |   B  |  LEN | CSUM |   X  |   Y  |
    | (3) | (13) | (16) | (16) | (32) | (32) |
    +-----+------+------+------+------+------+
Figures in brackets represent field width in bits
*/

class LacpConfigForm : public QWidget, public Ui::Lacp
{
    Q_OBJECT
public:
    LacpConfigForm(QWidget *parent = 0);
private slots:
};

class LacpProtocol : public AbstractProtocol
{
private:
    OstProto::Lacp    data;
    LacpConfigForm    *configForm;
    enum lacpfield
    {

        // Frame Fields
        lacp_subtype=0,
        lacp_ver_num,

        lacp_TLV_typeA,
        lacp_Act_info_len,
        lacp_Act_sys_prior,
        lacp_Asys,
        lacp_Akey,
        lacp_Aport_prior,
        lacp_Aport,
        lacp_Astate,
        lacp_Areserved,

        lacp_TLV_typeP,
        lacp_Par_info_len,
        lacp_Par_sys_prior,
        lacp_Psys,
        lacp_Pkey,
        lacp_Pport_prior,
        lacp_Pport,
        lacp_Pstate,
        lacp_Preserved,

        lacp_TLV_typeC,
        lacp_Coll_info_len,
        lacp_CollMaxDelay,
        lacp_Creserved,
        lacp_TLV_typeTerm,
        lacp_Term_len,
        lacp_reserved,
        lacp_FCS,

       // Meta Fields
        is_subtype,
        is_version,
        is_tlv_a ,
        is_actor_info,
        is_tlv_p,
        is_partner_info ,
        is_tlv_c,
        is_collector_info,
        is_tlv_t,
        is_terminator_len,

        lacp_fieldCount
    };

public:
    LacpProtocol(StreamBase *stream, AbstractProtocol *parent = 0);
    virtual ~LacpProtocol();

    static AbstractProtocol* createInstance(StreamBase *stream,
        AbstractProtocol *parent = 0);
    virtual quint32 protocolNumber() const;

    virtual void protoDataCopyInto(OstProto::Protocol &protocol) const;
    virtual void protoDataCopyFrom(const OstProto::Protocol &protocol);

    virtual ProtocolIdType protocolIdType() const;
    virtual quint32 protocolId(ProtocolIdType type) const;

    virtual QString name() const;
    virtual QString shortName() const;

    virtual int fieldCount() const;


    virtual AbstractProtocol::FieldFlags fieldFlags(int index) const;
    virtual QVariant fieldData(int index, FieldAttrib attrib,
               int streamIndex = 0) const;
    virtual bool setFieldData(int index, const QVariant &value, 
            FieldAttrib attrib = FieldValue);


    virtual QWidget* configWidget();
    virtual void loadConfigWidget();
    virtual void storeConfigWidget();



};

#endif
