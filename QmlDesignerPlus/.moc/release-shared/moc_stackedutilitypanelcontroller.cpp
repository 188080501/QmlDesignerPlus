/****************************************************************************
** Meta object code from reading C++ file 'stackedutilitypanelcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/integration/stackedutilitypanelcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stackedutilitypanelcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__StackedUtilityPanelController_t {
    QByteArrayData data[6];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__StackedUtilityPanelController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__StackedUtilityPanelController_t qt_meta_stringdata_QmlDesigner__StackedUtilityPanelController = {
    {
QT_MOC_LITERAL(0, 0, 42), // "QmlDesigner::StackedUtilityPa..."
QT_MOC_LITERAL(1, 43, 4), // "show"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "DesignDocument*"
QT_MOC_LITERAL(4, 65, 14), // "DesignDocument"
QT_MOC_LITERAL(5, 80, 5) // "close"

    },
    "QmlDesigner::StackedUtilityPanelController\0"
    "show\0\0DesignDocument*\0DesignDocument\0"
    "close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__StackedUtilityPanelController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QmlDesigner::StackedUtilityPanelController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StackedUtilityPanelController *_t = static_cast<StackedUtilityPanelController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show((*reinterpret_cast< DesignDocument*(*)>(_a[1]))); break;
        case 1: _t->close((*reinterpret_cast< DesignDocument*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::StackedUtilityPanelController::staticMetaObject = {
    { &UtilityPanelController::staticMetaObject, qt_meta_stringdata_QmlDesigner__StackedUtilityPanelController.data,
      qt_meta_data_QmlDesigner__StackedUtilityPanelController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::StackedUtilityPanelController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::StackedUtilityPanelController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__StackedUtilityPanelController.stringdata0))
        return static_cast<void*>(const_cast< StackedUtilityPanelController*>(this));
    return UtilityPanelController::qt_metacast(_clname);
}

int QmlDesigner::StackedUtilityPanelController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UtilityPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
