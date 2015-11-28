/****************************************************************************
** Meta object code from reading C++ file 'backgroundaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/formeditor/backgroundaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backgroundaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__BackgroundAction_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__BackgroundAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__BackgroundAction_t qt_meta_stringdata_QmlDesigner__BackgroundAction = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QmlDesigner::BackgroundAction"
QT_MOC_LITERAL(1, 30, 17), // "backgroundChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 5), // "color"
QT_MOC_LITERAL(4, 55, 21), // "emitBackgroundChanged"
QT_MOC_LITERAL(5, 77, 5) // "index"

    },
    "QmlDesigner::BackgroundAction\0"
    "backgroundChanged\0\0color\0emitBackgroundChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__BackgroundAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QmlDesigner::BackgroundAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BackgroundAction *_t = static_cast<BackgroundAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backgroundChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->emitBackgroundChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BackgroundAction::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BackgroundAction::backgroundChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmlDesigner::BackgroundAction::staticMetaObject = {
    { &QWidgetAction::staticMetaObject, qt_meta_stringdata_QmlDesigner__BackgroundAction.data,
      qt_meta_data_QmlDesigner__BackgroundAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::BackgroundAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::BackgroundAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__BackgroundAction.stringdata0))
        return static_cast<void*>(const_cast< BackgroundAction*>(this));
    return QWidgetAction::qt_metacast(_clname);
}

int QmlDesigner::BackgroundAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QmlDesigner::BackgroundAction::backgroundChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
