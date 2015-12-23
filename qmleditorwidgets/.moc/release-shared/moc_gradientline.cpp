/****************************************************************************
** Meta object code from reading C++ file 'gradientline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gradientline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradientline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlEditorWidgets__GradientLine_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__GradientLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__GradientLine_t qt_meta_stringdata_QmlEditorWidgets__GradientLine = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QmlEditorWidgets::GradientLine"
QT_MOC_LITERAL(1, 31, 18), // "activeColorChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "itemNodeChanged"
QT_MOC_LITERAL(4, 67, 19), // "gradientNameChanged"
QT_MOC_LITERAL(5, 87, 15), // "gradientChanged"
QT_MOC_LITERAL(6, 103, 15), // "openColorDialog"
QT_MOC_LITERAL(7, 119, 3), // "pos"
QT_MOC_LITERAL(8, 123, 11), // "activeColor"
QT_MOC_LITERAL(9, 135, 12), // "gradientName"
QT_MOC_LITERAL(10, 148, 6), // "active"
QT_MOC_LITERAL(11, 155, 8), // "gradient"
QT_MOC_LITERAL(12, 164, 15) // "QLinearGradient"

    },
    "QmlEditorWidgets::GradientLine\0"
    "activeColorChanged\0\0itemNodeChanged\0"
    "gradientNameChanged\0gradientChanged\0"
    "openColorDialog\0pos\0activeColor\0"
    "gradientName\0active\0gradient\0"
    "QLinearGradient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__GradientLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    7,

 // properties: name, type, flags
       8, QMetaType::QColor, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::Bool, 0x00095103,
      11, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       2,
       0,
       3,

       0        // eod
};

void QmlEditorWidgets::GradientLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientLine *_t = static_cast<GradientLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeColorChanged(); break;
        case 1: _t->itemNodeChanged(); break;
        case 2: _t->gradientNameChanged(); break;
        case 3: _t->gradientChanged(); break;
        case 4: _t->openColorDialog((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GradientLine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientLine::activeColorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GradientLine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientLine::itemNodeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (GradientLine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientLine::gradientNameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (GradientLine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientLine::gradientChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (GradientLine::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientLine::openColorDialog)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GradientLine *_t = static_cast<GradientLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->activeColor(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->gradientName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 3: *reinterpret_cast< QLinearGradient*>(_v) = _t->gradient(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GradientLine *_t = static_cast<GradientLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActiveColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setGradientName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setGradient(*reinterpret_cast< QLinearGradient*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlEditorWidgets::GradientLine::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__GradientLine.data,
      qt_meta_data_QmlEditorWidgets__GradientLine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::GradientLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::GradientLine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__GradientLine.stringdata0))
        return static_cast<void*>(const_cast< GradientLine*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlEditorWidgets::GradientLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QmlEditorWidgets::GradientLine::activeColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlEditorWidgets::GradientLine::itemNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmlEditorWidgets::GradientLine::gradientNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QmlEditorWidgets::GradientLine::gradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QmlEditorWidgets::GradientLine::openColorDialog(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
