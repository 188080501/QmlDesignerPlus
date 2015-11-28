/****************************************************************************
** Meta object code from reading C++ file 'componenttextmodifier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designercore/include/componenttextmodifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'componenttextmodifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__ComponentTextModifier_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__ComponentTextModifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__ComponentTextModifier_t qt_meta_stringdata_QmlDesigner__ComponentTextModifier = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QmlDesigner::ComponentTextMod..."
QT_MOC_LITERAL(1, 35, 14), // "contentsChange"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 8), // "position"
QT_MOC_LITERAL(4, 60, 12), // "charsRemoved"
QT_MOC_LITERAL(5, 73, 10) // "charsAdded"

    },
    "QmlDesigner::ComponentTextModifier\0"
    "contentsChange\0\0position\0charsRemoved\0"
    "charsAdded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__ComponentTextModifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,

       0        // eod
};

void QmlDesigner::ComponentTextModifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComponentTextModifier *_t = static_cast<ComponentTextModifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentsChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::ComponentTextModifier::staticMetaObject = {
    { &TextModifier::staticMetaObject, qt_meta_stringdata_QmlDesigner__ComponentTextModifier.data,
      qt_meta_data_QmlDesigner__ComponentTextModifier,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::ComponentTextModifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::ComponentTextModifier::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__ComponentTextModifier.stringdata0))
        return static_cast<void*>(const_cast< ComponentTextModifier*>(this));
    return TextModifier::qt_metacast(_clname);
}

int QmlDesigner::ComponentTextModifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextModifier::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
