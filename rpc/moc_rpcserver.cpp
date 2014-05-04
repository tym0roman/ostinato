/****************************************************************************
** Meta object code from reading C++ file 'rpcserver.h'
**
** Created: Thu May 1 12:18:51 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rpcserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RpcServer[] = {

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
      11,   10,   10,   10, 0x08,
      32,   10,   10,   10, 0x08,
      52,   10,   10,   10, 0x08,
      81,   69,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RpcServer[] = {
    "RpcServer\0\0when_newConnection()\0"
    "when_disconnected()\0when_dataAvail()\0"
    "socketError\0when_error(QAbstractSocket::SocketError)\0"
};

void RpcServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RpcServer *_t = static_cast<RpcServer *>(_o);
        switch (_id) {
        case 0: _t->when_newConnection(); break;
        case 1: _t->when_disconnected(); break;
        case 2: _t->when_dataAvail(); break;
        case 3: _t->when_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RpcServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RpcServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RpcServer,
      qt_meta_data_RpcServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RpcServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RpcServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RpcServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RpcServer))
        return static_cast<void*>(const_cast< RpcServer*>(this));
    return QObject::qt_metacast(_clname);
}

int RpcServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
