/****************************************************************************
** Meta object code from reading C++ file 'fontsizespinbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fontsizespinbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontsizespinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlEditorWidgets__FontSizeSpinBox_t {
    QByteArrayData data[15];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__FontSizeSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__FontSizeSpinBox_t qt_meta_stringdata_QmlEditorWidgets__FontSizeSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QmlEditorWidgets::FontSizeSpi..."
QT_MOC_LITERAL(1, 34, 13), // "formatChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 12), // "valueChanged"
QT_MOC_LITERAL(4, 62, 14), // "setIsPointSize"
QT_MOC_LITERAL(5, 77, 1), // "b"
QT_MOC_LITERAL(6, 79, 14), // "setIsPixelSize"
QT_MOC_LITERAL(7, 94, 5), // "clear"
QT_MOC_LITERAL(8, 100, 8), // "setValue"
QT_MOC_LITERAL(9, 109, 3), // "val"
QT_MOC_LITERAL(10, 113, 17), // "onEditingFinished"
QT_MOC_LITERAL(11, 131, 7), // "setText"
QT_MOC_LITERAL(12, 139, 11), // "isPixelSize"
QT_MOC_LITERAL(13, 151, 11), // "isPointSize"
QT_MOC_LITERAL(14, 163, 5) // "value"

    },
    "QmlEditorWidgets::FontSizeSpinBox\0"
    "formatChanged\0\0valueChanged\0setIsPointSize\0"
    "b\0setIsPixelSize\0clear\0setValue\0val\0"
    "onEditingFinished\0setText\0isPixelSize\0"
    "isPointSize\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__FontSizeSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   58,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    1,   65,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void QmlEditorWidgets::FontSizeSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FontSizeSpinBox *_t = static_cast<FontSizeSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->formatChanged(); break;
        case 1: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setIsPointSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setIsPixelSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onEditingFinished(); break;
        case 7: _t->setText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FontSizeSpinBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FontSizeSpinBox::formatChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FontSizeSpinBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FontSizeSpinBox::valueChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FontSizeSpinBox *_t = static_cast<FontSizeSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isPixelSize(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPointSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FontSizeSpinBox *_t = static_cast<FontSizeSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsPixelSize(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setIsPointSize(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlEditorWidgets::FontSizeSpinBox::staticMetaObject = {
    { &QAbstractSpinBox::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__FontSizeSpinBox.data,
      qt_meta_data_QmlEditorWidgets__FontSizeSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::FontSizeSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::FontSizeSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__FontSizeSpinBox.stringdata0))
        return static_cast<void*>(const_cast< FontSizeSpinBox*>(this));
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QmlEditorWidgets::FontSizeSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlEditorWidgets::FontSizeSpinBox::formatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlEditorWidgets::FontSizeSpinBox::valueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
