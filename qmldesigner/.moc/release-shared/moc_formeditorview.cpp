/****************************************************************************
** Meta object code from reading C++ file 'formeditorview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/formeditor/formeditorview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formeditorview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__FormEditorView_t {
    QByteArrayData data[8];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__FormEditorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__FormEditorView_t qt_meta_stringdata_QmlDesigner__FormEditorView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QmlDesigner::FormEditorView"
QT_MOC_LITERAL(1, 28, 12), // "delayedReset"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 25), // "adjustStatesForModelNodes"
QT_MOC_LITERAL(4, 68, 16), // "QList<ModelNode>"
QT_MOC_LITERAL(5, 85, 8), // "nodeList"
QT_MOC_LITERAL(6, 94, 24), // "updateGraphicsIndicators"
QT_MOC_LITERAL(7, 119, 19) // "isMoveToolAvailable"

    },
    "QmlDesigner::FormEditorView\0delayedReset\0"
    "\0adjustStatesForModelNodes\0QList<ModelNode>\0"
    "nodeList\0updateGraphicsIndicators\0"
    "isMoveToolAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__FormEditorView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    1,   35,    2, 0x09 /* Protected */,
       6,    0,   38,    2, 0x09 /* Protected */,
       7,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 4, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void QmlDesigner::FormEditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormEditorView *_t = static_cast<FormEditorView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->delayedReset(); break;
        case 1: { QList<ModelNode> _r = _t->adjustStatesForModelNodes((*reinterpret_cast< const QList<ModelNode>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<ModelNode>*>(_a[0]) = _r; }  break;
        case 2: _t->updateGraphicsIndicators(); break;
        case 3: { bool _r = _t->isMoveToolAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::FormEditorView::staticMetaObject = {
    { &AbstractView::staticMetaObject, qt_meta_stringdata_QmlDesigner__FormEditorView.data,
      qt_meta_data_QmlDesigner__FormEditorView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::FormEditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::FormEditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__FormEditorView.stringdata0))
        return static_cast<void*>(const_cast< FormEditorView*>(this));
    return AbstractView::qt_metacast(_clname);
}

int QmlDesigner::FormEditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
