/****************************************************************************
** Meta object code from reading C++ file 'abstractview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../designercore/include/abstractview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__AbstractView_t {
    QByteArrayData data[6];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__AbstractView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__AbstractView_t qt_meta_stringdata_QmlDesigner__AbstractView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QmlDesigner::AbstractView"
QT_MOC_LITERAL(1, 26, 18), // "PropertyChangeFlag"
QT_MOC_LITERAL(2, 45, 19), // "NoAdditionalChanges"
QT_MOC_LITERAL(3, 65, 15), // "PropertiesAdded"
QT_MOC_LITERAL(4, 81, 22), // "EmptyPropertiesRemoved"
QT_MOC_LITERAL(5, 104, 19) // "PropertyChangeFlags"

    },
    "QmlDesigner::AbstractView\0PropertyChangeFlag\0"
    "NoAdditionalChanges\0PropertiesAdded\0"
    "EmptyPropertiesRemoved\0PropertyChangeFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__AbstractView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x1,    3,   22,
       5, 0x1,    3,   28,

 // enum data: key, value
       2, uint(QmlDesigner::AbstractView::NoAdditionalChanges),
       3, uint(QmlDesigner::AbstractView::PropertiesAdded),
       4, uint(QmlDesigner::AbstractView::EmptyPropertiesRemoved),
       2, uint(QmlDesigner::AbstractView::NoAdditionalChanges),
       3, uint(QmlDesigner::AbstractView::PropertiesAdded),
       4, uint(QmlDesigner::AbstractView::EmptyPropertiesRemoved),

       0        // eod
};

void QmlDesigner::AbstractView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmlDesigner::AbstractView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__AbstractView.data,
      qt_meta_data_QmlDesigner__AbstractView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::AbstractView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::AbstractView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__AbstractView.stringdata0))
        return static_cast<void*>(const_cast< AbstractView*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::AbstractView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
