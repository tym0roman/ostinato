/****************************************************************************
** Meta object code from reading C++ file 'streammodel.h'
**
** Created: Thu May 1 12:21:03 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "streammodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streammodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StreamModel[] = {

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
      21,   13,   12,   12, 0x0a,
      73,   54,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StreamModel[] = {
    "StreamModel\0\0current\0"
    "setCurrentPortIndex(QModelIndex)\0"
    "portGroupId,portId\0"
    "when_mCurrentPort_streamListChanged(int,int)\0"
};

void StreamModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StreamModel *_t = static_cast<StreamModel *>(_o);
        switch (_id) {
        case 0: _t->setCurrentPortIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->when_mCurrentPort_streamListChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StreamModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StreamModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_StreamModel,
      qt_meta_data_StreamModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StreamModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StreamModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StreamModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StreamModel))
        return static_cast<void*>(const_cast< StreamModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int StreamModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
