/****************************************************************************
** Meta object code from reading C++ file 'importmanagerview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/importmanager/importmanagerview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importmanagerview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__ImportManagerView_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__ImportManagerView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__ImportManagerView_t qt_meta_stringdata_QmlDesigner__ImportManagerView = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QmlDesigner::ImportManagerView"
QT_MOC_LITERAL(1, 31, 12), // "removeImport"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "Import"
QT_MOC_LITERAL(4, 52, 6), // "import"
QT_MOC_LITERAL(5, 59, 9) // "addImport"

    },
    "QmlDesigner::ImportManagerView\0"
    "removeImport\0\0Import\0import\0addImport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__ImportManagerView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QmlDesigner::ImportManagerView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImportManagerView *_t = static_cast<ImportManagerView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeImport((*reinterpret_cast< const Import(*)>(_a[1]))); break;
        case 1: _t->addImport((*reinterpret_cast< const Import(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::ImportManagerView::staticMetaObject = {
    { &AbstractView::staticMetaObject, qt_meta_stringdata_QmlDesigner__ImportManagerView.data,
      qt_meta_data_QmlDesigner__ImportManagerView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::ImportManagerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::ImportManagerView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__ImportManagerView.stringdata0))
        return static_cast<void*>(const_cast< ImportManagerView*>(this));
    return AbstractView::qt_metacast(_clname);
}

int QmlDesigner::ImportManagerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
