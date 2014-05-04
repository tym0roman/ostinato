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

#ifndef _LLDP_TLV_H
#define _LLDP_TLV_H

#include "lldp_tlv.pb.h"
#include "ui_lldp_tlv.h"

#include "abstractprotocol.h"

/* 
Lldp_tlv Protocol Frame Format -
    +----------+---------+
    |   User   |   Zero  |
    | Lldp_tlv | Padding |
    +----------+---------+
*/

class Lldp_tlvConfigForm : public QWidget, public Ui::Lldp_tlv
{
    Q_OBJECT
public:
    Lldp_tlvConfigForm(QWidget *parent = 0);
private slots:
    void on_hexEdit_overwriteModeChanged(bool isOverwriteMode);
};

class Lldp_tlvProtocol : public AbstractProtocol
{
public:
    Lldp_tlvProtocol(StreamBase *stream, AbstractProtocol *parent = 0);
    virtual ~Lldp_tlvProtocol();

    static AbstractProtocol* createInstance(StreamBase *stream,
        AbstractProtocol *parent = 0);
    virtual quint32 protocolNumber() const;

    virtual void protoDataCopyInto(OstProto::Protocol &protocol) const;
    virtual void protoDataCopyFrom(const OstProto::Protocol &protocol);

    virtual QString name() const;
    virtual QString shortName() const;

    virtual ProtocolIdType protocolIdType() const;
    virtual quint32 protocolId(ProtocolIdType type) const;

    virtual int fieldCount() const;

    virtual AbstractProtocol::FieldFlags fieldFlags(int index) const;
    virtual QVariant fieldData(int index, FieldAttrib attrib,
               int streamIndex = 0) const;
    virtual bool setFieldData(int index, const QVariant &value, 
            FieldAttrib attrib = FieldValue);

    virtual int protocolFrameSize(int streamIndex = 0) const;

    virtual QWidget* configWidget();
    virtual void loadConfigWidget();
    virtual void storeConfigWidget();

private:
    OstProto::Lldp_tlv    data;
    Lldp_tlvConfigForm    *configForm;
    enum lldp_tlvfield
    {
        // Frame Fields
        lldp_tlv_id =0,
        lldp_tlv_len,
        lldp_tlv_content,

        // Meta Fields
        lldp_tlv_fieldCount
    };
};
#endif
