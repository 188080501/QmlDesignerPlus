/****************************************************************************
** Meta object code from reading C++ file 'contextpanewidgetimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../contextpanewidgetimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contextpanewidgetimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlEditorWidgets__PreviewLabel_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__PreviewLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__PreviewLabel_t qt_meta_stringdata_QmlEditorWidgets__PreviewLabel = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QmlEditorWidgets::PreviewLabel"
QT_MOC_LITERAL(1, 31, 17), // "leftMarginChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "topMarginChanged"
QT_MOC_LITERAL(4, 67, 19), // "bottomMarginChanged"
QT_MOC_LITERAL(5, 87, 18) // "rightMarginChanged"

    },
    "QmlEditorWidgets::PreviewLabel\0"
    "leftMarginChanged\0\0topMarginChanged\0"
    "bottomMarginChanged\0rightMarginChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__PreviewLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlEditorWidgets::PreviewLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreviewLabel *_t = static_cast<PreviewLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->leftMarginChanged(); break;
        case 1: _t->topMarginChanged(); break;
        case 2: _t->bottomMarginChanged(); break;
        case 3: _t->rightMarginChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PreviewLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewLabel::leftMarginChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PreviewLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewLabel::topMarginChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (PreviewLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewLabel::bottomMarginChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (PreviewLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewLabel::rightMarginChanged)) {
                *result = 3;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmlEditorWidgets::PreviewLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__PreviewLabel.data,
      qt_meta_data_QmlEditorWidgets__PreviewLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::PreviewLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::PreviewLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__PreviewLabel.stringdata0))
        return static_cast<void*>(const_cast< PreviewLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int QmlEditorWidgets::PreviewLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QmlEditorWidgets::PreviewLabel::leftMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlEditorWidgets::PreviewLabel::topMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmlEditorWidgets::PreviewLabel::bottomMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QmlEditorWidgets::PreviewLabel::rightMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
struct qt_meta_stringdata_QmlEditorWidgets__PreviewDialog_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__PreviewDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__PreviewDialog_t qt_meta_stringdata_QmlEditorWidgets__PreviewDialog = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QmlEditorWidgets::PreviewDialog"
QT_MOC_LITERAL(1, 32, 12), // "onTogglePane"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "onSliderMoved"
QT_MOC_LITERAL(4, 60, 5) // "value"

    },
    "QmlEditorWidgets::PreviewDialog\0"
    "onTogglePane\0\0onSliderMoved\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__PreviewDialog[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void QmlEditorWidgets::PreviewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreviewDialog *_t = static_cast<PreviewDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTogglePane(); break;
        case 1: _t->onSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QmlEditorWidgets::PreviewDialog::staticMetaObject = {
    { &DragWidget::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__PreviewDialog.data,
      qt_meta_data_QmlEditorWidgets__PreviewDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::PreviewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::PreviewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__PreviewDialog.stringdata0))
        return static_cast<void*>(const_cast< PreviewDialog*>(this));
    return DragWidget::qt_metacast(_clname);
}

int QmlEditorWidgets::PreviewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DragWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidgetImage_t {
    QByteArrayData data[17];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidgetImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidgetImage_t qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidgetImage = {
    {
QT_MOC_LITERAL(0, 0, 40), // "QmlEditorWidgets::ContextPane..."
QT_MOC_LITERAL(1, 41, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 14), // "removeProperty"
QT_MOC_LITERAL(4, 73, 23), // "removeAndChangeProperty"
QT_MOC_LITERAL(5, 97, 11), // "removeFirst"
QT_MOC_LITERAL(6, 109, 16), // "onStretchChanged"
QT_MOC_LITERAL(7, 126, 24), // "onVerticalStretchChanged"
QT_MOC_LITERAL(8, 151, 26), // "onHorizontalStretchChanged"
QT_MOC_LITERAL(9, 178, 17), // "onFileNameChanged"
QT_MOC_LITERAL(10, 196, 21), // "onPixmapDoubleClicked"
QT_MOC_LITERAL(11, 218, 9), // "setPixmap"
QT_MOC_LITERAL(12, 228, 8), // "fileName"
QT_MOC_LITERAL(13, 237, 20), // "onLeftMarginsChanged"
QT_MOC_LITERAL(14, 258, 19), // "onTopMarginsChanged"
QT_MOC_LITERAL(15, 278, 22), // "onBottomMarginsChanged"
QT_MOC_LITERAL(16, 301, 21) // "onRightMarginsChanged"

    },
    "QmlEditorWidgets::ContextPaneWidgetImage\0"
    "propertyChanged\0\0removeProperty\0"
    "removeAndChangeProperty\0removeFirst\0"
    "onStretchChanged\0onVerticalStretchChanged\0"
    "onHorizontalStretchChanged\0onFileNameChanged\0"
    "onPixmapDoubleClicked\0setPixmap\0"
    "fileName\0onLeftMarginsChanged\0"
    "onTopMarginsChanged\0onBottomMarginsChanged\0"
    "onRightMarginsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__ContextPaneWidgetImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       3,    1,   84,    2, 0x06 /* Public */,
       4,    4,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   96,    2, 0x0a /* Public */,
       7,    0,   97,    2, 0x0a /* Public */,
       8,    0,   98,    2, 0x0a /* Public */,
       9,    0,   99,    2, 0x0a /* Public */,
      10,    0,  100,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x0a /* Public */,
      13,    0,  104,    2, 0x0a /* Public */,
      14,    0,  105,    2, 0x0a /* Public */,
      15,    0,  106,    2, 0x0a /* Public */,
      16,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,    2,    2,    2,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlEditorWidgets::ContextPaneWidgetImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContextPaneWidgetImage *_t = static_cast<ContextPaneWidgetImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->removeProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->removeAndChangeProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->onStretchChanged(); break;
        case 4: _t->onVerticalStretchChanged(); break;
        case 5: _t->onHorizontalStretchChanged(); break;
        case 6: _t->onFileNameChanged(); break;
        case 7: _t->onPixmapDoubleClicked(); break;
        case 8: _t->setPixmap((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onLeftMarginsChanged(); break;
        case 10: _t->onTopMarginsChanged(); break;
        case 11: _t->onBottomMarginsChanged(); break;
        case 12: _t->onRightMarginsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ContextPaneWidgetImage::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidgetImage::propertyChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ContextPaneWidgetImage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidgetImage::removeProperty)) {
                *result = 1;
            }
        }
        {
            typedef void (ContextPaneWidgetImage::*_t)(const QString & , const QString & , const QVariant & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContextPaneWidgetImage::removeAndChangeProperty)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QmlEditorWidgets::ContextPaneWidgetImage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidgetImage.data,
      qt_meta_data_QmlEditorWidgets__ContextPaneWidgetImage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::ContextPaneWidgetImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::ContextPaneWidgetImage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__ContextPaneWidgetImage.stringdata0))
        return static_cast<void*>(const_cast< ContextPaneWidgetImage*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlEditorWidgets::ContextPaneWidgetImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QmlEditorWidgets::ContextPaneWidgetImage::propertyChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlEditorWidgets::ContextPaneWidgetImage::removeProperty(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlEditorWidgets::ContextPaneWidgetImage::removeAndChangeProperty(const QString & _t1, const QString & _t2, const QVariant & _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QmlEditorWidgets__LabelFilter_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__LabelFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__LabelFilter_t qt_meta_stringdata_QmlEditorWidgets__LabelFilter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QmlEditorWidgets::LabelFilter"
QT_MOC_LITERAL(1, 30, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "QmlEditorWidgets::LabelFilter\0"
    "doubleClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__LabelFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QmlEditorWidgets::LabelFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabelFilter *_t = static_cast<LabelFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LabelFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabelFilter::doubleClicked)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QmlEditorWidgets::LabelFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__LabelFilter.data,
      qt_meta_data_QmlEditorWidgets__LabelFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::LabelFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::LabelFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__LabelFilter.stringdata0))
        return static_cast<void*>(const_cast< LabelFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlEditorWidgets::LabelFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QmlEditorWidgets::LabelFilter::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QmlEditorWidgets__WheelFilter_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlEditorWidgets__WheelFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlEditorWidgets__WheelFilter_t qt_meta_stringdata_QmlEditorWidgets__WheelFilter = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QmlEditorWidgets::WheelFilter"

    },
    "QmlEditorWidgets::WheelFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlEditorWidgets__WheelFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QmlEditorWidgets::WheelFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmlEditorWidgets::WheelFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlEditorWidgets__WheelFilter.data,
      qt_meta_data_QmlEditorWidgets__WheelFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlEditorWidgets::WheelFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlEditorWidgets::WheelFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlEditorWidgets__WheelFilter.stringdata0))
        return static_cast<void*>(const_cast< WheelFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlEditorWidgets::WheelFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
