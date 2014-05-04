/****************************************************************************
** Meta object code from reading C++ file 'streamconfigdialog.h'
**
** Created: Sun May 4 18:09:42 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "streamconfigdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamconfigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StreamConfigDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   20,   19,   19, 0x08,
      71,   19,   19,   19, 0x08,
     109,  103,   19,   19, 0x08,
     143,  103,   19,   19, 0x08,
     195,  189,  184,   19, 0x08,
     236,  214,   19,   19, 0x08,
     281,  273,   19,   19, 0x08,
     311,  305,   19,   19, 0x08,
     343,  331,   19,   19, 0x08,
     369,   19,   19,   19, 0x08,
     425,  405,   19,   19, 0x08,
     510,  493,   19,   19, 0x08,
     575,   19,   19,   19, 0x08,
     594,   19,   19,   19, 0x08,
     616,   19,   19,   19, 0x08,
     634,   19,   19,   19, 0x08,
     654,   19,   19,   19, 0x08,
     692,  103,   19,   19, 0x08,
     730,  273,   19,   19, 0x08,
     763,  273,   19,   19, 0x08,
     800,  795,   19,   19, 0x08,
     842,  795,   19,   19, 0x08,
     882,  795,   19,   19, 0x08,
     921,  795,   19,   19, 0x08,
     957,   19,   19,   19, 0x08,
     977,   19,   19,   19, 0x08,
     997,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StreamConfigDialog[] = {
    "StreamConfigDialog\0\0mode\0"
    "on_cmbPktLenMode_currentIndexChanged(QString)\0"
    "update_NumPacketsAndNumBursts()\0index\0"
    "on_twTopLevel_currentChanged(int)\0"
    "on_tbSelectProtocols_currentChanged(int)\0"
    "bool\0layer\0skipProtocols(int)\0"
    "protocolGroup,checked\0"
    "disableProtocols(QButtonGroup*,bool)\0"
    "checked\0forceProtocolNone(bool)\0newId\0"
    "updateProtocol(int)\0level,newId\0"
    "__updateProtocol(int,int)\0"
    "updateSelectProtocolsSimpleWidget()\0"
    "selected,deselected\0"
    "when_lvAllProtocols_selectionChanged(QItemSelection,QItemSelection)\0"
    "current,previous\0"
    "when_lvSelectedProtocols_currentChanged(QModelIndex,QModelIndex)\0"
    "on_tbAdd_clicked()\0on_tbDelete_clicked()\0"
    "on_tbUp_clicked()\0on_tbDown_clicked()\0"
    "updateSelectProtocolsAdvancedWidget()\0"
    "on_tbProtocolData_currentChanged(int)\0"
    "on_rbPacketsPerSec_toggled(bool)\0"
    "on_rbBurstsPerSec_toggled(bool)\0text\0"
    "on_lePacketsPerBurst_textChanged(QString)\0"
    "on_lePacketsPerSec_textChanged(QString)\0"
    "on_leBurstsPerSec_textChanged(QString)\0"
    "on_leBitsPerSec_textEdited(QString)\0"
    "on_pbPrev_clicked()\0on_pbNext_clicked()\0"
    "on_pbOk_clicked()\0"
};

void StreamConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StreamConfigDialog *_t = static_cast<StreamConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->on_cmbPktLenMode_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->update_NumPacketsAndNumBursts(); break;
        case 2: _t->on_twTopLevel_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_tbSelectProtocols_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { bool _r = _t->skipProtocols((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->disableProtocols((*reinterpret_cast< QButtonGroup*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->forceProtocolNone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateProtocol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->__updateProtocol((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateSelectProtocolsSimpleWidget(); break;
        case 10: _t->when_lvAllProtocols_selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 11: _t->when_lvSelectedProtocols_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 12: _t->on_tbAdd_clicked(); break;
        case 13: _t->on_tbDelete_clicked(); break;
        case 14: _t->on_tbUp_clicked(); break;
        case 15: _t->on_tbDown_clicked(); break;
        case 16: _t->updateSelectProtocolsAdvancedWidget(); break;
        case 17: _t->on_tbProtocolData_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_rbPacketsPerSec_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_rbBurstsPerSec_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_lePacketsPerBurst_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->on_lePacketsPerSec_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->on_leBurstsPerSec_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->on_leBitsPerSec_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->on_pbPrev_clicked(); break;
        case 25: _t->on_pbNext_clicked(); break;
        case 26: _t->on_pbOk_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StreamConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StreamConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StreamConfigDialog,
      qt_meta_data_StreamConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StreamConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StreamConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StreamConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StreamConfigDialog))
        return static_cast<void*>(const_cast< StreamConfigDialog*>(this));
    if (!strcmp(_clname, "Ui::StreamConfigDialog"))
        return static_cast< Ui::StreamConfigDialog*>(const_cast< StreamConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int StreamConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
