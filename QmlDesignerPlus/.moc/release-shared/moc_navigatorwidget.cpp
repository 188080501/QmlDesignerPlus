/****************************************************************************
** Meta object code from reading C++ file 'navigatorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/navigator/navigatorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigatorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__NavigatorWidget_t {
    QByteArrayData data[6];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__NavigatorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__NavigatorWidget_t qt_meta_stringdata_QmlDesigner__NavigatorWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmlDesigner::NavigatorWidget"
QT_MOC_LITERAL(1, 29, 17), // "leftButtonClicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 18), // "rightButtonClicked"
QT_MOC_LITERAL(4, 67, 15), // "upButtonClicked"
QT_MOC_LITERAL(5, 83, 17) // "downButtonClicked"

    },
    "QmlDesigner::NavigatorWidget\0"
    "leftButtonClicked\0\0rightButtonClicked\0"
    "upButtonClicked\0downButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__NavigatorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::NavigatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavigatorWidget *_t = static_cast<NavigatorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->leftButtonClicked(); break;
        case 1: _t->rightButtonClicked(); break;
        case 2: _t->upButtonClicked(); break;
        case 3: _t->downButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NavigatorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigatorWidget::leftButtonClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (NavigatorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigatorWidget::rightButtonClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (NavigatorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigatorWidget::upButtonClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (NavigatorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigatorWidget::downButtonClicked)) {
                *result = 3;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmlDesigner::NavigatorWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QmlDesigner__NavigatorWidget.data,
      qt_meta_data_QmlDesigner__NavigatorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::NavigatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::NavigatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__NavigatorWidget.stringdata0))
        return static_cast<void*>(const_cast< NavigatorWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int QmlDesigner::NavigatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QmlDesigner::NavigatorWidget::leftButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlDesigner::NavigatorWidget::rightButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmlDesigner::NavigatorWidget::upButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QmlDesigner::NavigatorWidget::downButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
