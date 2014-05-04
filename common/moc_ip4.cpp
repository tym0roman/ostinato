/****************************************************************************
** Meta object code from reading C++ file 'ip4.h'
**
** Created: Sun May 4 18:07:11 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ip4.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ip4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ip4ConfigForm[] = {

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
      21,   15,   14,   14, 0x08,
      66,   15,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Ip4ConfigForm[] = {
    "Ip4ConfigForm\0\0index\0"
    "on_cmbIpSrcAddrMode_currentIndexChanged(int)\0"
    "on_cmbIpDstAddrMode_currentIndexChanged(int)\0"
};

void Ip4ConfigForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Ip4ConfigForm *_t = static_cast<Ip4ConfigForm *>(_o);
        switch (_id) {
        case 0: _t->on_cmbIpSrcAddrMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_cmbIpDstAddrMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Ip4ConfigForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ip4ConfigForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Ip4ConfigForm,
      qt_meta_data_Ip4ConfigForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ip4ConfigForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ip4ConfigForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ip4ConfigForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ip4ConfigForm))
        return static_cast<void*>(const_cast< Ip4ConfigForm*>(this));
    if (!strcmp(_clname, "Ui::ip4"))
        return static_cast< Ui::ip4*>(const_cast< Ip4ConfigForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int Ip4ConfigForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
