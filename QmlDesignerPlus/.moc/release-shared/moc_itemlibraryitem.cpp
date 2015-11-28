/****************************************************************************
** Meta object code from reading C++ file 'itemlibraryitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/itemlibrary/itemlibraryitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemlibraryitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__ItemLibraryItem_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__ItemLibraryItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__ItemLibraryItem_t qt_meta_stringdata_QmlDesigner__ItemLibraryItem = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmlDesigner::ItemLibraryItem"
QT_MOC_LITERAL(1, 29, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "itemLibraryEntry"
QT_MOC_LITERAL(4, 65, 8), // "itemName"
QT_MOC_LITERAL(5, 74, 19), // "itemLibraryIconPath"
QT_MOC_LITERAL(6, 94, 11) // "itemVisible"

    },
    "QmlDesigner::ItemLibraryItem\0"
    "visibilityChanged\0\0itemLibraryEntry\0"
    "itemName\0itemLibraryIconPath\0itemVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__ItemLibraryItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QVariant, 0x00095801,
       4, QMetaType::QString, 0x00095801,
       5, QMetaType::QString, 0x00095801,
       6, QMetaType::Bool, 0x00495801,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void QmlDesigner::ItemLibraryItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemLibraryItem *_t = static_cast<ItemLibraryItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibilityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ItemLibraryItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemLibraryItem::visibilityChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ItemLibraryItem *_t = static_cast<ItemLibraryItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->itemLibraryEntry(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->itemName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->itemLibraryIconPath(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QmlDesigner::ItemLibraryItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__ItemLibraryItem.data,
      qt_meta_data_QmlDesigner__ItemLibraryItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::ItemLibraryItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::ItemLibraryItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__ItemLibraryItem.stringdata0))
        return static_cast<void*>(const_cast< ItemLibraryItem*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::ItemLibraryItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
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

// SIGNAL 0
void QmlDesigner::ItemLibraryItem::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
