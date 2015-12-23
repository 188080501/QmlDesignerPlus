/****************************************************************************
** Meta object code from reading C++ file 'colorbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../colorbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlEditorWidgets__ColorBox_t {
    QByteArrayData data[13];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__ColorBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__ColorBox_t qt_meta_stringdata_QmlEditorWidgets__ColorBox = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QmlEditorWidgets::ColorBox"
QT_MOC_LITERAL(1, 27, 12), // "colorChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "hueChanged"
QT_MOC_LITERAL(4, 52, 17), // "saturationChanged"
QT_MOC_LITERAL(5, 70, 12), // "valueChanged"
QT_MOC_LITERAL(6, 83, 12), // "alphaChanged"
QT_MOC_LITERAL(7, 96, 8), // "strColor"
QT_MOC_LITERAL(8, 105, 5), // "color"
QT_MOC_LITERAL(9, 111, 3), // "hue"
QT_MOC_LITERAL(10, 115, 10), // "saturation"
QT_MOC_LITERAL(11, 126, 5), // "value"
QT_MOC_LITERAL(12, 132, 5) // "alpha"

    },
    "QmlEditorWidgets::ColorBox\0colorChanged\0"
    "\0hueChanged\0saturationChanged\0"
    "valueChanged\0alphaChanged\0strColor\0"
    "color\0hue\0saturation\0value\0alpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__ColorBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::QColor, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void QmlEditorWidgets::ColorBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorBox *_t = static_cast<ColorBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged(); break;
        case 1: _t->hueChanged(); break;
        case 2: _t->saturationChanged(); break;
        case 3: _t->valueChanged(); break;
        case 4: _t->alphaChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColorBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorBox::colorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ColorBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorBox::hueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ColorBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorBox::saturationChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ColorBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorBox::valueChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ColorBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorBox::alphaChanged)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ColorBox *_t = static_cast<ColorBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->strColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->hue(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->saturation(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->alpha(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ColorBox *_t = static_cast<ColorBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStrColor(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setHue(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSaturation(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setAlpha(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QmlEditorWidgets::ColorBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__ColorBox.data,
      qt_meta_data_QmlEditorWidgets__ColorBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::ColorBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::ColorBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__ColorBox.stringdata0))
        return static_cast<void*>(const_cast< ColorBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlEditorWidgets::ColorBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlEditorWidgets::ColorBox::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlEditorWidgets::ColorBox::hueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmlEditorWidgets::ColorBox::saturationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QmlEditorWidgets::ColorBox::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QmlEditorWidgets::ColorBox::alphaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
