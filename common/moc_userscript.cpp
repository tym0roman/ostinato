/****************************************************************************
** Meta object code from reading C++ file 'userscript.h'
**
** Created: Thu May 1 12:20:17 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "userscript.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userscript.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserProtocol[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       4,  129, // properties
       2,  141, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      30,   13,   22,   13, 0x0a,
      42,   37,   13,   13, 0x0a,
      65,   13,   60,   13, 0x0a,
     105,   96,   13,   13, 0x0a,
     141,   13,   60,   13, 0x0a,
     171,   96,   13,   13, 0x0a,
     210,   13,  206,   13, 0x0a,
     245,  239,   13,   13, 0x0a,
     293,  288,  280,   13, 0x0a,
     353,  341,  206,   13, 0x0a,
     378,   13,  206,   13, 0x2a,
     400,  341,  206,   13, 0x0a,
     430,   13,  206,   13, 0x2a,
     457,   13,   60,   13, 0x0a,
     495,   13,   60,   13, 0x0a,
     532,   13,  206,   13, 0x0a,
     590,  568,  280,   13, 0x0a,
     648,  341,  280,   13, 0x2a,
     678,   13,  280,   13, 0x2a,
     705,  568,  280,   13, 0x0a,
     764,  341,  280,   13, 0x2a,
     795,   13,  280,   13, 0x2a,

 // properties: name, type, flags
      37,   22, 0x0a095103,
     823,   60, 0x01095103,
     850,   60, 0x01095103,
     876,  206, 0x02095103,

 // enums: name, flags, count, data
     903, 0x0,    4,  149,
     918, 0x0,    3,  157,

 // enum data: key, value
     928, uint(UserProtocol::ProtocolIdLlc),
     942, uint(UserProtocol::ProtocolIdEth),
     956, uint(UserProtocol::ProtocolIdIp),
     969, uint(UserProtocol::ProtocolIdTcpUdp),
     986, uint(UserProtocol::CksumIp),
     994, uint(UserProtocol::CksumIpPseudo),
    1008, uint(UserProtocol::CksumTcpUdp),

       0        // eod
};

static const char qt_meta_stringdata_UserProtocol[] = {
    "UserProtocol\0\0reset()\0QString\0name()\0"
    "name\0setName(QString&)\0bool\0"
    "isProtocolFrameValueVariable()\0variable\0"
    "setProtocolFrameValueVariable(bool)\0"
    "isProtocolFrameSizeVariable()\0"
    "setProtocolFrameSizeVariable(bool)\0"
    "int\0protocolFrameVariableCount()\0count\0"
    "setProtocolFrameVariableCount(int)\0"
    "quint32\0type\0"
    "payloadProtocolId(UserProtocol::ProtocolIdType)\0"
    "streamIndex\0protocolFrameOffset(int)\0"
    "protocolFrameOffset()\0"
    "protocolFramePayloadSize(int)\0"
    "protocolFramePayloadSize()\0"
    "isProtocolFramePayloadValueVariable()\0"
    "isProtocolFramePayloadSizeVariable()\0"
    "protocolFramePayloadVariableCount()\0"
    "streamIndex,cksumType\0"
    "protocolFrameHeaderCksum(int,AbstractProtocol::CksumType)\0"
    "protocolFrameHeaderCksum(int)\0"
    "protocolFrameHeaderCksum()\0"
    "protocolFramePayloadCksum(int,AbstractProtocol::CksumType)\0"
    "protocolFramePayloadCksum(int)\0"
    "protocolFramePayloadCksum()\0"
    "protocolFrameValueVariable\0"
    "protocolFrameSizeVariable\0"
    "protocolFrameVariableCount\0ProtocolIdType\0"
    "CksumType\0ProtocolIdLlc\0ProtocolIdEth\0"
    "ProtocolIdIp\0ProtocolIdTcpUdp\0CksumIp\0"
    "CksumIpPseudo\0CksumTcpUdp\0"
};

void UserProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserProtocol *_t = static_cast<UserProtocol *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: { QString _r = _t->name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isProtocolFrameValueVariable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->setProtocolFrameValueVariable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->isProtocolFrameSizeVariable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setProtocolFrameSizeVariable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { int _r = _t->protocolFrameVariableCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->setProtocolFrameVariableCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { quint32 _r = _t->payloadProtocolId((*reinterpret_cast< UserProtocol::ProtocolIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->protocolFrameOffset((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->protocolFrameOffset();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->protocolFramePayloadSize((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->protocolFramePayloadSize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isProtocolFramePayloadValueVariable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isProtocolFramePayloadSizeVariable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->protocolFramePayloadVariableCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { quint32 _r = _t->protocolFrameHeaderCksum((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< AbstractProtocol::CksumType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        case 18: { quint32 _r = _t->protocolFrameHeaderCksum((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        case 19: { quint32 _r = _t->protocolFrameHeaderCksum();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        case 20: { quint32 _r = _t->protocolFramePayloadCksum((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< AbstractProtocol::CksumType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        case 21: { quint32 _r = _t->protocolFramePayloadCksum((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        case 22: { quint32 _r = _t->protocolFramePayloadCksum();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserProtocol::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserProtocol,
      qt_meta_data_UserProtocol, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserProtocol::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserProtocol))
        return static_cast<void*>(const_cast< UserProtocol*>(this));
    return QObject::qt_metacast(_clname);
}

int UserProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isProtocolFrameValueVariable(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isProtocolFrameSizeVariable(); break;
        case 3: *reinterpret_cast< int*>(_v) = protocolFrameVariableCount(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setProtocolFrameValueVariable(*reinterpret_cast< bool*>(_v)); break;
        case 2: setProtocolFrameSizeVariable(*reinterpret_cast< bool*>(_v)); break;
        case 3: setProtocolFrameVariableCount(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_UserScriptConfigForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      59,   51,   21,   21, 0x08,
      90,   21,   21,   21, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_UserScriptConfigForm[] = {
    "UserScriptConfigForm\0\0"
    "on_programEdit_textChanged()\0checked\0"
    "on_compileButton_clicked(bool)\0"
    "on_compileButton_clicked()\0"
};

void UserScriptConfigForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserScriptConfigForm *_t = static_cast<UserScriptConfigForm *>(_o);
        switch (_id) {
        case 0: _t->on_programEdit_textChanged(); break;
        case 1: _t->on_compileButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_compileButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserScriptConfigForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserScriptConfigForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UserScriptConfigForm,
      qt_meta_data_UserScriptConfigForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserScriptConfigForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserScriptConfigForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserScriptConfigForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserScriptConfigForm))
        return static_cast<void*>(const_cast< UserScriptConfigForm*>(this));
    if (!strcmp(_clname, "Ui::UserScript"))
        return static_cast< Ui::UserScript*>(const_cast< UserScriptConfigForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int UserScriptConfigForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
