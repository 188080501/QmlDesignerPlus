/****************************************************************************
** Meta object code from reading C++ file 'nodeinstanceserverproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designercore/instances/nodeinstanceserverproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nodeinstanceserverproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__NodeInstanceServerProxy_t {
    QByteArrayData data[13];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__NodeInstanceServerProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__NodeInstanceServerProxy_t qt_meta_stringdata_QmlDesigner__NodeInstanceServerProxy = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QmlDesigner::NodeInstanceServ..."
QT_MOC_LITERAL(1, 37, 14), // "processCrashed"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 15), // "processFinished"
QT_MOC_LITERAL(4, 69, 8), // "exitCode"
QT_MOC_LITERAL(5, 78, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(6, 99, 10), // "exitStatus"
QT_MOC_LITERAL(7, 110, 19), // "readFirstDataStream"
QT_MOC_LITERAL(8, 130, 20), // "readSecondDataStream"
QT_MOC_LITERAL(9, 151, 19), // "readThirdDataStream"
QT_MOC_LITERAL(10, 171, 24), // "printEditorProcessOutput"
QT_MOC_LITERAL(11, 196, 25), // "printPreviewProcessOutput"
QT_MOC_LITERAL(12, 222, 24) // "printRenderProcessOutput"

    },
    "QmlDesigner::NodeInstanceServerProxy\0"
    "processCrashed\0\0processFinished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "readFirstDataStream\0readSecondDataStream\0"
    "readThirdDataStream\0printEditorProcessOutput\0"
    "printPreviewProcessOutput\0"
    "printRenderProcessOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__NodeInstanceServerProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       3,    2,   61,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::NodeInstanceServerProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NodeInstanceServerProxy *_t = static_cast<NodeInstanceServerProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processCrashed(); break;
        case 1: _t->processFinished(); break;
        case 2: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->readFirstDataStream(); break;
        case 4: _t->readSecondDataStream(); break;
        case 5: _t->readThirdDataStream(); break;
        case 6: _t->printEditorProcessOutput(); break;
        case 7: _t->printPreviewProcessOutput(); break;
        case 8: _t->printRenderProcessOutput(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NodeInstanceServerProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NodeInstanceServerProxy::processCrashed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmlDesigner::NodeInstanceServerProxy::staticMetaObject = {
    { &NodeInstanceServerInterface::staticMetaObject, qt_meta_stringdata_QmlDesigner__NodeInstanceServerProxy.data,
      qt_meta_data_QmlDesigner__NodeInstanceServerProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::NodeInstanceServerProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::NodeInstanceServerProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__NodeInstanceServerProxy.stringdata0))
        return static_cast<void*>(const_cast< NodeInstanceServerProxy*>(this));
    return NodeInstanceServerInterface::qt_metacast(_clname);
}

int QmlDesigner::NodeInstanceServerProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NodeInstanceServerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QmlDesigner::NodeInstanceServerProxy::processCrashed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
