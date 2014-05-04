/****************************************************************************
** Meta object code from reading C++ file 'portstatsfilterdialog.h'
**
** Created: Sun May 4 14:12:20 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "portstatsfilterdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portstatsfilterdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortStatsFilterDialog[] = {

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
      23,   22,   22,   22, 0x08,
      47,   22,   22,   22, 0x08,
      78,   72,   22,   22, 0x08,
     121,   72,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PortStatsFilterDialog[] = {
    "PortStatsFilterDialog\0\0on_tbSelectIn_clicked()\0"
    "on_tbSelectOut_clicked()\0index\0"
    "on_lvUnselected_doubleClicked(QModelIndex)\0"
    "on_lvSelected_doubleClicked(QModelIndex)\0"
};

void PortStatsFilterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PortStatsFilterDialog *_t = static_cast<PortStatsFilterDialog *>(_o);
        switch (_id) {
        case 0: _t->on_tbSelectIn_clicked(); break;
        case 1: _t->on_tbSelectOut_clicked(); break;
        case 2: _t->on_lvUnselected_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_lvSelected_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PortStatsFilterDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PortStatsFilterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PortStatsFilterDialog,
      qt_meta_data_PortStatsFilterDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortStatsFilterDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortStatsFilterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortStatsFilterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortStatsFilterDialog))
        return static_cast<void*>(const_cast< PortStatsFilterDialog*>(this));
    if (!strcmp(_clname, "Ui::PortStatsFilterDialog"))
        return static_cast< Ui::PortStatsFilterDialog*>(const_cast< PortStatsFilterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PortStatsFilterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
