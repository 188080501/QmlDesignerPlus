/****************************************************************************
** Meta object code from reading C++ file 'componentsplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../componentsplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'componentsplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__ComponentsPlugin_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__ComponentsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__ComponentsPlugin_t qt_meta_stringdata_QmlDesigner__ComponentsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QmlDesigner::ComponentsPlugin"

    },
    "QmlDesigner::ComponentsPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__ComponentsPlugin[] = {

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

void QmlDesigner::ComponentsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmlDesigner::ComponentsPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlDesigner__ComponentsPlugin.data,
      qt_meta_data_QmlDesigner__ComponentsPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::ComponentsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::ComponentsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__ComponentsPlugin.stringdata0))
        return static_cast<void*>(const_cast< ComponentsPlugin*>(this));
    if (!strcmp(_clname, "QmlDesigner::IWidgetPlugin"))
        return static_cast< QmlDesigner::IWidgetPlugin*>(const_cast< ComponentsPlugin*>(this));
    if (!strcmp(_clname, "com.Digia.QmlDesigner.IWidgetPlugin.v10"))
        return static_cast< QmlDesigner::IWidgetPlugin*>(const_cast< ComponentsPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlDesigner::ComponentsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '`',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    'L',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '#',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  'm',  'l',  'D', 
    'e',  's',  'i',  'g',  'n',  'e',  'r',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x10, 0x00, 'C',  'o',  'm',  'p',  'o',  'n', 
    'e',  'n',  't',  's',  'P',  'l',  'u',  'g', 
    'i',  'n',  0x00, 0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x12, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0xbc, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x06, 0x00, 'V',  'e',  'n',  'd',  'o',  'r', 
    0x12, 0x00, 'T',  'h',  'e',  ' ',  'Q',  't', 
    ' ',  'C',  'o',  'm',  'p',  'a',  'n',  'y', 
    ' ',  'L',  't',  'd',  0x9b, 0x07, 0x00, 0x00,
    0x08, 0x00, 'C',  'a',  't',  'e',  'g',  'o', 
    'r',  'y',  0x00, 0x00, 0x08, 0x00, 'Q',  't', 
    ' ',  'Q',  'u',  'i',  'c',  'k',  0x00, 0x00,
    0x9b, 0x0b, 0x00, 0x00, 0x0b, 0x00, 'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, '$',  0x00, 'P',  'l', 
    'u',  'g',  'i',  'n',  ' ',  'f',  'o',  'r', 
    ' ',  'Q',  't',  ' ',  'Q',  'u',  'i',  'c', 
    'k',  ' ',  'C',  'o',  'm',  'p',  'o',  'n', 
    'e',  'n',  't',  ' ',  'I',  't',  'e',  'm', 
    's',  '.',  0x00, 0x00, 0x1b, 0x12, 0x00, 0x00,
    0x03, 0x00, 'U',  'r',  'l',  0x00, 0x00, 0x00,
    0x19, 0x00, 'h',  't',  't',  'p',  ':',  '/', 
    '/',  'w',  'w',  'w',  '.',  'q',  't',  '-', 
    'p',  'r',  'o',  'j',  'e',  'c',  't',  '.', 
    'o',  'r',  'g',  0x00, ',',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    't',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '`',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    'L',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '#',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  'm',  'l',  'D', 
    'e',  's',  'i',  'g',  'n',  'e',  'r',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0xbc, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x06, 0x00, 'V',  'e',  'n',  'd',  'o',  'r', 
    0x12, 0x00, 'T',  'h',  'e',  ' ',  'Q',  't', 
    ' ',  'C',  'o',  'm',  'p',  'a',  'n',  'y', 
    ' ',  'L',  't',  'd',  0x9b, 0x07, 0x00, 0x00,
    0x08, 0x00, 'C',  'a',  't',  'e',  'g',  'o', 
    'r',  'y',  0x00, 0x00, 0x08, 0x00, 'Q',  't', 
    ' ',  'Q',  'u',  'i',  'c',  'k',  0x00, 0x00,
    0x9b, 0x0b, 0x00, 0x00, 0x0b, 0x00, 'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, '$',  0x00, 'P',  'l', 
    'u',  'g',  'i',  'n',  ' ',  'f',  'o',  'r', 
    ' ',  'Q',  't',  ' ',  'Q',  'u',  'i',  'c', 
    'k',  ' ',  'C',  'o',  'm',  'p',  'o',  'n', 
    'e',  'n',  't',  ' ',  'I',  't',  'e',  'm', 
    's',  '.',  0x00, 0x00, 0x1b, 0x12, 0x00, 0x00,
    0x03, 0x00, 'U',  'r',  'l',  0x00, 0x00, 0x00,
    0x19, 0x00, 'h',  't',  't',  'p',  ':',  '/', 
    '/',  'w',  'w',  'w',  '.',  'q',  't',  '-', 
    'p',  'r',  'o',  'j',  'e',  'c',  't',  '.', 
    'o',  'r',  'g',  0x00, ',',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9b, '#',  0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x10, 0x00, 'C',  'o', 
    'm',  'p',  'o',  'n',  'e',  'n',  't',  's', 
    'P',  'l',  'u',  'g',  'i',  'n',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00,
    '0',  0x01, 0x00, 0x00, '<',  0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace QmlDesigner;
QT_MOC_EXPORT_PLUGIN(QmlDesigner::ComponentsPlugin, ComponentsPlugin)

QT_END_MOC_NAMESPACE
