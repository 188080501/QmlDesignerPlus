/****************************************************************************
** Meta object code from reading C++ file 'settingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../settingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__Internal__SettingsPageWidget_t {
    QByteArrayData data[7];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__SettingsPageWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__SettingsPageWidget_t qt_meta_stringdata_QmlDesigner__Internal__SettingsPageWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "QmlDesigner::Internal::Settin..."
QT_MOC_LITERAL(1, 42, 23), // "debugViewEnabledToggled"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 1), // "b"
QT_MOC_LITERAL(4, 69, 23), // "resetFallbackPuppetPath"
QT_MOC_LITERAL(5, 93, 23), // "resetQmlPuppetBuildPath"
QT_MOC_LITERAL(6, 117, 13) // "resetQmlStyle"

    },
    "QmlDesigner::Internal::SettingsPageWidget\0"
    "debugViewEnabledToggled\0\0b\0"
    "resetFallbackPuppetPath\0resetQmlPuppetBuildPath\0"
    "resetQmlStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__SettingsPageWidget[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QmlDesigner::Internal::SettingsPageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsPageWidget *_t = static_cast<SettingsPageWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->debugViewEnabledToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->resetFallbackPuppetPath(); break;
        case 2: _t->resetQmlPuppetBuildPath(); break;
        case 3: _t->resetQmlStyle(); break;
        default: ;
        }
    }
}

const QMetaObject QmlDesigner::Internal::SettingsPageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__SettingsPageWidget.data,
      qt_meta_data_QmlDesigner__Internal__SettingsPageWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::SettingsPageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::SettingsPageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__SettingsPageWidget.stringdata0))
        return static_cast<void*>(const_cast< SettingsPageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QmlDesigner::Internal::SettingsPageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QmlDesigner__Internal__SettingsPage_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__Internal__SettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__Internal__SettingsPage_t qt_meta_stringdata_QmlDesigner__Internal__SettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 35) // "QmlDesigner::Internal::Settin..."

    },
    "QmlDesigner::Internal::SettingsPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__Internal__SettingsPage[] = {

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

void QmlDesigner::Internal::SettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmlDesigner::Internal::SettingsPage::staticMetaObject = {
    { &Core::IOptionsPage::staticMetaObject, qt_meta_stringdata_QmlDesigner__Internal__SettingsPage.data,
      qt_meta_data_QmlDesigner__Internal__SettingsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::Internal::SettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::Internal::SettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__Internal__SettingsPage.stringdata0))
        return static_cast<void*>(const_cast< SettingsPage*>(this));
    return Core::IOptionsPage::qt_metacast(_clname);
}

int QmlDesigner::Internal::SettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Core::IOptionsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
