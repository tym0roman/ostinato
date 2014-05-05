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

#ifndef _DCBX_H
#define _DCBX_H

#include "dcbx.pb.h"
#include "ui_dcbx.h"

#include "abstractprotocol.h"

/* 
Dcbx Protocol Frame Format -
    +-----+------+------+------+------+------+-----+------+------+------+------+------+
    | LLC |  ID  |  VID | BPDU | Flag | Root |Path |Bridge| AGE  |MAXAGE|HELLO |DELAY |
    | (24)| (16) |  (8) | (8)  | (8)  | (64) |(32) | (64) | (16) | (16) | (16) | (16) |
    +-----+------+------+------+------+------+-----+------+------+------+------+------+
Figures in brackets represent field width in bits
*/

class DcbxConfigForm : public QWidget, public Ui::Dcbx
{
    Q_OBJECT
public:
    DcbxConfigForm(QWidget *parent = 0);
private slots:
};

class DcbxProtocol : public AbstractProtocol
{
private:
    OstProto::Dcbx    data;
    DcbxConfigForm    *configForm;
    enum stpfield
    {
        tlv_type_len_c=0,
        oui802_c,
        subtype802_c,
        will_cbs_res_tcs,
        prior_ass_c,
        tc_band_c,
        tsa_ass_c,
        dcbx_fieldCount_c,
//---
        tlv_type_len_r=0,
        oui802_r,
        subtype802_r,
        reserved_r,
        prior_ass_r,
        tc_band_r,
        tsa_ass_r,
        dcbx_fieldCount_r,

        tlv_type_len_p =0,
        oui802_p ,
        subtype802_p ,
        will_mbc_res_pfc ,
        pfc_enable ,
        dcbx_fieldCount_p,

        tlv_type_len_a=0,
        oui802_a ,
        subtype802_a,
        reserved_a,
        app_priority,
        dcbx_fieldCount_a,
        // meta
        is_c,
        is_r,
        is_p ,
        is_a ,

        dcbx_fieldCount
    };

public:
    DcbxProtocol(StreamBase *stream, AbstractProtocol *parent = 0);
    virtual ~DcbxProtocol();

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
    virtual int frameFieldCount() const;

    virtual AbstractProtocol::FieldFlags fieldFlags(int index) const;
    virtual QVariant fieldData(int index, FieldAttrib attrib,
               int streamIndex = 0) const;
    virtual bool setFieldData(int index, const QVariant &value, 
            FieldAttrib attrib = FieldValue);
    virtual int protocolFrameSize(int streamIndex = 0) const;

    virtual bool isProtocolFrameValueVariable() const;
    virtual bool isProtocolFrameSizeVariable() const;
    virtual int protocolFrameVariableCount() const;

    virtual QWidget* configWidget();
    virtual void loadConfigWidget();
    virtual void storeConfigWidget();
};

#endif
