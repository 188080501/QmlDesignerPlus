/****************************************************************************
** Meta object code from reading C++ file 'rewriterview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designercore/include/rewriterview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rewriterview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__RewriterView_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__RewriterView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__RewriterView_t qt_meta_stringdata_QmlDesigner__RewriterView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmlDesigner::RewriterView"
QT_MOC_LITERAL(1, 26, 13), // "errorsChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 20), // "QList<RewriterError>"
QT_MOC_LITERAL(4, 62, 6), // "errors"
QT_MOC_LITERAL(5, 69, 14), // "qmlTextChanged"
QT_MOC_LITERAL(6, 84, 12) // "delayedSetup"

    },
    "QmlDesigner::RewriterView\0errorsChanged\0"
    "\0QList<RewriterError>\0errors\0"
    "qmlTextChanged\0delayedSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__RewriterView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::RewriterView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RewriterView *_t = static_cast<RewriterView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorsChanged((*reinterpret_cast< const QList<RewriterError>(*)>(_a[1]))); break;
        case 1: _t->qmlTextChanged(); break;
        case 2: _t->delayedSetup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RewriterView::*_t)(const QList<RewriterError> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RewriterView::errorsChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QmlDesigner::RewriterView::staticMetaObject = {
    { &AbstractView::staticMetaObject, qt_meta_stringdata_QmlDesigner__RewriterView.data,
      qt_meta_data_QmlDesigner__RewriterView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::RewriterView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::RewriterView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__RewriterView.stringdata0))
        return static_cast<void*>(const_cast< RewriterView*>(this));
    return AbstractView::qt_metacast(_clname);
}

int QmlDesigner::RewriterView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QmlDesigner::RewriterView::errorsChanged(const QList<RewriterError> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
