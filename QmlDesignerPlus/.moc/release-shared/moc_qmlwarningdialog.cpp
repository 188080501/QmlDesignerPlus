/****************************************************************************
** Meta object code from reading C++ file 'qmlwarningdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designercore/filemanager/qmlwarningdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlwarningdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__Internal__QmlWarningDialog_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__QmlWarningDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__QmlWarningDialog_t qt_meta_stringdata_QmlDesigner__Internal__QmlWarningDialog = {
    {
QT_MOC_LITERAL(0, 0, 39), // "QmlDesigner::Internal::QmlWar..."
QT_MOC_LITERAL(1, 40, 19), // "ignoreButtonPressed"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 15), // "okButtonPressed"
QT_MOC_LITERAL(4, 77, 15), // "checkBoxToggled"
QT_MOC_LITERAL(5, 93, 11), // "linkClicked"
QT_MOC_LITERAL(6, 105, 4) // "link"

    },
    "QmlDesigner::Internal::QmlWarningDialog\0"
    "ignoreButtonPressed\0\0okButtonPressed\0"
    "checkBoxToggled\0linkClicked\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__QmlWarningDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       5,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void QmlDesigner::Internal::QmlWarningDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlWarningDialog *_t = static_cast<QmlWarningDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ignoreButtonPressed(); break;
        case 1: _t->okButtonPressed(); break;
        case 2: _t->checkBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->linkClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::Internal::QmlWarningDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__QmlWarningDialog.data,
      qt_meta_data_QmlDesigner__Internal__QmlWarningDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::QmlWarningDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::QmlWarningDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__QmlWarningDialog.stringdata0))
        return static_cast<void*>(const_cast< QmlWarningDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QmlDesigner::Internal::QmlWarningDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
