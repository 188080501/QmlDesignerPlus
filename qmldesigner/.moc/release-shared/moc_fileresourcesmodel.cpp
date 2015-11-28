/****************************************************************************
** Meta object code from reading C++ file 'fileresourcesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/propertyeditor/fileresourcesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileresourcesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileResourcesModel_t {
    QByteArrayData data[11];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileResourcesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileResourcesModel_t qt_meta_stringdata_FileResourcesModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FileResourcesModel"
QT_MOC_LITERAL(1, 19, 15), // "fileNameChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "fileName"
QT_MOC_LITERAL(4, 45, 23), // "modelNodeBackendChanged"
QT_MOC_LITERAL(5, 69, 16), // "fileModelChanged"
QT_MOC_LITERAL(6, 86, 14), // "openFileDialog"
QT_MOC_LITERAL(7, 101, 6), // "filter"
QT_MOC_LITERAL(8, 108, 24), // "modelNodeBackendProperty"
QT_MOC_LITERAL(9, 133, 4), // "path"
QT_MOC_LITERAL(10, 138, 9) // "fileModel"

    },
    "FileResourcesModel\0fileNameChanged\0\0"
    "fileName\0modelNodeBackendChanged\0"
    "fileModelChanged\0openFileDialog\0filter\0"
    "modelNodeBackendProperty\0path\0fileModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileResourcesModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QVariant, 0x00495003,
       9, QMetaType::QUrl, 0x00095103,
      10, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,
       2,

       0        // eod
};

void FileResourcesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileResourcesModel *_t = static_cast<FileResourcesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->modelNodeBackendChanged(); break;
        case 2: _t->fileModelChanged(); break;
        case 3: _t->openFileDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileResourcesModel::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileResourcesModel::fileNameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FileResourcesModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileResourcesModel::modelNodeBackendChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (FileResourcesModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileResourcesModel::fileModelChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FileResourcesModel *_t = static_cast<FileResourcesModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->filter(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->modelNodeBackend(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->path(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->fileModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FileResourcesModel *_t = static_cast<FileResourcesModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileNameStr(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setModelNodeBackend(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setPath(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FileResourcesModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileResourcesModel.data,
      qt_meta_data_FileResourcesModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileResourcesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileResourcesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileResourcesModel.stringdata0))
        return static_cast<void*>(const_cast< FileResourcesModel*>(this));
    return QObject::qt_metacast(_clname);
}

int FileResourcesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileResourcesModel::fileNameChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileResourcesModel::modelNodeBackendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FileResourcesModel::fileModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
