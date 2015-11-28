/****************************************************************************
** Meta object code from reading C++ file 'connectionviewwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmldesignerextension/connectioneditor/connectionviewwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionviewwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__Internal__ConnectionViewWidget_t {
    QByteArrayData data[13];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__ConnectionViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__ConnectionViewWidget_t qt_meta_stringdata_QmlDesigner__Internal__ConnectionViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "QmlDesigner::Internal::Connec..."
QT_MOC_LITERAL(1, 44, 26), // "setEnabledAddButtonChanged"
QT_MOC_LITERAL(2, 71, 0), // ""
QT_MOC_LITERAL(3, 72, 29), // "setEnabledRemoveButtonChanged"
QT_MOC_LITERAL(4, 102, 32), // "bindingTableViewSelectionChanged"
QT_MOC_LITERAL(5, 135, 7), // "current"
QT_MOC_LITERAL(6, 143, 8), // "previous"
QT_MOC_LITERAL(7, 152, 35), // "connectionTableViewSelectionC..."
QT_MOC_LITERAL(8, 188, 42), // "dynamicPropertiesTableViewSel..."
QT_MOC_LITERAL(9, 231, 16), // "handleTabChanged"
QT_MOC_LITERAL(10, 248, 1), // "i"
QT_MOC_LITERAL(11, 250, 19), // "removeButtonClicked"
QT_MOC_LITERAL(12, 270, 16) // "addButtonClicked"

    },
    "QmlDesigner::Internal::ConnectionViewWidget\0"
    "setEnabledAddButtonChanged\0\0"
    "setEnabledRemoveButtonChanged\0"
    "bindingTableViewSelectionChanged\0"
    "current\0previous\0connectionTableViewSelectionChanged\0"
    "dynamicPropertiesTableViewSelectionChanged\0"
    "handleTabChanged\0i\0removeButtonClicked\0"
    "addButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__ConnectionViewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   60,    2, 0x0a /* Public */,
       7,    2,   65,    2, 0x0a /* Public */,
       8,    2,   70,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    5,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    5,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    5,    6,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::Internal::ConnectionViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectionViewWidget *_t = static_cast<ConnectionViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabledAddButtonChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setEnabledRemoveButtonChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->bindingTableViewSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->connectionTableViewSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->dynamicPropertiesTableViewSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->handleTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->removeButtonClicked(); break;
        case 7: _t->addButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConnectionViewWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionViewWidget::setEnabledAddButtonChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ConnectionViewWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionViewWidget::setEnabledRemoveButtonChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QmlDesigner::Internal::ConnectionViewWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__ConnectionViewWidget.data,
      qt_meta_data_QmlDesigner__Internal__ConnectionViewWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::ConnectionViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::ConnectionViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__ConnectionViewWidget.stringdata0))
        return static_cast<void*>(const_cast< ConnectionViewWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int QmlDesigner::Internal::ConnectionViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QmlDesigner::Internal::ConnectionViewWidget::setEnabledAddButtonChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlDesigner::Internal::ConnectionViewWidget::setEnabledRemoveButtonChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
