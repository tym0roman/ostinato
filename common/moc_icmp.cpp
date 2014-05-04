/****************************************************************************
** Meta object code from reading C++ file 'icmp.h'
**
** Created: Thu May 1 12:20:12 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "icmp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icmp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IcmpConfigForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x08,
      63,   60,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IcmpConfigForm[] = {
    "IcmpConfigForm\0\0index\0"
    "on_typeCombo_currentIndexChanged(int)\0"
    "id\0when_versionGroup_buttonClicked(int)\0"
};

void IcmpConfigForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IcmpConfigForm *_t = static_cast<IcmpConfigForm *>(_o);
        switch (_id) {
        case 0: _t->on_typeCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->when_versionGroup_buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IcmpConfigForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IcmpConfigForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IcmpConfigForm,
      qt_meta_data_IcmpConfigForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IcmpConfigForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IcmpConfigForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IcmpConfigForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IcmpConfigForm))
        return static_cast<void*>(const_cast< IcmpConfigForm*>(this));
    if (!strcmp(_clname, "Ui::Icmp"))
        return static_cast< Ui::Icmp*>(const_cast< IcmpConfigForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int IcmpConfigForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
