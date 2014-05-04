/****************************************************************************
** Meta object code from reading C++ file 'portmodel.h'
**
** Created: Mon Apr 28 09:21:02 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "portmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   11,   10,   10, 0x08,
      65,   10,   10,   10, 0x08,
      94,   10,   10,   10, 0x08,
     124,  114,   10,   10, 0x08,
     162,   10,   10,   10, 0x08,
     181,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PortModel[] = {
    "PortModel\0\0portGroupId,portId\0"
    "when_portGroupDataChanged(int,int)\0"
    "portGroupAboutToBeAppended()\0"
    "portGroupAppended()\0portGroup\0"
    "portGroupAboutToBeRemoved(PortGroup*)\0"
    "portGroupRemoved()\0when_portListChanged()\0"
};

void PortModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PortModel *_t = static_cast<PortModel *>(_o);
        switch (_id) {
        case 0: _t->when_portGroupDataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->portGroupAboutToBeAppended(); break;
        case 2: _t->portGroupAppended(); break;
        case 3: _t->portGroupAboutToBeRemoved((*reinterpret_cast< PortGroup*(*)>(_a[1]))); break;
        case 4: _t->portGroupRemoved(); break;
        case 5: _t->when_portListChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PortModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PortModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_PortModel,
      qt_meta_data_PortModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortModel))
        return static_cast<void*>(const_cast< PortModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int PortModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
