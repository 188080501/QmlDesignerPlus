/****************************************************************************
** Meta object code from reading C++ file 'propertyeditorview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/propertyeditor/propertyeditorview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertyeditorview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__PropertyEditorView_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__PropertyEditorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__PropertyEditorView_t qt_meta_stringdata_QmlDesigner__PropertyEditorView = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QmlDesigner::PropertyEditorView"
QT_MOC_LITERAL(1, 32, 9), // "reloadQml"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "changeValue"
QT_MOC_LITERAL(4, 55, 4), // "name"
QT_MOC_LITERAL(5, 60, 16), // "changeExpression"
QT_MOC_LITERAL(6, 77, 10), // "updateSize"
QT_MOC_LITERAL(7, 88, 10) // "setupPanes"

    },
    "QmlDesigner::PropertyEditorView\0"
    "reloadQml\0\0changeValue\0name\0"
    "changeExpression\0updateSize\0setupPanes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__PropertyEditorView[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::PropertyEditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyEditorView *_t = static_cast<PropertyEditorView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reloadQml(); break;
        case 1: _t->changeValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changeExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateSize(); break;
        case 4: _t->setupPanes(); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::PropertyEditorView::staticMetaObject = {
    { &AbstractView::staticMetaObject, qt_meta_stringdata_QmlDesigner__PropertyEditorView.data,
      qt_meta_data_QmlDesigner__PropertyEditorView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::PropertyEditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::PropertyEditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__PropertyEditorView.stringdata0))
        return static_cast<void*>(const_cast< PropertyEditorView*>(this));
    return AbstractView::qt_metacast(_clname);
}

int QmlDesigner::PropertyEditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractView::qt_metacall(_c, _id, _a);
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
