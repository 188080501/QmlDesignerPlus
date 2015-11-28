/****************************************************************************
** Meta object code from reading C++ file 'gradientmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/propertyeditor/gradientmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradientmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GradientModel_t {
    QByteArrayData data[22];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientModel_t qt_meta_stringdata_GradientModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GradientModel"
QT_MOC_LITERAL(1, 14, 20), // "anchorBackendChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "hasGradientChanged"
QT_MOC_LITERAL(4, 55, 7), // "addStop"
QT_MOC_LITERAL(5, 63, 8), // "position"
QT_MOC_LITERAL(6, 72, 5), // "color"
QT_MOC_LITERAL(7, 78, 11), // "addGradient"
QT_MOC_LITERAL(8, 90, 8), // "setColor"
QT_MOC_LITERAL(9, 99, 5), // "index"
QT_MOC_LITERAL(10, 105, 11), // "setPosition"
QT_MOC_LITERAL(11, 117, 10), // "positition"
QT_MOC_LITERAL(12, 128, 8), // "getColor"
QT_MOC_LITERAL(13, 137, 11), // "getPosition"
QT_MOC_LITERAL(14, 149, 10), // "removeStop"
QT_MOC_LITERAL(15, 160, 14), // "deleteGradient"
QT_MOC_LITERAL(16, 175, 4), // "lock"
QT_MOC_LITERAL(17, 180, 6), // "unlock"
QT_MOC_LITERAL(18, 187, 21), // "anchorBackendProperty"
QT_MOC_LITERAL(19, 209, 20), // "gradientPropertyName"
QT_MOC_LITERAL(20, 230, 5), // "count"
QT_MOC_LITERAL(21, 236, 11) // "hasGradient"

    },
    "GradientModel\0anchorBackendChanged\0\0"
    "hasGradientChanged\0addStop\0position\0"
    "color\0addGradient\0setColor\0index\0"
    "setPosition\0positition\0getColor\0"
    "getPosition\0removeStop\0deleteGradient\0"
    "lock\0unlock\0anchorBackendProperty\0"
    "gradientPropertyName\0count\0hasGradient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       4,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    2,   76,    2, 0x02 /* Public */,
       7,    0,   81,    2, 0x02 /* Public */,
       8,    2,   82,    2, 0x02 /* Public */,
      10,    2,   87,    2, 0x02 /* Public */,
      12,    1,   92,    2, 0x02 /* Public */,
      13,    1,   95,    2, 0x02 /* Public */,
      14,    1,   98,    2, 0x02 /* Public */,
      15,    0,  101,    2, 0x02 /* Public */,
      16,    0,  102,    2, 0x02 /* Public */,
      17,    0,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, QMetaType::QReal, QMetaType::QColor,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QColor,    9,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal,    9,   11,
    QMetaType::QColor, QMetaType::Int,    9,
    QMetaType::QReal, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::QVariant, 0x00495003,
      19, QMetaType::QString, 0x00095103,
      20, QMetaType::Int, 0x00095001,
      21, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,

       0        // eod
};

void GradientModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientModel *_t = static_cast<GradientModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->anchorBackendChanged(); break;
        case 1: _t->hasGradientChanged(); break;
        case 2: { int _r = _t->addStop((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->addGradient(); break;
        case 4: _t->setColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 5: _t->setPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 6: { QColor _r = _t->getColor((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->getPosition((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: _t->removeStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->deleteGradient(); break;
        case 10: _t->lock(); break;
        case 11: _t->unlock(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GradientModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientModel::anchorBackendChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GradientModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GradientModel::hasGradientChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GradientModel *_t = static_cast<GradientModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->anchorBackend(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->gradientPropertyName(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasGradient(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GradientModel *_t = static_cast<GradientModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnchorBackend(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setGradientPropertyName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GradientModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_GradientModel.data,
      qt_meta_data_GradientModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GradientModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GradientModel.stringdata0))
        return static_cast<void*>(const_cast< GradientModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int GradientModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GradientModel::anchorBackendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void GradientModel::hasGradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
