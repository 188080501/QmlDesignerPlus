/****************************************************************************
** Meta object code from reading C++ file 'modelnodepositionrecalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designercore/model/modelnodepositionrecalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelnodepositionrecalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__Internal__ModelNodePositionRecalculator_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__ModelNodePositionRecalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__ModelNodePositionRecalculator_t qt_meta_stringdata_QmlDesigner__Internal__ModelNodePositionRecalculator = {
    {
QT_MOC_LITERAL(0, 0, 52), // "QmlDesigner::Internal::ModelN..."
QT_MOC_LITERAL(1, 53, 8), // "replaced"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 6), // "offset"
QT_MOC_LITERAL(4, 70, 9), // "oldLength"
QT_MOC_LITERAL(5, 80, 9), // "newLength"
QT_MOC_LITERAL(6, 90, 5), // "moved"
QT_MOC_LITERAL(7, 96, 22), // "TextModifier::MoveInfo"
QT_MOC_LITERAL(8, 119, 8) // "moveInfo"

    },
    "QmlDesigner::Internal::ModelNodePositionRecalculator\0"
    "replaced\0\0offset\0oldLength\0newLength\0"
    "moved\0TextModifier::MoveInfo\0moveInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__ModelNodePositionRecalculator[] = {

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
       1,    3,   24,    2, 0x0a /* Public */,
       6,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void QmlDesigner::Internal::ModelNodePositionRecalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelNodePositionRecalculator *_t = static_cast<ModelNodePositionRecalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replaced((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->moved((*reinterpret_cast< const TextModifier::MoveInfo(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::Internal::ModelNodePositionRecalculator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__ModelNodePositionRecalculator.data,
      qt_meta_data_QmlDesigner__Internal__ModelNodePositionRecalculator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::ModelNodePositionRecalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::ModelNodePositionRecalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__ModelNodePositionRecalculator.stringdata0))
        return static_cast<void*>(const_cast< ModelNodePositionRecalculator*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::Internal::ModelNodePositionRecalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
