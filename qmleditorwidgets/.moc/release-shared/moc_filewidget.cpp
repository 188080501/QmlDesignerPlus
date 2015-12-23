/****************************************************************************
** Meta object code from reading C++ file 'filewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../filewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlEditorWidgets__FileWidget_t {
    QByteArrayData data[14];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__FileWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__FileWidget_t qt_meta_stringdata_QmlEditorWidgets__FileWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QmlEditorWidgets::FileWidget"
QT_MOC_LITERAL(1, 29, 15), // "fileNameChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "fileName"
QT_MOC_LITERAL(4, 55, 15), // "itemNodeChanged"
QT_MOC_LITERAL(5, 71, 11), // "setFileName"
QT_MOC_LITERAL(6, 83, 14), // "setFileNameStr"
QT_MOC_LITERAL(7, 98, 16), // "onButtonReleased"
QT_MOC_LITERAL(8, 115, 15), // "lineEditChanged"
QT_MOC_LITERAL(9, 131, 15), // "comboBoxChanged"
QT_MOC_LITERAL(10, 147, 4), // "text"
QT_MOC_LITERAL(11, 152, 6), // "filter"
QT_MOC_LITERAL(12, 159, 12), // "showComboBox"
QT_MOC_LITERAL(13, 172, 4) // "path"

    },
    "QmlEditorWidgets::FileWidget\0"
    "fileNameChanged\0\0fileName\0itemNodeChanged\0"
    "setFileName\0setFileNameStr\0onButtonReleased\0"
    "lineEditChanged\0comboBoxChanged\0text\0"
    "filter\0showComboBox\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__FileWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   53,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00095103,
       3, QMetaType::QString, 0x00495003,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::QUrl, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QmlEditorWidgets::FileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileWidget *_t = static_cast<FileWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->itemNodeChanged(); break;
        case 2: _t->setFileName((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->setFileNameStr((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onButtonReleased(); break;
        case 5: _t->lineEditChanged(); break;
        case 6: _t->comboBoxChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileWidget::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileWidget::fileNameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FileWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileWidget::itemNodeChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FileWidget *_t = static_cast<FileWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->filter(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->showComboBox(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->path(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FileWidget *_t = static_cast<FileWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFileNameStr(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setShowComboBox(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPath(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlEditorWidgets::FileWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__FileWidget.data,
      qt_meta_data_QmlEditorWidgets__FileWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::FileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::FileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__FileWidget.stringdata0))
        return static_cast<void*>(const_cast< FileWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlEditorWidgets::FileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void QmlEditorWidgets::FileWidget::fileNameChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlEditorWidgets::FileWidget::itemNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
