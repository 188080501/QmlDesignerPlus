/****************************************************************************
** Meta object code from reading C++ file 'easinggraph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../easingpane/easinggraph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'easinggraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EasingGraph_t {
    QByteArrayData data[20];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EasingGraph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EasingGraph_t qt_meta_stringdata_EasingGraph = {
    {
QT_MOC_LITERAL(0, 0, 11), // "EasingGraph"
QT_MOC_LITERAL(1, 12, 18), // "easingShapeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "easingExtremesChanged"
QT_MOC_LITERAL(4, 54, 17), // "easingNameChanged"
QT_MOC_LITERAL(5, 72, 16), // "overshootChanged"
QT_MOC_LITERAL(6, 89, 16), // "amplitudeChanged"
QT_MOC_LITERAL(7, 106, 15), // "durationChanged"
QT_MOC_LITERAL(8, 122, 13), // "periodChanged"
QT_MOC_LITERAL(9, 136, 12), // "colorChanged"
QT_MOC_LITERAL(10, 149, 16), // "zeroColorChanged"
QT_MOC_LITERAL(11, 166, 11), // "easingShape"
QT_MOC_LITERAL(12, 178, 14), // "easingExtremes"
QT_MOC_LITERAL(13, 193, 10), // "easingName"
QT_MOC_LITERAL(14, 204, 9), // "overshoot"
QT_MOC_LITERAL(15, 214, 9), // "amplitude"
QT_MOC_LITERAL(16, 224, 6), // "period"
QT_MOC_LITERAL(17, 231, 8), // "duration"
QT_MOC_LITERAL(18, 240, 5), // "color"
QT_MOC_LITERAL(19, 246, 9) // "zeroColor"

    },
    "EasingGraph\0easingShapeChanged\0\0"
    "easingExtremesChanged\0easingNameChanged\0"
    "overshootChanged\0amplitudeChanged\0"
    "durationChanged\0periodChanged\0"
    "colorChanged\0zeroColorChanged\0easingShape\0"
    "easingExtremes\0easingName\0overshoot\0"
    "amplitude\0period\0duration\0color\0"
    "zeroColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EasingGraph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       9,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,
      10,    0,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QReal, 0x00495103,
      15, QMetaType::QReal, 0x00495103,
      16, QMetaType::QReal, 0x00495103,
      17, QMetaType::QReal, 0x00495103,
      18, QMetaType::QColor, 0x00495103,
      19, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       6,
       5,
       7,
       8,

       0        // eod
};

void EasingGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EasingGraph *_t = static_cast<EasingGraph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->easingShapeChanged(); break;
        case 1: _t->easingExtremesChanged(); break;
        case 2: _t->easingNameChanged(); break;
        case 3: _t->overshootChanged(); break;
        case 4: _t->amplitudeChanged(); break;
        case 5: _t->durationChanged(); break;
        case 6: _t->periodChanged(); break;
        case 7: _t->colorChanged(); break;
        case 8: _t->zeroColorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::easingShapeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::easingExtremesChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::easingNameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::overshootChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::amplitudeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::durationChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::periodChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::colorChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (EasingGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EasingGraph::zeroColorChanged)) {
                *result = 8;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        EasingGraph *_t = static_cast<EasingGraph *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->easingShape(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->easingExtremes(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->easingName(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->overshoot(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->amplitude(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->period(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->duration(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->zeroColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EasingGraph *_t = static_cast<EasingGraph *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEasingShape(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setEasingExtremes(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setEasingName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setOvershoot(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setAmplitude(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setPeriod(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setDuration(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setZeroColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject EasingGraph::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EasingGraph.data,
      qt_meta_data_EasingGraph,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EasingGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EasingGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EasingGraph.stringdata0))
        return static_cast<void*>(const_cast< EasingGraph*>(this));
    return QWidget::qt_metacast(_clname);
}

int EasingGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EasingGraph::easingShapeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void EasingGraph::easingExtremesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void EasingGraph::easingNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void EasingGraph::overshootChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void EasingGraph::amplitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void EasingGraph::durationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void EasingGraph::periodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void EasingGraph::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void EasingGraph::zeroColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
