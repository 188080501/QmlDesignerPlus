/****************************************************************************
** Meta object code from reading C++ file 'dynamicpropertiesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmldesignerextension/connectioneditor/dynamicpropertiesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dynamicpropertiesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesModel_t {
    QByteArrayData data[6];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesModel_t qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesModel = {
    {
QT_MOC_LITERAL(0, 0, 45), // "QmlDesigner::Internal::Dynami..."
QT_MOC_LITERAL(1, 46, 17), // "handleDataChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 7), // "topLeft"
QT_MOC_LITERAL(4, 73, 11), // "bottomRight"
QT_MOC_LITERAL(5, 85, 15) // "handleException"

    },
    "QmlDesigner::Internal::DynamicPropertiesModel\0"
    "handleDataChanged\0\0topLeft\0bottomRight\0"
    "handleException"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__DynamicPropertiesModel[] = {

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
       1,    2,   24,    2, 0x08 /* Private */,
       5,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::Internal::DynamicPropertiesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DynamicPropertiesModel *_t = static_cast<DynamicPropertiesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->handleException(); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::Internal::DynamicPropertiesModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesModel.data,
      qt_meta_data_QmlDesigner__Internal__DynamicPropertiesModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::DynamicPropertiesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::DynamicPropertiesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesModel.stringdata0))
        return static_cast<void*>(const_cast< DynamicPropertiesModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int QmlDesigner::Internal::DynamicPropertiesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesDelegate_t {
    QByteArrayData data[4];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesDelegate_t qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesDelegate = {
    {
QT_MOC_LITERAL(0, 0, 48), // "QmlDesigner::Internal::Dynami..."
QT_MOC_LITERAL(1, 49, 14), // "emitCommitData"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 4) // "text"

    },
    "QmlDesigner::Internal::DynamicPropertiesDelegate\0"
    "emitCommitData\0\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__DynamicPropertiesDelegate[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QmlDesigner::Internal::DynamicPropertiesDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DynamicPropertiesDelegate *_t = static_cast<DynamicPropertiesDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitCommitData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::Internal::DynamicPropertiesDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesDelegate.data,
      qt_meta_data_QmlDesigner__Internal__DynamicPropertiesDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::DynamicPropertiesDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::DynamicPropertiesDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesDelegate.stringdata0))
        return static_cast<void*>(const_cast< DynamicPropertiesDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QmlDesigner::Internal::DynamicPropertiesDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesComboBox_t {
    QByteArrayData data[2];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesComboBox_t qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesComboBox = {
    {
QT_MOC_LITERAL(0, 0, 48), // "QmlDesigner::Internal::Dynami..."
QT_MOC_LITERAL(1, 49, 4) // "text"

    },
    "QmlDesigner::Internal::DynamicPropertiesComboBox\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__DynamicPropertiesComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00195103,

       0        // eod
};

void QmlDesigner::Internal::DynamicPropertiesComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        DynamicPropertiesComboBox *_t = static_cast<DynamicPropertiesComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DynamicPropertiesComboBox *_t = static_cast<DynamicPropertiesComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmlDesigner::Internal::DynamicPropertiesComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesComboBox.data,
      qt_meta_data_QmlDesigner__Internal__DynamicPropertiesComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::DynamicPropertiesComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::DynamicPropertiesComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__DynamicPropertiesComboBox.stringdata0))
        return static_cast<void*>(const_cast< DynamicPropertiesComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int QmlDesigner::Internal::DynamicPropertiesComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
