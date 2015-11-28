/****************************************************************************
** Meta object code from reading C++ file 'formeditorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/formeditor/formeditorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formeditorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__FormEditorWidget_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__FormEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__FormEditorWidget_t qt_meta_stringdata_QmlDesigner__FormEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QmlDesigner::FormEditorWidget"
QT_MOC_LITERAL(1, 30, 19), // "changeTransformTool"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "checked"
QT_MOC_LITERAL(4, 59, 12), // "setZoomLevel"
QT_MOC_LITERAL(5, 72, 9), // "zoomLevel"
QT_MOC_LITERAL(6, 82, 19), // "changeRootItemWidth"
QT_MOC_LITERAL(7, 102, 9), // "widthText"
QT_MOC_LITERAL(8, 112, 20), // "changeRootItemHeight"
QT_MOC_LITERAL(9, 133, 10), // "heightText"
QT_MOC_LITERAL(10, 144, 15), // "changeBackgound"
QT_MOC_LITERAL(11, 160, 5), // "color"
QT_MOC_LITERAL(12, 166, 21) // "resetNodeInstanceView"

    },
    "QmlDesigner::FormEditorWidget\0"
    "changeTransformTool\0\0checked\0setZoomLevel\0"
    "zoomLevel\0changeRootItemWidth\0widthText\0"
    "changeRootItemHeight\0heightText\0"
    "changeBackgound\0color\0resetNodeInstanceView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__FormEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
      10,    1,   56,    2, 0x08 /* Private */,
      12,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::FormEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormEditorWidget *_t = static_cast<FormEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeTransformTool((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setZoomLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->changeRootItemWidth((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->changeRootItemHeight((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->changeBackgound((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->resetNodeInstanceView(); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::FormEditorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlDesigner__FormEditorWidget.data,
      qt_meta_data_QmlDesigner__FormEditorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::FormEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::FormEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__FormEditorWidget.stringdata0))
        return static_cast<void*>(const_cast< FormEditorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlDesigner::FormEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
