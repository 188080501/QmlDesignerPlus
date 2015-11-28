/****************************************************************************
** Meta object code from reading C++ file 'lineeditaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/formeditor/lineeditaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineeditaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__LineEditAction_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__LineEditAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__LineEditAction_t qt_meta_stringdata_QmlDesigner__LineEditAction = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QmlDesigner::LineEditAction"
QT_MOC_LITERAL(1, 28, 11), // "textChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "text"
QT_MOC_LITERAL(4, 46, 18), // "lineEditTextChange"
QT_MOC_LITERAL(5, 65, 17) // "lineEditTextClear"

    },
    "QmlDesigner::LineEditAction\0textChanged\0"
    "\0text\0lineEditTextChange\0lineEditTextClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__LineEditAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::LineEditAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LineEditAction *_t = static_cast<LineEditAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->lineEditTextChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->lineEditTextClear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LineEditAction::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineEditAction::textChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (LineEditAction::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineEditAction::lineEditTextChange)) {
                *result = 1;
            }
        }
        {
            typedef void (LineEditAction::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineEditAction::lineEditTextClear)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmlDesigner::LineEditAction::staticMetaObject = {
    { &QWidgetAction::staticMetaObject, qt_meta_stringdata_QmlDesigner__LineEditAction.data,
      qt_meta_data_QmlDesigner__LineEditAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::LineEditAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::LineEditAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__LineEditAction.stringdata0))
        return static_cast<void*>(const_cast< LineEditAction*>(this));
    return QWidgetAction::qt_metacast(_clname);
}

int QmlDesigner::LineEditAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
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
void QmlDesigner::LineEditAction::textChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlDesigner::LineEditAction::lineEditTextChange(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlDesigner::LineEditAction::lineEditTextClear()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
