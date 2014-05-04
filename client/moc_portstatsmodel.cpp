/****************************************************************************
** Meta object code from reading C++ file 'portstatsmodel.h'
**
** Created: Mon Apr 28 09:21:04 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "portstatsmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portstatsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortStatsModel[] = {

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
      16,   15,   15,   15, 0x0a,
      50,   39,   15,   15, 0x0a,
      92,   80,   15,   15, 0x0a,
     129,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PortStatsModel[] = {
    "PortStatsModel\0\0when_portListChanged()\0"
    "port,stats\0on_portStatsUpdate(int,void*)\0"
    "portGroupId\0when_portGroup_stats_update(quint32)\0"
    "updateStats()\0"
};

void PortStatsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PortStatsModel *_t = static_cast<PortStatsModel *>(_o);
        switch (_id) {
        case 0: _t->when_portListChanged(); break;
        case 1: _t->on_portStatsUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 2: _t->when_portGroup_stats_update((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 3: _t->updateStats(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PortStatsModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PortStatsModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_PortStatsModel,
      qt_meta_data_PortStatsModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortStatsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortStatsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortStatsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortStatsModel))
        return static_cast<void*>(const_cast< PortStatsModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int PortStatsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
