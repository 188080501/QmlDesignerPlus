/****************************************************************************
** Meta object code from reading C++ file 'propertyeditorvalue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/propertyeditor/propertyeditorvalue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertyeditorvalue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PropertyEditorNodeWrapper_t {
    QByteArrayData data[14];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyEditorNodeWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyEditorNodeWrapper_t qt_meta_stringdata_PropertyEditorNodeWrapper = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PropertyEditorNodeWrapper"
QT_MOC_LITERAL(1, 26, 13), // "existsChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "propertiesChanged"
QT_MOC_LITERAL(4, 59, 11), // "typeChanged"
QT_MOC_LITERAL(5, 71, 3), // "add"
QT_MOC_LITERAL(6, 75, 4), // "type"
QT_MOC_LITERAL(7, 80, 6), // "remove"
QT_MOC_LITERAL(8, 87, 11), // "changeValue"
QT_MOC_LITERAL(9, 99, 12), // "propertyName"
QT_MOC_LITERAL(10, 112, 6), // "update"
QT_MOC_LITERAL(11, 119, 6), // "exists"
QT_MOC_LITERAL(12, 126, 10), // "properties"
QT_MOC_LITERAL(13, 137, 16) // "QQmlPropertyMap*"

    },
    "PropertyEditorNodeWrapper\0existsChanged\0"
    "\0propertiesChanged\0typeChanged\0add\0"
    "type\0remove\0changeValue\0propertyName\0"
    "update\0exists\0properties\0QQmlPropertyMap*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyEditorNodeWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       5,    0,   60,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495001,
      12, 0x80000000 | 13, 0x00495009,
       6, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void PropertyEditorNodeWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyEditorNodeWrapper *_t = static_cast<PropertyEditorNodeWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->existsChanged(); break;
        case 1: _t->propertiesChanged(); break;
        case 2: _t->typeChanged(); break;
        case 3: _t->add((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->add(); break;
        case 5: _t->remove(); break;
        case 6: _t->changeValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PropertyEditorNodeWrapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorNodeWrapper::existsChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PropertyEditorNodeWrapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorNodeWrapper::propertiesChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (PropertyEditorNodeWrapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorNodeWrapper::typeChanged)) {
                *result = 2;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlPropertyMap* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PropertyEditorNodeWrapper *_t = static_cast<PropertyEditorNodeWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->exists(); break;
        case 1: *reinterpret_cast< QQmlPropertyMap**>(_v) = _t->properties(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->type(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PropertyEditorNodeWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PropertyEditorNodeWrapper.data,
      qt_meta_data_PropertyEditorNodeWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropertyEditorNodeWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyEditorNodeWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEditorNodeWrapper.stringdata0))
        return static_cast<void*>(const_cast< PropertyEditorNodeWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int PropertyEditorNodeWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PropertyEditorNodeWrapper::existsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PropertyEditorNodeWrapper::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PropertyEditorNodeWrapper::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_PropertyEditorValue_t {
    QByteArrayData data[25];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyEditorValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyEditorValue_t qt_meta_stringdata_PropertyEditorValue = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PropertyEditorValue"
QT_MOC_LITERAL(1, 20, 12), // "valueChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "name"
QT_MOC_LITERAL(4, 39, 15), // "valueChangedQml"
QT_MOC_LITERAL(5, 55, 17), // "expressionChanged"
QT_MOC_LITERAL(6, 73, 17), // "modelStateChanged"
QT_MOC_LITERAL(7, 91, 16), // "modelNodeChanged"
QT_MOC_LITERAL(8, 108, 18), // "complexNodeChanged"
QT_MOC_LITERAL(9, 127, 14), // "isBoundChanged"
QT_MOC_LITERAL(10, 142, 14), // "isValidChanged"
QT_MOC_LITERAL(11, 157, 10), // "resetValue"
QT_MOC_LITERAL(12, 168, 14), // "setEnumeration"
QT_MOC_LITERAL(13, 183, 5), // "scope"
QT_MOC_LITERAL(14, 189, 5), // "value"
QT_MOC_LITERAL(15, 195, 11), // "enumeration"
QT_MOC_LITERAL(16, 207, 10), // "expression"
QT_MOC_LITERAL(17, 218, 13), // "valueToString"
QT_MOC_LITERAL(18, 232, 9), // "isInModel"
QT_MOC_LITERAL(19, 242, 12), // "isInSubState"
QT_MOC_LITERAL(20, 255, 7), // "isBound"
QT_MOC_LITERAL(21, 263, 7), // "isValid"
QT_MOC_LITERAL(22, 271, 12), // "isTranslated"
QT_MOC_LITERAL(23, 284, 11), // "complexNode"
QT_MOC_LITERAL(24, 296, 26) // "PropertyEditorNodeWrapper*"

    },
    "PropertyEditorValue\0valueChanged\0\0"
    "name\0valueChangedQml\0expressionChanged\0"
    "modelStateChanged\0modelNodeChanged\0"
    "complexNodeChanged\0isBoundChanged\0"
    "isValidChanged\0resetValue\0setEnumeration\0"
    "scope\0value\0enumeration\0expression\0"
    "valueToString\0isInModel\0isInSubState\0"
    "isBound\0isValid\0isTranslated\0complexNode\0"
    "PropertyEditorNodeWrapper*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyEditorValue[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      11,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       4,    0,   69,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,
      10,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   78,    2, 0x0a /* Public */,
      12,    2,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,    3,

 // properties: name, type, flags
      14, QMetaType::QVariant, 0x00495003,
      15, QMetaType::QVariant, 0x00495001,
      16, QMetaType::QString, 0x00495803,
      17, QMetaType::QString, 0x00495801,
      18, QMetaType::Bool, 0x00495801,
      19, QMetaType::Bool, 0x00495801,
      20, QMetaType::Bool, 0x00495801,
      21, QMetaType::Bool, 0x00495801,
      22, QMetaType::Bool, 0x00495801,
       3, QMetaType::QString, 0x00095801,
      23, 0x80000000 | 24, 0x00495809,

 // properties: notify_signal_id
       1,
       1,
       2,
       1,
       1,
       1,
       6,
       7,
       2,
       0,
       5,

       0        // eod
};

void PropertyEditorValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyEditorValue *_t = static_cast<PropertyEditorValue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->valueChangedQml(); break;
        case 2: _t->expressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->modelStateChanged(); break;
        case 4: _t->modelNodeChanged(); break;
        case 5: _t->complexNodeChanged(); break;
        case 6: _t->isBoundChanged(); break;
        case 7: _t->isValidChanged(); break;
        case 8: _t->resetValue(); break;
        case 9: _t->setEnumeration((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PropertyEditorValue::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorValue::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PropertyEditorValue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorValue::valueChangedQml)) {
                *result = 1;
            }
        }
        {
            typedef void (PropertyEditorValue::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorValue::expressionChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (PropertyEditorValue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorValue::modelStateChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (PropertyEditorValue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorValue::modelNodeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (PropertyEditorValue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorValue::complexNodeChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (PropertyEditorValue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorValue::isBoundChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (PropertyEditorValue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyEditorValue::isValidChanged)) {
                *result = 7;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyEditorNodeWrapper* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PropertyEditorValue *_t = static_cast<PropertyEditorValue *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->enumeration(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->expression(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->valueToString(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isInModel(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isInSubState(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isBound(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isTranslated(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 10: *reinterpret_cast< PropertyEditorNodeWrapper**>(_v) = _t->complexNode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PropertyEditorValue *_t = static_cast<PropertyEditorValue *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValueWithEmit(*reinterpret_cast< QVariant*>(_v)); break;
        case 2: _t->setExpressionWithEmit(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PropertyEditorValue::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PropertyEditorValue.data,
      qt_meta_data_PropertyEditorValue,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropertyEditorValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyEditorValue::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEditorValue.stringdata0))
        return static_cast<void*>(const_cast< PropertyEditorValue*>(this));
    return QObject::qt_metacast(_clname);
}

int PropertyEditorValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PropertyEditorValue::valueChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropertyEditorValue::valueChangedQml()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PropertyEditorValue::expressionChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PropertyEditorValue::modelStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void PropertyEditorValue::modelNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void PropertyEditorValue::complexNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void PropertyEditorValue::isBoundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void PropertyEditorValue::isValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
