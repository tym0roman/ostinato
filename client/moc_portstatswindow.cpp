/****************************************************************************
** Meta object code from reading C++ file 'portstatswindow.h'
**
** Created: Sun May 4 14:12:24 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "portstatswindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portstatswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortStatsWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      46,   16,   16,   16, 0x08,
      74,   16,   16,   16, 0x08,
     102,   16,   16,   16, 0x08,
     129,   16,   16,   16, 0x08,
     156,   16,   16,   16, 0x08,
     177,   16,   16,   16, 0x08,
     201,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PortStatsWindow[] = {
    "PortStatsWindow\0\0on_tbStartTransmit_clicked()\0"
    "on_tbStopTransmit_clicked()\0"
    "on_tbStartCapture_clicked()\0"
    "on_tbStopCapture_clicked()\0"
    "on_tbViewCapture_clicked()\0"
    "on_tbClear_clicked()\0on_tbClearAll_clicked()\0"
    "on_tbFilter_clicked()\0"
};

void PortStatsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PortStatsWindow *_t = static_cast<PortStatsWindow *>(_o);
        switch (_id) {
        case 0: _t->on_tbStartTransmit_clicked(); break;
        case 1: _t->on_tbStopTransmit_clicked(); break;
        case 2: _t->on_tbStartCapture_clicked(); break;
        case 3: _t->on_tbStopCapture_clicked(); break;
        case 4: _t->on_tbViewCapture_clicked(); break;
        case 5: _t->on_tbClear_clicked(); break;
        case 6: _t->on_tbClearAll_clicked(); break;
        case 7: _t->on_tbFilter_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PortStatsWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PortStatsWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PortStatsWindow,
      qt_meta_data_PortStatsWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortStatsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortStatsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortStatsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortStatsWindow))
        return static_cast<void*>(const_cast< PortStatsWindow*>(this));
    if (!strcmp(_clname, "Ui::PortStatsWindow"))
        return static_cast< Ui::PortStatsWindow*>(const_cast< PortStatsWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int PortStatsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
