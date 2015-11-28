/****************************************************************************
** Meta object code from reading C++ file 'abstractaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/componentcore/abstractaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__DefaultAction_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__DefaultAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__DefaultAction_t qt_meta_stringdata_QmlDesigner__DefaultAction = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QmlDesigner::DefaultAction"
QT_MOC_LITERAL(1, 27, 9), // "triggered"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "checked"
QT_MOC_LITERAL(4, 46, 16), // "SelectionContext"
QT_MOC_LITERAL(5, 63, 16), // "selectionContext"
QT_MOC_LITERAL(6, 80, 15), // "actionTriggered"
QT_MOC_LITERAL(7, 96, 6), // "enable"
QT_MOC_LITERAL(8, 103, 19) // "setSelectionContext"

    },
    "QmlDesigner::DefaultAction\0triggered\0"
    "\0checked\0SelectionContext\0selectionContext\0"
    "actionTriggered\0enable\0setSelectionContext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__DefaultAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   34,    2, 0x0a /* Public */,
       8,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void QmlDesigner::DefaultAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DefaultAction *_t = static_cast<DefaultAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const SelectionContext(*)>(_a[2]))); break;
        case 1: _t->actionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSelectionContext((*reinterpret_cast< const SelectionContext(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DefaultAction::*_t)(bool , const SelectionContext & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DefaultAction::triggered)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmlDesigner::DefaultAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_QmlDesigner__DefaultAction.data,
      qt_meta_data_QmlDesigner__DefaultAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::DefaultAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::DefaultAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__DefaultAction.stringdata0))
        return static_cast<void*>(const_cast< DefaultAction*>(this));
    return QAction::qt_metacast(_clname);
}

int QmlDesigner::DefaultAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
void QmlDesigner::DefaultAction::triggered(bool _t1, const SelectionContext & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
