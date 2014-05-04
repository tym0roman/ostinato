/****************************************************************************
** Meta object code from reading C++ file 'portgroup.h'
**
** Created: Thu May 1 12:20:55 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "portgroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portgroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   11,   10,   10, 0x05,
      72,   60,   10,   10, 0x25,
      98,   60,   10,   10, 0x05,
     132,   60,   10,   10, 0x05,
     157,   60,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,   10,   10,   10, 0x08,
     213,  207,   10,   10, 0x08,
     270,   10,   10,   10, 0x08,
     296,   10,   10,   10, 0x08,
     337,  325,   10,   10, 0x08,
     387,   60,   10,   10, 0x08,
     427,  417,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PortGroup[] = {
    "PortGroup\0\0portGroupId,portId\0"
    "portGroupDataChanged(int,int)\0portGroupId\0"
    "portGroupDataChanged(int)\0"
    "portListAboutToBeChanged(quint32)\0"
    "portListChanged(quint32)\0statsChanged(quint32)\0"
    "on_reconnectTimer_timeout()\0state\0"
    "on_rpcChannel_stateChanged(QAbstractSocket::SocketState)\0"
    "on_rpcChannel_connected()\0"
    "on_rpcChannel_disconnected()\0socketError\0"
    "on_rpcChannel_error(QAbstractSocket::SocketError)\0"
    "when_portListChanged(quint32)\0portIndex\0"
    "when_configApply(int)\0"
};

void PortGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PortGroup *_t = static_cast<PortGroup *>(_o);
        switch (_id) {
        case 0: _t->portGroupDataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->portGroupDataChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->portListAboutToBeChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 3: _t->portListChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->statsChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->on_reconnectTimer_timeout(); break;
        case 6: _t->on_rpcChannel_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 7: _t->on_rpcChannel_connected(); break;
        case 8: _t->on_rpcChannel_disconnected(); break;
        case 9: _t->on_rpcChannel_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 10: _t->when_portListChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 11: _t->when_configApply((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PortGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PortGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PortGroup,
      qt_meta_data_PortGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortGroup))
        return static_cast<void*>(const_cast< PortGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PortGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PortGroup::portGroupDataChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void PortGroup::portListAboutToBeChanged(quint32 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PortGroup::portListChanged(quint32 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PortGroup::statsChanged(quint32 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
