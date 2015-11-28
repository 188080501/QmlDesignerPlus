/****************************************************************************
** Meta object code from reading C++ file 'textmodifier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designercore/include/textmodifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textmodifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__TextModifier_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__TextModifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__TextModifier_t qt_meta_stringdata_QmlDesigner__TextModifier = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmlDesigner::TextModifier"
QT_MOC_LITERAL(1, 26, 11), // "textChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "replaced"
QT_MOC_LITERAL(4, 48, 6), // "offset"
QT_MOC_LITERAL(5, 55, 9), // "oldLength"
QT_MOC_LITERAL(6, 65, 9), // "newLength"
QT_MOC_LITERAL(7, 75, 5), // "moved"
QT_MOC_LITERAL(8, 81, 22), // "TextModifier::MoveInfo"
QT_MOC_LITERAL(9, 104, 8) // "moveInfo"

    },
    "QmlDesigner::TextModifier\0textChanged\0"
    "\0replaced\0offset\0oldLength\0newLength\0"
    "moved\0TextModifier::MoveInfo\0moveInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__TextModifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    3,   30,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QmlDesigner::TextModifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextModifier *_t = static_cast<TextModifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->replaced((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->moved((*reinterpret_cast< const TextModifier::MoveInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TextModifier::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextModifier::textChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (TextModifier::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextModifier::replaced)) {
                *result = 1;
            }
        }
        {
            typedef void (TextModifier::*_t)(const TextModifier::MoveInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextModifier::moved)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmlDesigner::TextModifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__TextModifier.data,
      qt_meta_data_QmlDesigner__TextModifier,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::TextModifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::TextModifier::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__TextModifier.stringdata0))
        return static_cast<void*>(const_cast< TextModifier*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::TextModifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QmlDesigner::TextModifier::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlDesigner::TextModifier::replaced(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlDesigner::TextModifier::moved(const TextModifier::MoveInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
