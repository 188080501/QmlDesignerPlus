/****************************************************************************
** Meta object code from reading C++ file 'itemlibrarysection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/itemlibrary/itemlibrarysection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemlibrarysection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__ItemLibrarySection_t {
    QByteArrayData data[8];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__ItemLibrarySection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__ItemLibrarySection_t qt_meta_stringdata_QmlDesigner__ItemLibrarySection = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QmlDesigner::ItemLibrarySection"
QT_MOC_LITERAL(1, 32, 21), // "sectionEntriesChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 17), // "visibilityChanged"
QT_MOC_LITERAL(4, 73, 14), // "sectionEntries"
QT_MOC_LITERAL(5, 88, 11), // "sectionName"
QT_MOC_LITERAL(6, 100, 14), // "sectionVisible"
QT_MOC_LITERAL(7, 115, 15) // "sectionExpanded"

    },
    "QmlDesigner::ItemLibrarySection\0"
    "sectionEntriesChanged\0\0visibilityChanged\0"
    "sectionEntries\0sectionName\0sectionVisible\0"
    "sectionExpanded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__ItemLibrarySection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QObjectStar, 0x00495801,
       5, QMetaType::QString, 0x00095801,
       6, QMetaType::Bool, 0x00495801,
       7, QMetaType::Bool, 0x00095801,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,

       0        // eod
};

void QmlDesigner::ItemLibrarySection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemLibrarySection *_t = static_cast<ItemLibrarySection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sectionEntriesChanged(); break;
        case 1: _t->visibilityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ItemLibrarySection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemLibrarySection::sectionEntriesChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ItemLibrarySection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemLibrarySection::visibilityChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ItemLibrarySection *_t = static_cast<ItemLibrarySection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->sectionEntries(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sectionName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->sectionExpanded(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QmlDesigner::ItemLibrarySection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__ItemLibrarySection.data,
      qt_meta_data_QmlDesigner__ItemLibrarySection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::ItemLibrarySection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::ItemLibrarySection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__ItemLibrarySection.stringdata0))
        return static_cast<void*>(const_cast< ItemLibrarySection*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::ItemLibrarySection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QmlDesigner::ItemLibrarySection::sectionEntriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlDesigner::ItemLibrarySection::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
