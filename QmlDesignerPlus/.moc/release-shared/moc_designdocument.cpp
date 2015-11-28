/****************************************************************************
** Meta object code from reading C++ file 'designdocument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/integration/designdocument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'designdocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__DesignDocument_t {
    QByteArrayData data[28];
    char stringdata0[384];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__DesignDocument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__DesignDocument_t qt_meta_stringdata_QmlDesigner__DesignDocument = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QmlDesigner::DesignDocument"
QT_MOC_LITERAL(1, 28, 18), // "displayNameChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "newFileName"
QT_MOC_LITERAL(4, 60, 17), // "dirtyStateChanged"
QT_MOC_LITERAL(5, 78, 8), // "newState"
QT_MOC_LITERAL(6, 87, 13), // "undoAvailable"
QT_MOC_LITERAL(7, 101, 11), // "isAvailable"
QT_MOC_LITERAL(8, 113, 13), // "redoAvailable"
QT_MOC_LITERAL(9, 127, 20), // "designDocumentClosed"
QT_MOC_LITERAL(10, 148, 16), // "qmlErrorsChanged"
QT_MOC_LITERAL(11, 165, 20), // "QList<RewriterError>"
QT_MOC_LITERAL(12, 186, 6), // "errors"
QT_MOC_LITERAL(13, 193, 14), // "deleteSelected"
QT_MOC_LITERAL(14, 208, 12), // "copySelected"
QT_MOC_LITERAL(15, 221, 11), // "cutSelected"
QT_MOC_LITERAL(16, 233, 5), // "paste"
QT_MOC_LITERAL(17, 239, 9), // "selectAll"
QT_MOC_LITERAL(18, 249, 4), // "undo"
QT_MOC_LITERAL(19, 254, 4), // "redo"
QT_MOC_LITERAL(20, 259, 21), // "updateActiveQtVersion"
QT_MOC_LITERAL(21, 281, 20), // "changeToSubComponent"
QT_MOC_LITERAL(22, 302, 9), // "ModelNode"
QT_MOC_LITERAL(23, 312, 13), // "componentNode"
QT_MOC_LITERAL(24, 326, 14), // "changeToMaster"
QT_MOC_LITERAL(25, 341, 14), // "updateFileName"
QT_MOC_LITERAL(26, 356, 15), // "Utils::FileName"
QT_MOC_LITERAL(27, 372, 11) // "oldFileName"

    },
    "QmlDesigner::DesignDocument\0"
    "displayNameChanged\0\0newFileName\0"
    "dirtyStateChanged\0newState\0undoAvailable\0"
    "isAvailable\0redoAvailable\0"
    "designDocumentClosed\0qmlErrorsChanged\0"
    "QList<RewriterError>\0errors\0deleteSelected\0"
    "copySelected\0cutSelected\0paste\0selectAll\0"
    "undo\0redo\0updateActiveQtVersion\0"
    "changeToSubComponent\0ModelNode\0"
    "componentNode\0changeToMaster\0"
    "updateFileName\0Utils::FileName\0"
    "oldFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__DesignDocument[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       8,    1,  108,    2, 0x06 /* Public */,
       9,    0,  111,    2, 0x06 /* Public */,
      10,    1,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  115,    2, 0x0a /* Public */,
      14,    0,  116,    2, 0x0a /* Public */,
      15,    0,  117,    2, 0x0a /* Public */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x0a /* Public */,
      19,    0,  121,    2, 0x0a /* Public */,
      20,    0,  122,    2, 0x0a /* Public */,
      21,    1,  123,    2, 0x0a /* Public */,
      24,    0,  126,    2, 0x0a /* Public */,
      25,    2,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 26,   27,    3,

       0        // eod
};

void QmlDesigner::DesignDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DesignDocument *_t = static_cast<DesignDocument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->dirtyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->designDocumentClosed(); break;
        case 5: _t->qmlErrorsChanged((*reinterpret_cast< const QList<RewriterError>(*)>(_a[1]))); break;
        case 6: _t->deleteSelected(); break;
        case 7: _t->copySelected(); break;
        case 8: _t->cutSelected(); break;
        case 9: _t->paste(); break;
        case 10: _t->selectAll(); break;
        case 11: _t->undo(); break;
        case 12: _t->redo(); break;
        case 13: _t->updateActiveQtVersion(); break;
        case 14: _t->changeToSubComponent((*reinterpret_cast< const ModelNode(*)>(_a[1]))); break;
        case 15: _t->changeToMaster(); break;
        case 16: _t->updateFileName((*reinterpret_cast< const Utils::FileName(*)>(_a[1])),(*reinterpret_cast< const Utils::FileName(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Utils::FileName >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DesignDocument::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DesignDocument::displayNameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (DesignDocument::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DesignDocument::dirtyStateChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (DesignDocument::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DesignDocument::undoAvailable)) {
                *result = 2;
            }
        }
        {
            typedef void (DesignDocument::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DesignDocument::redoAvailable)) {
                *result = 3;
            }
        }
        {
            typedef void (DesignDocument::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DesignDocument::designDocumentClosed)) {
                *result = 4;
            }
        }
        {
            typedef void (DesignDocument::*_t)(const QList<RewriterError> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DesignDocument::qmlErrorsChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QmlDesigner::DesignDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__DesignDocument.data,
      qt_meta_data_QmlDesigner__DesignDocument,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::DesignDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::DesignDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__DesignDocument.stringdata0))
        return static_cast<void*>(const_cast< DesignDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::DesignDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QmlDesigner::DesignDocument::displayNameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlDesigner::DesignDocument::dirtyStateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlDesigner::DesignDocument::undoAvailable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmlDesigner::DesignDocument::redoAvailable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmlDesigner::DesignDocument::designDocumentClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QmlDesigner::DesignDocument::qmlErrorsChanged(const QList<RewriterError> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
