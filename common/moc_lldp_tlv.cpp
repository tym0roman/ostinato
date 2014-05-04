/****************************************************************************
** Meta object code from reading C++ file 'lldp_tlv.h'
**
** Created: Sun May 4 14:09:16 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lldp_tlv.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lldp_tlv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Lldp_tlvConfigForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   20,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Lldp_tlvConfigForm[] = {
    "Lldp_tlvConfigForm\0\0isOverwriteMode\0"
    "on_hexEdit_overwriteModeChanged(bool)\0"
};

void Lldp_tlvConfigForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Lldp_tlvConfigForm *_t = static_cast<Lldp_tlvConfigForm *>(_o);
        switch (_id) {
        case 0: _t->on_hexEdit_overwriteModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Lldp_tlvConfigForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Lldp_tlvConfigForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Lldp_tlvConfigForm,
      qt_meta_data_Lldp_tlvConfigForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Lldp_tlvConfigForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Lldp_tlvConfigForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Lldp_tlvConfigForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Lldp_tlvConfigForm))
        return static_cast<void*>(const_cast< Lldp_tlvConfigForm*>(this));
    if (!strcmp(_clname, "Ui::Lldp_tlv"))
        return static_cast< Ui::Lldp_tlv*>(const_cast< Lldp_tlvConfigForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int Lldp_tlvConfigForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
