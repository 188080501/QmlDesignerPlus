/****************************************************************************
** Meta object code from reading C++ file 'easingcontextpane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../easingpane/easingcontextpane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'easingcontextpane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlEditorWidgets__EasingContextPane_t {
    QByteArrayData data[13];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__EasingContextPane_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__EasingContextPane_t qt_meta_stringdata_QmlEditorWidgets__EasingContextPane = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QmlEditorWidgets::EasingConte..."
QT_MOC_LITERAL(1, 36, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 14), // "removeProperty"
QT_MOC_LITERAL(4, 68, 23), // "removeAndChangeProperty"
QT_MOC_LITERAL(5, 92, 21), // "on_playButton_clicked"
QT_MOC_LITERAL(6, 114, 32), // "on_overshootSpinBox_valueChanged"
QT_MOC_LITERAL(7, 147, 29), // "on_periodSpinBox_valueChanged"
QT_MOC_LITERAL(8, 177, 32), // "on_amplitudeSpinBox_valueChanged"
QT_MOC_LITERAL(9, 210, 45), // "on_easingExtremesComboBox_cur..."
QT_MOC_LITERAL(10, 256, 42), // "on_easingShapeComboBox_curren..."
QT_MOC_LITERAL(11, 299, 31), // "on_durationSpinBox_valueChanged"
QT_MOC_LITERAL(12, 331, 13) // "switchToGraph"

    },
    "QmlEditorWidgets::EasingContextPane\0"
    "propertyChanged\0\0removeProperty\0"
    "removeAndChangeProperty\0on_playButton_clicked\0"
    "on_overshootSpinBox_valueChanged\0"
    "on_periodSpinBox_valueChanged\0"
    "on_amplitudeSpinBox_valueChanged\0"
    "on_easingExtremesComboBox_currentIndexChanged\0"
    "on_easingShapeComboBox_currentIndexChanged\0"
    "on_durationSpinBox_valueChanged\0"
    "switchToGraph"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__EasingContextPane[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       3,    1,   74,    2, 0x06 /* Public */,
       4,    4,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   86,    2, 0x08 /* Private */,
       6,    1,   87,    2, 0x08 /* Private */,
       7,    1,   90,    2, 0x08 /* Private */,
       8,    1,   93,    2, 0x08 /* Private */,
       9,    1,   96,    2, 0x08 /* Private */,
      10,    1,   99,    2, 0x08 /* Private */,
      11,    1,  102,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void QmlEditorWidgets::EasingContextPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EasingContextPane *_t = static_cast<EasingContextPane *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->removeProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->removeAndChangeProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->on_playButton_clicked(); break;
        case 4: _t->on_overshootSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_periodSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_amplitudeSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_easingExtremesComboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_easingShapeComboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->on_durationSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->switchToGraph(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EasingContextPane::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingContextPane::propertyChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (EasingContextPane::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingContextPane::removeProperty)) {
                *result = 1;
            }
        }
        {
            typedef void (EasingContextPane::*_t)(const QString & , const QString & , const QVariant & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingContextPane::removeAndChangeProperty)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmlEditorWidgets::EasingContextPane::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__EasingContextPane.data,
      qt_meta_data_QmlEditorWidgets__EasingContextPane,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::EasingContextPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::EasingContextPane::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__EasingContextPane.stringdata0))
        return static_cast<void*>(const_cast< EasingContextPane*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlEditorWidgets::EasingContextPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QmlEditorWidgets::EasingContextPane::propertyChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlEditorWidgets::EasingContextPane::removeProperty(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlEditorWidgets::EasingContextPane::removeAndChangeProperty(const QString & _t1, const QString & _t2, const QVariant & _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
