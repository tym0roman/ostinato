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

#ifndef _LLC_H
#define _LLC_H

#include <QSize>
#include <qdebug.h>

#include "abstractprotocol.h"

#include "llc.pb.h"
#include "ui_llc.h"

class LlcConfigForm : public QWidget, public Ui::llc
{
    Q_OBJECT
public:
    LlcConfigForm(QWidget *parent = 0);
};

class LlcProtocol : public AbstractProtocol
{
private:
    OstProto::Llc    data;
    LlcConfigForm    *configForm;
    enum llcfield
    {
        llc_dsap = 0,
        llc_ssap,
        llc_ctl,

        // Meta fields
        llc_is_override_dsap,
        llc_is_override_ssap,
        llc_is_override_ctl,

        llc_fieldCount
    };

public:
    LlcProtocol(StreamBase *stream, AbstractProtocol *parent = 0);
    virtual ~LlcProtocol();

    static AbstractProtocol* createInstance(StreamBase *stream,
        AbstractProtocol *parent = 0);
    virtual quint32 protocolNumber() const;

    virtual void protoDataCopyInto(OstProto::Protocol &protocol) const;
    virtual void protoDataCopyFrom(const OstProto::Protocol &protocol);

    virtual QString name() const;
    virtual QString shortName() const;

    virtual ProtocolIdType protocolIdType() const;

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
