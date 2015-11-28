/****************************************************************************
** Meta object code from reading C++ file 'designmodewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designmodewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'designmodewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__Internal__DocumentWarningWidget_t {
    QByteArrayData data[3];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__DocumentWarningWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__DocumentWarningWidget_t qt_meta_stringdata_QmlDesigner__Internal__DocumentWarningWidget = {
    {
QT_MOC_LITERAL(0, 0, 44), // "QmlDesigner::Internal::Docume..."
QT_MOC_LITERAL(1, 45, 9), // "goToError"
QT_MOC_LITERAL(2, 55, 0) // ""

    },
    "QmlDesigner::Internal::DocumentWarningWidget\0"
    "goToError\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__DocumentWarningWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::Internal::DocumentWarningWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DocumentWarningWidget *_t = static_cast<DocumentWarningWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goToError(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmlDesigner::Internal::DocumentWarningWidget::staticMetaObject = {
    { &Utils::FakeToolTip::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__DocumentWarningWidget.data,
      qt_meta_data_QmlDesigner__Internal__DocumentWarningWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::DocumentWarningWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::DocumentWarningWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__DocumentWarningWidget.stringdata0))
        return static_cast<void*>(const_cast< DocumentWarningWidget*>(this));
    return Utils::FakeToolTip::qt_metacast(_clname);
}

int QmlDesigner::Internal::DocumentWarningWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Utils::FakeToolTip::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QmlDesigner__Internal__DesignModeWidget_t {
    QByteArrayData data[15];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__DesignModeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__DesignModeWidget_t qt_meta_stringdata_QmlDesigner__Internal__DesignModeWidget = {
    {
QT_MOC_LITERAL(0, 0, 39), // "QmlDesigner::Internal::Design..."
QT_MOC_LITERAL(1, 40, 17), // "updateErrorStatus"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 20), // "QList<RewriterError>"
QT_MOC_LITERAL(4, 80, 6), // "errors"
QT_MOC_LITERAL(5, 87, 18), // "restoreDefaultView"
QT_MOC_LITERAL(6, 106, 14), // "toggleSidebars"
QT_MOC_LITERAL(7, 121, 17), // "toggleLeftSidebar"
QT_MOC_LITERAL(8, 139, 18), // "toggleRightSidebar"
QT_MOC_LITERAL(9, 158, 31), // "updateAvailableSidebarItemsLeft"
QT_MOC_LITERAL(10, 190, 32), // "updateAvailableSidebarItemsRight"
QT_MOC_LITERAL(11, 223, 20), // "deleteSidebarWidgets"
QT_MOC_LITERAL(12, 244, 25), // "showQmlPuppetCrashedError"
QT_MOC_LITERAL(13, 270, 22), // "toolBarOnGoBackClicked"
QT_MOC_LITERAL(14, 293, 25) // "toolBarOnGoForwardClicked"

    },
    "QmlDesigner::Internal::DesignModeWidget\0"
    "updateErrorStatus\0\0QList<RewriterError>\0"
    "errors\0restoreDefaultView\0toggleSidebars\0"
    "toggleLeftSidebar\0toggleRightSidebar\0"
    "updateAvailableSidebarItemsLeft\0"
    "updateAvailableSidebarItemsRight\0"
    "deleteSidebarWidgets\0showQmlPuppetCrashedError\0"
    "toolBarOnGoBackClicked\0toolBarOnGoForwardClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__DesignModeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::Internal::DesignModeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DesignModeWidget *_t = static_cast<DesignModeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateErrorStatus((*reinterpret_cast< const QList<RewriterError>(*)>(_a[1]))); break;
        case 1: _t->restoreDefaultView(); break;
        case 2: _t->toggleSidebars(); break;
        case 3: _t->toggleLeftSidebar(); break;
        case 4: _t->toggleRightSidebar(); break;
        case 5: _t->updateAvailableSidebarItemsLeft(); break;
        case 6: _t->updateAvailableSidebarItemsRight(); break;
        case 7: _t->deleteSidebarWidgets(); break;
        case 8: _t->showQmlPuppetCrashedError(); break;
        case 9: _t->toolBarOnGoBackClicked(); break;
        case 10: _t->toolBarOnGoForwardClicked(); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::Internal::DesignModeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__DesignModeWidget.data,
      qt_meta_data_QmlDesigner__Internal__DesignModeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::DesignModeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::DesignModeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__DesignModeWidget.stringdata0))
        return static_cast<void*>(const_cast< DesignModeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlDesigner::Internal::DesignModeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
