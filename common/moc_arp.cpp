/****************************************************************************
** Meta object code from reading C++ file 'arp.h'
**
** Created: Thu May 1 12:20:08 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "arp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArpConfigForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x08,
      66,   15,   14,   14, 0x08,
     114,   15,   14,   14, 0x08,
     159,   15,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ArpConfigForm[] = {
    "ArpConfigForm\0\0index\0"
    "on_senderHwAddrMode_currentIndexChanged(int)\0"
    "on_senderProtoAddrMode_currentIndexChanged(int)\0"
    "on_targetHwAddrMode_currentIndexChanged(int)\0"
    "on_targetProtoAddrMode_currentIndexChanged(int)\0"
};

void ArpConfigForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArpConfigForm *_t = static_cast<ArpConfigForm *>(_o);
        switch (_id) {
        case 0: _t->on_senderHwAddrMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_senderProtoAddrMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_targetHwAddrMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_targetProtoAddrMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ArpConfigForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ArpConfigForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ArpConfigForm,
      qt_meta_data_ArpConfigForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArpConfigForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArpConfigForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArpConfigForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArpConfigForm))
        return static_cast<void*>(const_cast< ArpConfigForm*>(this));
    if (!strcmp(_clname, "Ui::Arp"))
        return static_cast< Ui::Arp*>(const_cast< ArpConfigForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int ArpConfigForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
