/****************************************************************************
** Meta object code from reading C++ file 'ip6.h'
**
** Created: Sun May 4 14:09:49 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ip6.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ip6.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ip6ConfigForm[] = {

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
      15,   14,   14,   14, 0x08,
      44,   14,   14,   14, 0x08,
      79,   73,   14,   14, 0x08,
     124,   73,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Ip6ConfigForm[] = {
    "Ip6ConfigForm\0\0on_srcAddr_editingFinished()\0"
    "on_dstAddr_editingFinished()\0index\0"
    "on_srcAddrModeCombo_currentIndexChanged(int)\0"
    "on_dstAddrModeCombo_currentIndexChanged(int)\0"
};

void Ip6ConfigForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Ip6ConfigForm *_t = static_cast<Ip6ConfigForm *>(_o);
        switch (_id) {
        case 0: _t->on_srcAddr_editingFinished(); break;
        case 1: _t->on_dstAddr_editingFinished(); break;
        case 2: _t->on_srcAddrModeCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_dstAddrModeCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Ip6ConfigForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ip6ConfigForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Ip6ConfigForm,
      qt_meta_data_Ip6ConfigForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ip6ConfigForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ip6ConfigForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ip6ConfigForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ip6ConfigForm))
        return static_cast<void*>(const_cast< Ip6ConfigForm*>(this));
    if (!strcmp(_clname, "Ui::Ip6"))
        return static_cast< Ui::Ip6*>(const_cast< Ip6ConfigForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int Ip6ConfigForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
