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

#ifndef _Qinq_H
#define _Qinq_H

#include "abstractprotocol.h"

#include "qinq.pb.h"
#include "ui_qinq.h"

class QinqConfigForm : public QWidget, public Ui::Qinq
{
    Q_OBJECT
public:
    QinqConfigForm(QWidget *parent = 0);
};

class QinqProtocol : public AbstractProtocol
{
private:
    QinqConfigForm    *configForm;
    enum Qinqfield
    {
        qinq_tpid,
        qinq_prio,
        qinq_cfiDei,
        qinq_vlanId,
        vlan_tpid,
        vlan_prio,
        vlan_cfiDei,
        vlan_vlanId,
        isOverrideTpid,
        isOverrideVlanTpid,

        qinq_fieldCount
    };

protected:
    OstProto::Qinq    data;

public:
    QinqProtocol(StreamBase *stream, AbstractProtocol *parent = 0);
    virtual ~QinqProtocol();

    static AbstractProtocol* createInstance(StreamBase *stream,
        AbstractProtocol *parent = 0);
    virtual quint32 protocolNumber() const;

    virtual void protoDataCopyInto(OstProto::Protocol &protocol) const;
    virtual void protoDataCopyFrom(const OstProto::Protocol &protocol);

    virtual QString name() const;
    virtual QString shortName() const;

    virtual int    fieldCount() const;

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
