/****************************************************************************
** Meta object code from reading C++ file 'GpsRtkPlugin.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/ethz_piksi_ros/rqt_gps_rtk_plugin/include/rqt_gps_rtk_plugin/GpsRtkPlugin.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GpsRtkPlugin.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GpsRtkPlugin_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GpsRtkPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GpsRtkPlugin_t qt_meta_stringdata_GpsRtkPlugin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GpsRtkPlugin"
QT_MOC_LITERAL(1, 13, 20), // "clickStartUARTButton"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "clickStartUDPButton"
QT_MOC_LITERAL(4, 55, 18), // "uartResultsHandler"
QT_MOC_LITERAL(5, 74, 17) // "udpResultsHandler"

    },
    "GpsRtkPlugin\0clickStartUARTButton\0\0"
    "clickStartUDPButton\0uartResultsHandler\0"
    "udpResultsHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GpsRtkPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       5,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void GpsRtkPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GpsRtkPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickStartUARTButton(); break;
        case 1: _t->clickStartUDPButton(); break;
        case 2: _t->uartResultsHandler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->udpResultsHandler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GpsRtkPlugin::staticMetaObject = { {
    &rqt_gui_cpp::Plugin::staticMetaObject,
    qt_meta_stringdata_GpsRtkPlugin.data,
    qt_meta_data_GpsRtkPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GpsRtkPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GpsRtkPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GpsRtkPlugin.stringdata0))
        return static_cast<void*>(this);
    return rqt_gui_cpp::Plugin::qt_metacast(_clname);
}

int GpsRtkPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rqt_gui_cpp::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
