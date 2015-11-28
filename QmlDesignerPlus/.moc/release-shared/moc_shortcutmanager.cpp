/****************************************************************************
** Meta object code from reading C++ file 'shortcutmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shortcutmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__ShortCutManager_t {
    QByteArrayData data[19];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__ShortCutManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__ShortCutManager_t qt_meta_stringdata_QmlDesigner__ShortCutManager = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmlDesigner::ShortCutManager"
QT_MOC_LITERAL(1, 29, 13), // "updateActions"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "Core::IEditor*"
QT_MOC_LITERAL(4, 59, 6), // "editor"
QT_MOC_LITERAL(5, 66, 4), // "undo"
QT_MOC_LITERAL(6, 71, 4), // "redo"
QT_MOC_LITERAL(7, 76, 14), // "deleteSelected"
QT_MOC_LITERAL(8, 91, 11), // "cutSelected"
QT_MOC_LITERAL(9, 103, 12), // "copySelected"
QT_MOC_LITERAL(10, 116, 5), // "paste"
QT_MOC_LITERAL(11, 122, 9), // "selectAll"
QT_MOC_LITERAL(12, 132, 14), // "toggleSidebars"
QT_MOC_LITERAL(13, 147, 17), // "toggleLeftSidebar"
QT_MOC_LITERAL(14, 165, 18), // "toggleRightSidebar"
QT_MOC_LITERAL(15, 184, 13), // "undoAvailable"
QT_MOC_LITERAL(16, 198, 11), // "isAvailable"
QT_MOC_LITERAL(17, 210, 13), // "redoAvailable"
QT_MOC_LITERAL(18, 224, 15) // "goIntoComponent"

    },
    "QmlDesigner::ShortCutManager\0updateActions\0"
    "\0Core::IEditor*\0editor\0undo\0redo\0"
    "deleteSelected\0cutSelected\0copySelected\0"
    "paste\0selectAll\0toggleSidebars\0"
    "toggleLeftSidebar\0toggleRightSidebar\0"
    "undoAvailable\0isAvailable\0redoAvailable\0"
    "goIntoComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__ShortCutManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    1,   97,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::ShortCutManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShortCutManager *_t = static_cast<ShortCutManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateActions((*reinterpret_cast< Core::IEditor*(*)>(_a[1]))); break;
        case 1: _t->undo(); break;
        case 2: _t->redo(); break;
        case 3: _t->deleteSelected(); break;
        case 4: _t->cutSelected(); break;
        case 5: _t->copySelected(); break;
        case 6: _t->paste(); break;
        case 7: _t->selectAll(); break;
        case 8: _t->toggleSidebars(); break;
        case 9: _t->toggleLeftSidebar(); break;
        case 10: _t->toggleRightSidebar(); break;
        case 11: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->goIntoComponent(); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::ShortCutManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__ShortCutManager.data,
      qt_meta_data_QmlDesigner__ShortCutManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::ShortCutManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::ShortCutManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__ShortCutManager.stringdata0))
        return static_cast<void*>(const_cast< ShortCutManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::ShortCutManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
