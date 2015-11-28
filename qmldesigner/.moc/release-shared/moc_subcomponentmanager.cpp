/****************************************************************************
** Meta object code from reading C++ file 'subcomponentmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designercore/include/subcomponentmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subcomponentmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__SubComponentManager_t {
    QByteArrayData data[9];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__SubComponentManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__SubComponentManager_t qt_meta_stringdata_QmlDesigner__SubComponentManager = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QmlDesigner::SubComponentManager"
QT_MOC_LITERAL(1, 33, 14), // "parseDirectory"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 16), // "canonicalDirPath"
QT_MOC_LITERAL(4, 66, 12), // "addToLibrary"
QT_MOC_LITERAL(5, 79, 8), // "TypeName"
QT_MOC_LITERAL(6, 88, 13), // "qualification"
QT_MOC_LITERAL(7, 102, 9), // "parseFile"
QT_MOC_LITERAL(8, 112, 17) // "canonicalFilePath"

    },
    "QmlDesigner::SubComponentManager\0"
    "parseDirectory\0\0canonicalDirPath\0"
    "addToLibrary\0TypeName\0qualification\0"
    "parseFile\0canonicalFilePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__SubComponentManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x08 /* Private */,
       1,    2,   46,    2, 0x28 /* Private | MethodCloned */,
       1,    1,   51,    2, 0x28 /* Private | MethodCloned */,
       7,    3,   54,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    8,    4,    2,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void QmlDesigner::SubComponentManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubComponentManager *_t = static_cast<SubComponentManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parseDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const TypeName(*)>(_a[3]))); break;
        case 1: _t->parseDirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->parseDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->parseFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->parseFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::SubComponentManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__SubComponentManager.data,
      qt_meta_data_QmlDesigner__SubComponentManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::SubComponentManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::SubComponentManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__SubComponentManager.stringdata0))
        return static_cast<void*>(const_cast< SubComponentManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::SubComponentManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
