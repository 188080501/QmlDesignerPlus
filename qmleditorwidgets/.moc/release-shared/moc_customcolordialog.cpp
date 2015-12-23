/****************************************************************************
** Meta object code from reading C++ file 'customcolordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../customcolordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customcolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlEditorWidgets__CustomColorDialog_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__CustomColorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__CustomColorDialog_t qt_meta_stringdata_QmlEditorWidgets__CustomColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QmlEditorWidgets::CustomColor..."
QT_MOC_LITERAL(1, 36, 12), // "colorChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "accepted"
QT_MOC_LITERAL(4, 59, 5), // "color"
QT_MOC_LITERAL(5, 65, 8), // "rejected"
QT_MOC_LITERAL(6, 74, 11), // "changeColor"
QT_MOC_LITERAL(7, 86, 14), // "spinBoxChanged"
QT_MOC_LITERAL(8, 101, 17), // "onColorBoxChanged"
QT_MOC_LITERAL(9, 119, 12), // "onHueChanged"
QT_MOC_LITERAL(10, 132, 6), // "newHue"
QT_MOC_LITERAL(11, 139, 8) // "onAccept"

    },
    "QmlEditorWidgets::CustomColorDialog\0"
    "colorChanged\0\0accepted\0color\0rejected\0"
    "changeColor\0spinBoxChanged\0onColorBoxChanged\0"
    "onHueChanged\0newHue\0onAccept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__CustomColorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   59,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      11,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QmlEditorWidgets::CustomColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomColorDialog *_t = static_cast<CustomColorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged(); break;
        case 1: _t->accepted((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->rejected(); break;
        case 3: _t->changeColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->spinBoxChanged(); break;
        case 5: _t->onColorBoxChanged(); break;
        case 6: _t->onHueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onAccept(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CustomColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomColorDialog::colorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CustomColorDialog::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomColorDialog::accepted)) {
                *result = 1;
            }
        }
        {
            typedef void (CustomColorDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomColorDialog::rejected)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CustomColorDialog *_t = static_cast<CustomColorDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CustomColorDialog *_t = static_cast<CustomColorDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlEditorWidgets::CustomColorDialog::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__CustomColorDialog.data,
      qt_meta_data_QmlEditorWidgets__CustomColorDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::CustomColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::CustomColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__CustomColorDialog.stringdata0))
        return static_cast<void*>(const_cast< CustomColorDialog*>(this));
    return QFrame::qt_metacast(_clname);
}

int QmlEditorWidgets::CustomColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void QmlEditorWidgets::CustomColorDialog::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlEditorWidgets::CustomColorDialog::accepted(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlEditorWidgets::CustomColorDialog::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
