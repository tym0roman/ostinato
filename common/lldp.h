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

#ifndef _LLDP_H
#define _LLDP_H

#include "lldp.pb.h"
#include "ui_lldp.h"

#include "abstractprotocol.h"

/* 
Lldp Protocol Frame Format -
    +-----+------+------+------+------+------+
    |  A  |   B  |  LEN | CSUM |   X  |   Y  |
    | (3) | (13) | (16) | (16) | (32) | (32) |
    +-----+------+------+------+------+------+
Figures in brackets represent field width in bits
*/

class LldpConfigForm : public QWidget, public Ui::Lldp
{
    Q_OBJECT
public:
    LldpConfigForm(QWidget *parent = 0);
private slots:
};

class LldpProtocol : public AbstractProtocol
{
private:
    OstProto::Lldp    data;
    LldpConfigForm    *configForm;
    enum lldpfield
    {
        // Frame Fields
        lldp_a = 0,
        lldp_b,
        lldp_payloadLength,
        lldp_checksum,
        lldp_x,
        lldp_y,

        // Meta Fields
        lldp_is_override_checksum,

        lldp_fieldCount
    };

public:
    LldpProtocol(StreamBase *stream, AbstractProtocol *parent = 0);
    virtual ~LldpProtocol();

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
