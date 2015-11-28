/****************************************************************************
** Meta object code from reading C++ file 'navigatorview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/navigator/navigatorview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigatorview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__NavigatorView_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__NavigatorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__NavigatorView_t qt_meta_stringdata_QmlDesigner__NavigatorView = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QmlDesigner::NavigatorView"
QT_MOC_LITERAL(1, 27, 15), // "changeSelection"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 59, 8), // "selected"
QT_MOC_LITERAL(5, 68, 10), // "deselected"
QT_MOC_LITERAL(6, 79, 19), // "updateItemSelection"
QT_MOC_LITERAL(7, 99, 17), // "changeToComponent"
QT_MOC_LITERAL(8, 117, 5), // "index"
QT_MOC_LITERAL(9, 123, 17), // "leftButtonClicked"
QT_MOC_LITERAL(10, 141, 18), // "rightButtonClicked"
QT_MOC_LITERAL(11, 160, 15), // "upButtonClicked"
QT_MOC_LITERAL(12, 176, 17) // "downButtonClicked"

    },
    "QmlDesigner::NavigatorView\0changeSelection\0"
    "\0QItemSelection\0selected\0deselected\0"
    "updateItemSelection\0changeToComponent\0"
    "index\0leftButtonClicked\0rightButtonClicked\0"
    "upButtonClicked\0downButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__NavigatorView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::NavigatorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavigatorView *_t = static_cast<NavigatorView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeSelection((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->updateItemSelection(); break;
        case 2: _t->changeToComponent((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->leftButtonClicked(); break;
        case 4: _t->rightButtonClicked(); break;
        case 5: _t->upButtonClicked(); break;
        case 6: _t->downButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::NavigatorView::staticMetaObject = {
    { &AbstractView::staticMetaObject, qt_meta_stringdata_QmlDesigner__NavigatorView.data,
      qt_meta_data_QmlDesigner__NavigatorView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::NavigatorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::NavigatorView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__NavigatorView.stringdata0))
        return static_cast<void*>(const_cast< NavigatorView*>(this));
    return AbstractView::qt_metacast(_clname);
}

int QmlDesigner::NavigatorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
