/****************************************************************************
** Meta object code from reading C++ file 'portswindow.h'
**
** Created: Sun May 4 14:12:28 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "portswindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortsWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x08,
      56,   12,   12,   12, 0x08,
      82,   12,   12,   12, 0x08,
     124,   12,   12,   12, 0x08,
     163,   12,   12,   12, 0x08,
     187,  181,   12,   12, 0x08,
     243,  226,   12,   12, 0x08,
     317,  297,   12,   12, 0x08,
     369,   12,   12,   12, 0x08,
     392,   12,   12,   12, 0x08,
     413,   12,   12,   12, 0x08,
     449,   12,   12,   12, 0x08,
     488,   12,   12,   12, 0x08,
     528,   12,   12,   12, 0x08,
     579,  571,   12,   12, 0x08,
     622,   12,   12,   12, 0x08,
     662,   12,   12,   12, 0x08,
     694,   12,   12,   12, 0x08,
     727,   12,   12,   12, 0x08,
     762,   12,   12,   12, 0x08,
     796,   12,   12,   12, 0x08,
     830,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PortsWindow[] = {
    "PortsWindow\0\0current\0"
    "updatePortViewActions(QModelIndex)\0"
    "updateStreamViewActions()\0"
    "on_averagePacketsPerSec_editingFinished()\0"
    "on_averageBitsPerSec_editingFinished()\0"
    "updatePortRates()\0index\0"
    "on_tvStreamList_activated(QModelIndex)\0"
    "current,previous\0"
    "when_portView_currentChanged(QModelIndex,QModelIndex)\0"
    "topLeft,bottomRight\0"
    "when_portModel_dataChanged(QModelIndex,QModelIndex)\0"
    "when_portModel_reset()\0on_pbApply_clicked()\0"
    "on_actionNew_Port_Group_triggered()\0"
    "on_actionDelete_Port_Group_triggered()\0"
    "on_actionConnect_Port_Group_triggered()\0"
    "on_actionDisconnect_Port_Group_triggered()\0"
    "checked\0on_actionExclusive_Control_triggered(bool)\0"
    "on_actionPort_Configuration_triggered()\0"
    "on_actionNew_Stream_triggered()\0"
    "on_actionEdit_Stream_triggered()\0"
    "on_actionDelete_Stream_triggered()\0"
    "on_actionOpen_Streams_triggered()\0"
    "on_actionSave_Streams_triggered()\0"
    "streamModelDataChanged()\0"
};

void PortsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PortsWindow *_t = static_cast<PortsWindow *>(_o);
        switch (_id) {
        case 0: _t->updatePortViewActions((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->updateStreamViewActions(); break;
        case 2: _t->on_averagePacketsPerSec_editingFinished(); break;
        case 3: _t->on_averageBitsPerSec_editingFinished(); break;
        case 4: _t->updatePortRates(); break;
        case 5: _t->on_tvStreamList_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->when_portView_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: _t->when_portModel_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: _t->when_portModel_reset(); break;
        case 9: _t->on_pbApply_clicked(); break;
        case 10: _t->on_actionNew_Port_Group_triggered(); break;
        case 11: _t->on_actionDelete_Port_Group_triggered(); break;
        case 12: _t->on_actionConnect_Port_Group_triggered(); break;
        case 13: _t->on_actionDisconnect_Port_Group_triggered(); break;
        case 14: _t->on_actionExclusive_Control_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_actionPort_Configuration_triggered(); break;
        case 16: _t->on_actionNew_Stream_triggered(); break;
        case 17: _t->on_actionEdit_Stream_triggered(); break;
        case 18: _t->on_actionDelete_Stream_triggered(); break;
        case 19: _t->on_actionOpen_Streams_triggered(); break;
        case 20: _t->on_actionSave_Streams_triggered(); break;
        case 21: _t->streamModelDataChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PortsWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PortsWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PortsWindow,
      qt_meta_data_PortsWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortsWindow))
        return static_cast<void*>(const_cast< PortsWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int PortsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
