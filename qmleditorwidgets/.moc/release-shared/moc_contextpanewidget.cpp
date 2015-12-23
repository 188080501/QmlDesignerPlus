/****************************************************************************
** Meta object code from reading C++ file 'contextpanewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../contextpanewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contextpanewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlEditorWidgets__DragWidget_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__DragWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__DragWidget_t qt_meta_stringdata_QmlEditorWidgets__DragWidget = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QmlEditorWidgets::DragWidget"

    },
    "QmlEditorWidgets::DragWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__DragWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QmlEditorWidgets::DragWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmlEditorWidgets::DragWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__DragWidget.data,
      qt_meta_data_QmlEditorWidgets__DragWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::DragWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::DragWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__DragWidget.stringdata0))
        return static_cast<void*>(const_cast< DragWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int QmlEditorWidgets::DragWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidget_t {
    QByteArrayData data[13];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidget_t qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QmlEditorWidgets::ContextPane..."
QT_MOC_LITERAL(1, 36, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 14), // "removeProperty"
QT_MOC_LITERAL(4, 68, 23), // "removeAndChangeProperty"
QT_MOC_LITERAL(5, 92, 13), // "pinnedChanged"
QT_MOC_LITERAL(6, 106, 14), // "enabledChanged"
QT_MOC_LITERAL(7, 121, 6), // "closed"
QT_MOC_LITERAL(8, 128, 12), // "onTogglePane"
QT_MOC_LITERAL(9, 141, 17), // "onShowColorDialog"
QT_MOC_LITERAL(10, 159, 9), // "onDisable"
QT_MOC_LITERAL(11, 169, 15), // "onResetPosition"
QT_MOC_LITERAL(12, 185, 6) // "toggle"

    },
    "QmlEditorWidgets::ContextPaneWidget\0"
    "propertyChanged\0\0removeProperty\0"
    "removeAndChangeProperty\0pinnedChanged\0"
    "enabledChanged\0closed\0onTogglePane\0"
    "onShowColorDialog\0onDisable\0onResetPosition\0"
    "toggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__ContextPaneWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       3,    1,   69,    2, 0x06 /* Public */,
       4,    4,   72,    2, 0x06 /* Public */,
       5,    1,   81,    2, 0x06 /* Public */,
       6,    1,   84,    2, 0x06 /* Public */,
       7,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   88,    2, 0x0a /* Public */,
       9,    2,   89,    2, 0x0a /* Public */,
      10,    1,   94,    2, 0x08 /* Private */,
      11,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QPoint,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void QmlEditorWidgets::ContextPaneWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContextPaneWidget *_t = static_cast<ContextPaneWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->removeProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->removeAndChangeProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->pinnedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->closed(); break;
        case 6: _t->onTogglePane(); break;
        case 7: _t->onShowColorDialog((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 8: _t->onDisable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onResetPosition((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ContextPaneWidget::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidget::propertyChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ContextPaneWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidget::removeProperty)) {
                *result = 1;
            }
        }
        {
            typedef void (ContextPaneWidget::*_t)(const QString & , const QString & , const QVariant & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidget::removeAndChangeProperty)) {
                *result = 2;
            }
        }
        {
            typedef void (ContextPaneWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidget::pinnedChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ContextPaneWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidget::enabledChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (ContextPaneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidget::closed)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QmlEditorWidgets::ContextPaneWidget::staticMetaObject = {
    { &DragWidget::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidget.data,
      qt_meta_data_QmlEditorWidgets__ContextPaneWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::ContextPaneWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::ContextPaneWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidget.stringdata0))
        return static_cast<void*>(const_cast< ContextPaneWidget*>(this));
    return DragWidget::qt_metacast(_clname);
}

int QmlEditorWidgets::ContextPaneWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DragWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QmlEditorWidgets::ContextPaneWidget::propertyChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlEditorWidgets::ContextPaneWidget::removeProperty(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlEditorWidgets::ContextPaneWidget::removeAndChangeProperty(const QString & _t1, const QString & _t2, const QVariant & _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmlEditorWidgets::ContextPaneWidget::pinnedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmlEditorWidgets::ContextPaneWidget::enabledChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QmlEditorWidgets::ContextPaneWidget::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
