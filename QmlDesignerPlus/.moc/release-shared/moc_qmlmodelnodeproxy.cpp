/****************************************************************************
** Meta object code from reading C++ file 'qmlmodelnodeproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/propertyeditor/qmlmodelnodeproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlmodelnodeproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__QmlModelNodeProxy_t {
    QByteArrayData data[7];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__QmlModelNodeProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__QmlModelNodeProxy_t qt_meta_stringdata_QmlDesigner__QmlModelNodeProxy = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QmlDesigner::QmlModelNodeProxy"
QT_MOC_LITERAL(1, 31, 16), // "modelNodeChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 20), // "selectionToBeChanged"
QT_MOC_LITERAL(4, 70, 16), // "selectionChanged"
QT_MOC_LITERAL(5, 87, 9), // "modelNode"
QT_MOC_LITERAL(6, 97, 22) // "QmlDesigner::ModelNode"

    },
    "QmlDesigner::QmlModelNodeProxy\0"
    "modelNodeChanged\0\0selectionToBeChanged\0"
    "selectionChanged\0modelNode\0"
    "QmlDesigner::ModelNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__QmlModelNodeProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QmlDesigner::QmlModelNodeProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlModelNodeProxy *_t = static_cast<QmlModelNodeProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelNodeChanged(); break;
        case 1: _t->selectionToBeChanged(); break;
        case 2: _t->selectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmlModelNodeProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlModelNodeProxy::modelNodeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QmlModelNodeProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlModelNodeProxy::selectionToBeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QmlModelNodeProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlModelNodeProxy::selectionChanged)) {
                *result = 2;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlDesigner::ModelNode >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlModelNodeProxy *_t = static_cast<QmlModelNodeProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlDesigner::ModelNode*>(_v) = _t->modelNode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlDesigner::QmlModelNodeProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__QmlModelNodeProxy.data,
      qt_meta_data_QmlDesigner__QmlModelNodeProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::QmlModelNodeProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::QmlModelNodeProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__QmlModelNodeProxy.stringdata0))
        return static_cast<void*>(const_cast< QmlModelNodeProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::QmlModelNodeProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlDesigner::QmlModelNodeProxy::modelNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlDesigner::QmlModelNodeProxy::selectionToBeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmlDesigner::QmlModelNodeProxy::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
