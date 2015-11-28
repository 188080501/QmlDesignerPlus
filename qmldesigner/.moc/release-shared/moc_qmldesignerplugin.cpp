/****************************************************************************
** Meta object code from reading C++ file 'qmldesignerplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmldesignerplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmldesignerplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlDesigner__QmlDesignerPlugin_t {
    QByteArrayData data[14];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlDesigner__QmlDesignerPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlDesigner__QmlDesignerPlugin_t qt_meta_stringdata_QmlDesigner__QmlDesignerPlugin = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QmlDesigner::QmlDesignerPlugin"
QT_MOC_LITERAL(1, 31, 16), // "switchTextDesign"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 17), // "switschToTextMode"
QT_MOC_LITERAL(4, 67, 19), // "onTextEditorsClosed"
QT_MOC_LITERAL(5, 87, 21), // "QList<Core::IEditor*>"
QT_MOC_LITERAL(6, 109, 7), // "editors"
QT_MOC_LITERAL(7, 117, 22), // "onCurrentEditorChanged"
QT_MOC_LITERAL(8, 140, 14), // "Core::IEditor*"
QT_MOC_LITERAL(9, 155, 6), // "editor"
QT_MOC_LITERAL(10, 162, 20), // "onCurrentModeChanged"
QT_MOC_LITERAL(11, 183, 12), // "Core::IMode*"
QT_MOC_LITERAL(12, 196, 4), // "mode"
QT_MOC_LITERAL(13, 201, 7) // "oldMode"

    },
    "QmlDesigner::QmlDesignerPlugin\0"
    "switchTextDesign\0\0switschToTextMode\0"
    "onTextEditorsClosed\0QList<Core::IEditor*>\0"
    "editors\0onCurrentEditorChanged\0"
    "Core::IEditor*\0editor\0onCurrentModeChanged\0"
    "Core::IMode*\0mode\0oldMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlDesigner__QmlDesignerPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
      10,    2,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,

       0        // eod
};

void QmlDesigner::QmlDesignerPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlDesignerPlugin *_t = static_cast<QmlDesignerPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switchTextDesign(); break;
        case 1: _t->switschToTextMode(); break;
        case 2: _t->onTextEditorsClosed((*reinterpret_cast< QList<Core::IEditor*>(*)>(_a[1]))); break;
        case 3: _t->onCurrentEditorChanged((*reinterpret_cast< Core::IEditor*(*)>(_a[1]))); break;
        case 4: _t->onCurrentModeChanged((*reinterpret_cast< Core::IMode*(*)>(_a[1])),(*reinterpret_cast< Core::IMode*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Core::IEditor*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Core::IEditor* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QmlDesigner::QmlDesignerPlugin::staticMetaObject = {
    { &ExtensionSystem::IPlugin::staticMetaObject, qt_meta_stringdata_QmlDesigner__QmlDesignerPlugin.data,
      qt_meta_data_QmlDesigner__QmlDesignerPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlDesigner::QmlDesignerPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlDesigner::QmlDesignerPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlDesigner__QmlDesignerPlugin.stringdata0))
        return static_cast<void*>(const_cast< QmlDesignerPlugin*>(this));
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int QmlDesigner::QmlDesignerPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xd0, 0x07, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xbc, 0x07, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '!',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  't',  'C',  'r', 
    'e',  'a',  't',  'o',  'r',  'P',  'l',  'u', 
    'g',  'i',  'n',  0x00, 0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x11, 0x00, 'Q',  'm', 
    'l',  'D',  'e',  's',  'i',  'g',  'n',  'e', 
    'r',  'P',  'l',  'u',  'g',  'i',  'n',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x11, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, '0',  0x07, 0x00, 0x00,
    0x17, 0x00, 0x00, 0x00, 0x04, 0x07, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0b, 0x00, 'Q',  'm', 
    'l',  'D',  'e',  's',  'i',  'g',  'n',  'e', 
    'r',  0x00, 0x00, 0x00, 0x1b, 0x07, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x9b, 0x0a, 0x00, 0x00,
    0x0d, 0x00, 'C',  'o',  'm',  'p',  'a',  't', 
    'V',  'e',  'r',  's',  'i',  'o',  'n',  0x00,
    0x06, 0x00, '3',  '.',  '5',  '.',  '8',  '2', 
    0x1b, 0x0d, 0x00, 0x00, 0x06, 0x00, 'V',  'e', 
    'n',  'd',  'o',  'r',  0x12, 0x00, 'T',  'h', 
    'e',  ' ',  'Q',  't',  ' ',  'C',  'o',  'm', 
    'p',  'a',  'n',  'y',  ' ',  'L',  't',  'd', 
    0x9b, 0x11, 0x00, 0x00, 0x09, 0x00, 'C',  'o', 
    'p',  'y',  'r',  'i',  'g',  'h',  't',  0x00,
    0x1b, 0x00, '(',  'C',  ')',  ' ',  '2',  '0', 
    '1',  '5',  ' ',  'T',  'h',  'e',  ' ',  'Q', 
    't',  ' ',  'C',  'o',  'm',  'p',  'a',  'n', 
    'y',  ' ',  'L',  't',  'd',  0x00, 0x00, 0x00,
    0x94, 0x17, 0x00, 0x00, 0x07, 0x00, 'L',  'i', 
    'c',  'e',  'n',  's',  'e',  0x00, 0x00, 0x00,
    0xf8, 0x02, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
    0xdc, 0x02, 0x00, 0x00, 0x10, 0x00, 'C',  'o', 
    'm',  'm',  'e',  'r',  'c',  'i',  'a',  'l', 
    ' ',  'U',  's',  'a',  'g',  'e',  0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x05, 0x01, 'L',  'i', 
    'c',  'e',  'n',  's',  'e',  'e',  's',  ' ', 
    'h',  'o',  'l',  'd',  'i',  'n',  'g',  ' ', 
    'v',  'a',  'l',  'i',  'd',  ' ',  'Q',  't', 
    ' ',  'C',  'o',  'm',  'm',  'e',  'r',  'c', 
    'i',  'a',  'l',  ' ',  'l',  'i',  'c',  'e', 
    'n',  's',  'e',  's',  ' ',  'm',  'a',  'y', 
    ' ',  'u',  's',  'e',  ' ',  't',  'h',  'i', 
    's',  ' ',  'p',  'l',  'u',  'g',  'i',  'n', 
    ' ',  'i',  'n',  ' ',  'a',  'c',  'c',  'o', 
    'r',  'd',  'a',  'n',  'c',  'e',  ' ',  'w', 
    'i',  't',  'h',  ' ',  't',  'h',  'e',  ' ', 
    'Q',  't',  ' ',  'C',  'o',  'm',  'm',  'e', 
    'r',  'c',  'i',  'a',  'l',  ' ',  'L',  'i', 
    'c',  'e',  'n',  's',  'e',  ' ',  'A',  'g', 
    'r',  'e',  'e',  'm',  'e',  'n',  't',  ' ', 
    'p',  'r',  'o',  'v',  'i',  'd',  'e',  'd', 
    ' ',  'w',  'i',  't',  'h',  ' ',  't',  'h', 
    'e',  ' ',  'S',  'o',  'f',  't',  'w',  'a', 
    'r',  'e',  ' ',  'o',  'r',  ',',  ' ',  'a', 
    'l',  't',  'e',  'r',  'n',  'a',  't',  'i', 
    'v',  'e',  'l',  'y',  ',',  ' ',  'i',  'n', 
    ' ',  'a',  'c',  'c',  'o',  'r',  'd',  'a', 
    'n',  'c',  'e',  ' ',  'w',  'i',  't',  'h', 
    ' ',  't',  'h',  'e',  ' ',  't',  'e',  'r', 
    'm',  's',  ' ',  'c',  'o',  'n',  't',  'a', 
    'i',  'n',  'e',  'd',  ' ',  'i',  'n',  ' ', 
    'a',  ' ',  'w',  'r',  'i',  't',  't',  'e', 
    'n',  ' ',  'a',  'g',  'r',  'e',  'e',  'm', 
    'e',  'n',  't',  ' ',  'b',  'e',  't',  'w', 
    'e',  'e',  'n',  ' ',  'y',  'o',  'u',  ' ', 
    'a',  'n',  'd',  ' ',  'T',  'h',  'e',  ' ', 
    'Q',  't',  ' ',  'C',  'o',  'm',  'p',  'a', 
    'n',  'y',  '.',  0x00, 0x00, 0x00, 0x00, 0x00,
    ' ',  0x00, 'G',  'N',  'U',  ' ',  'G',  'e', 
    'n',  'e',  'r',  'a',  'l',  ' ',  'P',  'u', 
    'b',  'l',  'i',  'c',  ' ',  'L',  'i',  'c', 
    'e',  'n',  's',  'e',  ' ',  'U',  's',  'a', 
    'g',  'e',  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x01, 'A',  'l',  't',  'e',  'r',  'n', 
    'a',  't',  'i',  'v',  'e',  'l',  'y',  ',', 
    ' ',  't',  'h',  'i',  's',  ' ',  'p',  'l', 
    'u',  'g',  'i',  'n',  ' ',  'm',  'a',  'y', 
    ' ',  'b',  'e',  ' ',  'u',  's',  'e',  'd', 
    ' ',  'u',  'n',  'd',  'e',  'r',  ' ',  't', 
    'h',  'e',  ' ',  't',  'e',  'r',  'm',  's', 
    ' ',  'o',  'f',  ' ',  't',  'h',  'e',  ' ', 
    'G',  'N',  'U',  ' ',  'G',  'e',  'n',  'e', 
    'r',  'a',  'l',  ' ',  'P',  'u',  'b',  'l', 
    'i',  'c',  ' ',  'L',  'i',  'c',  'e',  'n', 
    's',  'e',  ' ',  'v',  'e',  'r',  's',  'i', 
    'o',  'n',  ' ',  '3',  '.',  '0',  ' ',  'a', 
    's',  ' ',  'p',  'u',  'b',  'l',  'i',  's', 
    'h',  'e',  'd',  ' ',  'b',  'y',  ' ',  't', 
    'h',  'e',  ' ',  'F',  'r',  'e',  'e',  ' ', 
    'S',  'o',  'f',  't',  'w',  'a',  'r',  'e', 
    ' ',  'F',  'o',  'u',  'n',  'd',  'a',  't', 
    'i',  'o',  'n',  ' ',  'a',  'n',  'd',  ' ', 
    'a',  'p',  'p',  'e',  'a',  'r',  'i',  'n', 
    'g',  ' ',  'i',  'n',  ' ',  't',  'h',  'e', 
    ' ',  'f',  'i',  'l',  'e',  ' ',  'L',  'I', 
    'C',  'E',  'N',  'S',  'E',  '.',  'G',  'P', 
    'L',  'v',  '3',  ' ',  'i',  'n',  'c',  'l', 
    'u',  'd',  'e',  'd',  ' ',  'i',  'n',  ' ', 
    't',  'h',  'e',  ' ',  'p',  'a',  'c',  'k', 
    'a',  'g',  'i',  'n',  'g',  ' ',  'o',  'f', 
    ' ',  't',  'h',  'i',  's',  ' ',  'p',  'l', 
    'u',  'g',  'i',  'n',  '.',  ' ',  'P',  'l', 
    'e',  'a',  's',  'e',  ' ',  'r',  'e',  'v', 
    'i',  'e',  'w',  ' ',  't',  'h',  'e',  ' ', 
    'f',  'o',  'l',  'l',  'o',  'w',  'i',  'n', 
    'g',  ' ',  'i',  'n',  'f',  'o',  'r',  'm', 
    'a',  't',  'i',  'o',  'n',  ' ',  't',  'o', 
    ' ',  'e',  'n',  's',  'u',  'r',  'e',  ' ', 
    't',  'h',  'e',  ' ',  'G',  'N',  'U',  ' ', 
    'G',  'e',  'n',  'e',  'r',  'a',  'l',  ' ', 
    'P',  'u',  'b',  'l',  'i',  'c',  ' ',  'L', 
    'i',  'c',  'e',  'n',  's',  'e',  ' ',  'v', 
    'e',  'r',  's',  'i',  'o',  'n',  ' ',  '3', 
    '.',  '0',  ' ',  'r',  'e',  'q',  'u',  'i', 
    'r',  'e',  'm',  'e',  'n',  't',  's',  ' ', 
    'w',  'i',  'l',  'l',  ' ',  'b',  'e',  ' ', 
    'm',  'e',  't',  ':',  ' ',  'h',  't',  't', 
    'p',  ':',  '/',  '/',  'w',  'w',  'w',  '.', 
    'g',  'n',  'u',  '.',  'o',  'r',  'g',  '/', 
    'c',  'o',  'p',  'y',  'l',  'e',  'f',  't', 
    '/',  'g',  'p',  'l',  '.',  'h',  't',  'm', 
    'l',  '.',  0x00, 0x00, 0x8b, 0x01, 0x00, 0x00,
    0x0b, 0x04, 0x00, 0x00, 0x8b, 0x04, 0x00, 0x00,
    0x8b, '%',  0x00, 0x00, 0x0b, '&',  0x00, 0x00,
    0x8b, '*',  0x00, 0x00, 0x0b, '+',  0x00, 0x00,
    0x9b, 'x',  0x00, 0x00, 0x08, 0x00, 'C',  'a', 
    't',  'e',  'g',  'o',  'r',  'y',  0x00, 0x00,
    0x08, 0x00, 'Q',  't',  ' ',  'Q',  'u',  'i', 
    'c',  'k',  0x00, 0x00, 0x9b, '|',  0x00, 0x00,
    0x0b, 0x00, 'D',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x1e, 0x00, 'V',  'i',  's',  'u',  'a',  'l', 
    ' ',  'D',  'e',  's',  'i',  'g',  'n',  'e', 
    'r',  ' ',  'f',  'o',  'r',  ' ',  'Q',  'M', 
    'L',  ' ',  'f',  'i',  'l',  'e',  's',  '.', 
    0x1b, 0x82, 0x00, 0x00, 0x03, 0x00, 'U',  'r', 
    'l',  0x00, 0x00, 0x00, 0x10, 0x00, 'h',  't', 
    't',  'p',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'q',  't',  '.',  'i',  'o',  0x00, 0x00,
    0x94, 0x86, 0x00, 0x00, 0x09, 0x00, 'A',  'r', 
    'g',  'u',  'm',  'e',  'n',  't',  's',  0x00,
    0xa0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x16, 0x00, '-',  'c', 
    'a',  'p',  't',  'u',  'r',  'e',  '-',  'p', 
    'u',  'p',  'p',  'e',  't',  '-',  's',  't', 
    'r',  'e',  'a',  'm',  0x1b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'P',  'a',  'r',  'a',  'm',  'e', 
    't',  'e',  'r',  0x00, 0x0c, 0x00, 'c',  'a', 
    'p',  't',  'u',  'r',  'e',  ' ',  'f',  'i', 
    'l',  'e',  0x00, 0x00, 0x9b, 0x0c, 0x00, 0x00,
    0x0b, 0x00, 'D',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x1e, 0x00, 'C',  'a',  'p',  't',  'u',  'r', 
    'e',  's',  ' ',  't',  'h',  'e',  ' ',  'Q', 
    'm',  'l',  ' ',  'P',  'u',  'p',  'p',  'e', 
    't',  ' ',  's',  't',  'r',  'e',  'a',  'm', 
    'P',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x14, 0x9d, 0x00, 0x00, 0x0c, 0x00, 'D',  'e', 
    'p',  'e',  'n',  'd',  'e',  'n',  'c',  'i', 
    'e',  's',  0x00, 0x00, 0x1c, 0x02, 0x00, 0x00,
    0x0e, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'N',  'a',  'm',  'e',  0x00, 0x00,
    0x04, 0x00, 'C',  'o',  'r',  'e',  0x00, 0x00,
    0x1b, 0x06, 0x00, 0x00, 0x07, 0x00, 'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x06, 0x00, '3',  '.',  '5',  '.',  '8',  '2', 
    0x0c, 0x00, 0x00, 0x00, ' ',  0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'N',  'a',  'm',  'e',  0x00, 0x00,
    0x0a, 0x00, 'T',  'e',  'x',  't',  'E',  'd', 
    'i',  't',  'o',  'r',  0x9b, 0x06, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0b, 0x00, 'Q',  'm', 
    'l',  'J',  'S',  'E',  'd',  'i',  't',  'o', 
    'r',  0x00, 0x00, 0x00, 0x1b, 0x07, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x09, 0x00, 'Q',  't', 
    'S',  'u',  'p',  'p',  'o',  'r',  't',  0x00,
    0x9b, 0x06, 0x00, 0x00, 0x07, 0x00, 'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x06, 0x00, '3',  '.',  '5',  '.',  '8',  '2', 
    0x0c, 0x00, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    'L',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'N',  'a',  'm',  'e',  0x00, 0x00,
    0x0f, 0x00, 'P',  'r',  'o',  'j',  'e',  'c', 
    't',  'E',  'x',  'p',  'l',  'o',  'r',  'e', 
    'r',  0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'P',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x13, 0x00, 'Q',  'm', 
    'a',  'k',  'e',  'P',  'r',  'o',  'j',  'e', 
    'c',  't',  'M',  'a',  'n',  'a',  'g',  'e', 
    'r',  0x00, 0x00, 0x00, 0x1b, 0x08, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0e, 0x00, 'R',  'e', 
    's',  'o',  'u',  'r',  'c',  'e',  'E',  'd', 
    'i',  't',  'o',  'r',  0x1b, 0x07, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x85, 0x09, 0x00, 0x00, 0x05, 0x12, 0x00, 0x00,
    0x05, 0x1b, 0x00, 0x00, 0x85, '#',  0x00, 0x00,
    0x05, '-',  0x00, 0x00, 0x05, '7',  0x00, 0x00,
    '$',  0x04, 0x00, 0x00, 0xb4, 0x03, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0xd4, 0x04, 0x00, 0x00, 0xd0, 0x03, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x04, 0x04, 0x00, 0x00, '\\', 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xd0, 0x07, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xbc, 0x07, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '!',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  't',  'C',  'r', 
    'e',  'a',  't',  'o',  'r',  'P',  'l',  'u', 
    'g',  'i',  'n',  0x00, 0x95, 0x09, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, '0',  0x07, 0x00, 0x00,
    0x17, 0x00, 0x00, 0x00, 0x04, 0x07, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0b, 0x00, 'Q',  'm', 
    'l',  'D',  'e',  's',  'i',  'g',  'n',  'e', 
    'r',  0x00, 0x00, 0x00, 0x1b, 0x07, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x9b, 0x0a, 0x00, 0x00,
    0x0d, 0x00, 'C',  'o',  'm',  'p',  'a',  't', 
    'V',  'e',  'r',  's',  'i',  'o',  'n',  0x00,
    0x06, 0x00, '3',  '.',  '5',  '.',  '8',  '2', 
    0x1b, 0x0d, 0x00, 0x00, 0x06, 0x00, 'V',  'e', 
    'n',  'd',  'o',  'r',  0x12, 0x00, 'T',  'h', 
    'e',  ' ',  'Q',  't',  ' ',  'C',  'o',  'm', 
    'p',  'a',  'n',  'y',  ' ',  'L',  't',  'd', 
    0x9b, 0x11, 0x00, 0x00, 0x09, 0x00, 'C',  'o', 
    'p',  'y',  'r',  'i',  'g',  'h',  't',  0x00,
    0x1b, 0x00, '(',  'C',  ')',  ' ',  '2',  '0', 
    '1',  '5',  ' ',  'T',  'h',  'e',  ' ',  'Q', 
    't',  ' ',  'C',  'o',  'm',  'p',  'a',  'n', 
    'y',  ' ',  'L',  't',  'd',  0x00, 0x00, 0x00,
    0x94, 0x17, 0x00, 0x00, 0x07, 0x00, 'L',  'i', 
    'c',  'e',  'n',  's',  'e',  0x00, 0x00, 0x00,
    0xf8, 0x02, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
    0xdc, 0x02, 0x00, 0x00, 0x10, 0x00, 'C',  'o', 
    'm',  'm',  'e',  'r',  'c',  'i',  'a',  'l', 
    ' ',  'U',  's',  'a',  'g',  'e',  0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x05, 0x01, 'L',  'i', 
    'c',  'e',  'n',  's',  'e',  'e',  's',  ' ', 
    'h',  'o',  'l',  'd',  'i',  'n',  'g',  ' ', 
    'v',  'a',  'l',  'i',  'd',  ' ',  'Q',  't', 
    ' ',  'C',  'o',  'm',  'm',  'e',  'r',  'c', 
    'i',  'a',  'l',  ' ',  'l',  'i',  'c',  'e', 
    'n',  's',  'e',  's',  ' ',  'm',  'a',  'y', 
    ' ',  'u',  's',  'e',  ' ',  't',  'h',  'i', 
    's',  ' ',  'p',  'l',  'u',  'g',  'i',  'n', 
    ' ',  'i',  'n',  ' ',  'a',  'c',  'c',  'o', 
    'r',  'd',  'a',  'n',  'c',  'e',  ' ',  'w', 
    'i',  't',  'h',  ' ',  't',  'h',  'e',  ' ', 
    'Q',  't',  ' ',  'C',  'o',  'm',  'm',  'e', 
    'r',  'c',  'i',  'a',  'l',  ' ',  'L',  'i', 
    'c',  'e',  'n',  's',  'e',  ' ',  'A',  'g', 
    'r',  'e',  'e',  'm',  'e',  'n',  't',  ' ', 
    'p',  'r',  'o',  'v',  'i',  'd',  'e',  'd', 
    ' ',  'w',  'i',  't',  'h',  ' ',  't',  'h', 
    'e',  ' ',  'S',  'o',  'f',  't',  'w',  'a', 
    'r',  'e',  ' ',  'o',  'r',  ',',  ' ',  'a', 
    'l',  't',  'e',  'r',  'n',  'a',  't',  'i', 
    'v',  'e',  'l',  'y',  ',',  ' ',  'i',  'n', 
    ' ',  'a',  'c',  'c',  'o',  'r',  'd',  'a', 
    'n',  'c',  'e',  ' ',  'w',  'i',  't',  'h', 
    ' ',  't',  'h',  'e',  ' ',  't',  'e',  'r', 
    'm',  's',  ' ',  'c',  'o',  'n',  't',  'a', 
    'i',  'n',  'e',  'd',  ' ',  'i',  'n',  ' ', 
    'a',  ' ',  'w',  'r',  'i',  't',  't',  'e', 
    'n',  ' ',  'a',  'g',  'r',  'e',  'e',  'm', 
    'e',  'n',  't',  ' ',  'b',  'e',  't',  'w', 
    'e',  'e',  'n',  ' ',  'y',  'o',  'u',  ' ', 
    'a',  'n',  'd',  ' ',  'T',  'h',  'e',  ' ', 
    'Q',  't',  ' ',  'C',  'o',  'm',  'p',  'a', 
    'n',  'y',  '.',  0x00, 0x00, 0x00, 0x00, 0x00,
    ' ',  0x00, 'G',  'N',  'U',  ' ',  'G',  'e', 
    'n',  'e',  'r',  'a',  'l',  ' ',  'P',  'u', 
    'b',  'l',  'i',  'c',  ' ',  'L',  'i',  'c', 
    'e',  'n',  's',  'e',  ' ',  'U',  's',  'a', 
    'g',  'e',  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x01, 'A',  'l',  't',  'e',  'r',  'n', 
    'a',  't',  'i',  'v',  'e',  'l',  'y',  ',', 
    ' ',  't',  'h',  'i',  's',  ' ',  'p',  'l', 
    'u',  'g',  'i',  'n',  ' ',  'm',  'a',  'y', 
    ' ',  'b',  'e',  ' ',  'u',  's',  'e',  'd', 
    ' ',  'u',  'n',  'd',  'e',  'r',  ' ',  't', 
    'h',  'e',  ' ',  't',  'e',  'r',  'm',  's', 
    ' ',  'o',  'f',  ' ',  't',  'h',  'e',  ' ', 
    'G',  'N',  'U',  ' ',  'G',  'e',  'n',  'e', 
    'r',  'a',  'l',  ' ',  'P',  'u',  'b',  'l', 
    'i',  'c',  ' ',  'L',  'i',  'c',  'e',  'n', 
    's',  'e',  ' ',  'v',  'e',  'r',  's',  'i', 
    'o',  'n',  ' ',  '3',  '.',  '0',  ' ',  'a', 
    's',  ' ',  'p',  'u',  'b',  'l',  'i',  's', 
    'h',  'e',  'd',  ' ',  'b',  'y',  ' ',  't', 
    'h',  'e',  ' ',  'F',  'r',  'e',  'e',  ' ', 
    'S',  'o',  'f',  't',  'w',  'a',  'r',  'e', 
    ' ',  'F',  'o',  'u',  'n',  'd',  'a',  't', 
    'i',  'o',  'n',  ' ',  'a',  'n',  'd',  ' ', 
    'a',  'p',  'p',  'e',  'a',  'r',  'i',  'n', 
    'g',  ' ',  'i',  'n',  ' ',  't',  'h',  'e', 
    ' ',  'f',  'i',  'l',  'e',  ' ',  'L',  'I', 
    'C',  'E',  'N',  'S',  'E',  '.',  'G',  'P', 
    'L',  'v',  '3',  ' ',  'i',  'n',  'c',  'l', 
    'u',  'd',  'e',  'd',  ' ',  'i',  'n',  ' ', 
    't',  'h',  'e',  ' ',  'p',  'a',  'c',  'k', 
    'a',  'g',  'i',  'n',  'g',  ' ',  'o',  'f', 
    ' ',  't',  'h',  'i',  's',  ' ',  'p',  'l', 
    'u',  'g',  'i',  'n',  '.',  ' ',  'P',  'l', 
    'e',  'a',  's',  'e',  ' ',  'r',  'e',  'v', 
    'i',  'e',  'w',  ' ',  't',  'h',  'e',  ' ', 
    'f',  'o',  'l',  'l',  'o',  'w',  'i',  'n', 
    'g',  ' ',  'i',  'n',  'f',  'o',  'r',  'm', 
    'a',  't',  'i',  'o',  'n',  ' ',  't',  'o', 
    ' ',  'e',  'n',  's',  'u',  'r',  'e',  ' ', 
    't',  'h',  'e',  ' ',  'G',  'N',  'U',  ' ', 
    'G',  'e',  'n',  'e',  'r',  'a',  'l',  ' ', 
    'P',  'u',  'b',  'l',  'i',  'c',  ' ',  'L', 
    'i',  'c',  'e',  'n',  's',  'e',  ' ',  'v', 
    'e',  'r',  's',  'i',  'o',  'n',  ' ',  '3', 
    '.',  '0',  ' ',  'r',  'e',  'q',  'u',  'i', 
    'r',  'e',  'm',  'e',  'n',  't',  's',  ' ', 
    'w',  'i',  'l',  'l',  ' ',  'b',  'e',  ' ', 
    'm',  'e',  't',  ':',  ' ',  'h',  't',  't', 
    'p',  ':',  '/',  '/',  'w',  'w',  'w',  '.', 
    'g',  'n',  'u',  '.',  'o',  'r',  'g',  '/', 
    'c',  'o',  'p',  'y',  'l',  'e',  'f',  't', 
    '/',  'g',  'p',  'l',  '.',  'h',  't',  'm', 
    'l',  '.',  0x00, 0x00, 0x8b, 0x01, 0x00, 0x00,
    0x0b, 0x04, 0x00, 0x00, 0x8b, 0x04, 0x00, 0x00,
    0x8b, '%',  0x00, 0x00, 0x0b, '&',  0x00, 0x00,
    0x8b, '*',  0x00, 0x00, 0x0b, '+',  0x00, 0x00,
    0x9b, 'x',  0x00, 0x00, 0x08, 0x00, 'C',  'a', 
    't',  'e',  'g',  'o',  'r',  'y',  0x00, 0x00,
    0x08, 0x00, 'Q',  't',  ' ',  'Q',  'u',  'i', 
    'c',  'k',  0x00, 0x00, 0x9b, '|',  0x00, 0x00,
    0x0b, 0x00, 'D',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x1e, 0x00, 'V',  'i',  's',  'u',  'a',  'l', 
    ' ',  'D',  'e',  's',  'i',  'g',  'n',  'e', 
    'r',  ' ',  'f',  'o',  'r',  ' ',  'Q',  'M', 
    'L',  ' ',  'f',  'i',  'l',  'e',  's',  '.', 
    0x1b, 0x82, 0x00, 0x00, 0x03, 0x00, 'U',  'r', 
    'l',  0x00, 0x00, 0x00, 0x10, 0x00, 'h',  't', 
    't',  'p',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'q',  't',  '.',  'i',  'o',  0x00, 0x00,
    0x94, 0x86, 0x00, 0x00, 0x09, 0x00, 'A',  'r', 
    'g',  'u',  'm',  'e',  'n',  't',  's',  0x00,
    0xa0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x16, 0x00, '-',  'c', 
    'a',  'p',  't',  'u',  'r',  'e',  '-',  'p', 
    'u',  'p',  'p',  'e',  't',  '-',  's',  't', 
    'r',  'e',  'a',  'm',  0x1b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'P',  'a',  'r',  'a',  'm',  'e', 
    't',  'e',  'r',  0x00, 0x0c, 0x00, 'c',  'a', 
    'p',  't',  'u',  'r',  'e',  ' ',  'f',  'i', 
    'l',  'e',  0x00, 0x00, 0x9b, 0x0c, 0x00, 0x00,
    0x0b, 0x00, 'D',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x1e, 0x00, 'C',  'a',  'p',  't',  'u',  'r', 
    'e',  's',  ' ',  't',  'h',  'e',  ' ',  'Q', 
    'm',  'l',  ' ',  'P',  'u',  'p',  'p',  'e', 
    't',  ' ',  's',  't',  'r',  'e',  'a',  'm', 
    'P',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x14, 0x9d, 0x00, 0x00, 0x0c, 0x00, 'D',  'e', 
    'p',  'e',  'n',  'd',  'e',  'n',  'c',  'i', 
    'e',  's',  0x00, 0x00, 0x1c, 0x02, 0x00, 0x00,
    0x0e, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'N',  'a',  'm',  'e',  0x00, 0x00,
    0x04, 0x00, 'C',  'o',  'r',  'e',  0x00, 0x00,
    0x1b, 0x06, 0x00, 0x00, 0x07, 0x00, 'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x06, 0x00, '3',  '.',  '5',  '.',  '8',  '2', 
    0x0c, 0x00, 0x00, 0x00, ' ',  0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'N',  'a',  'm',  'e',  0x00, 0x00,
    0x0a, 0x00, 'T',  'e',  'x',  't',  'E',  'd', 
    'i',  't',  'o',  'r',  0x9b, 0x06, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0b, 0x00, 'Q',  'm', 
    'l',  'J',  'S',  'E',  'd',  'i',  't',  'o', 
    'r',  0x00, 0x00, 0x00, 0x1b, 0x07, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x09, 0x00, 'Q',  't', 
    'S',  'u',  'p',  'p',  'o',  'r',  't',  0x00,
    0x9b, 0x06, 0x00, 0x00, 0x07, 0x00, 'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x06, 0x00, '3',  '.',  '5',  '.',  '8',  '2', 
    0x0c, 0x00, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    'L',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'N',  'a',  'm',  'e',  0x00, 0x00,
    0x0f, 0x00, 'P',  'r',  'o',  'j',  'e',  'c', 
    't',  'E',  'x',  'p',  'l',  'o',  'r',  'e', 
    'r',  0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'P',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x13, 0x00, 'Q',  'm', 
    'a',  'k',  'e',  'P',  'r',  'o',  'j',  'e', 
    'c',  't',  'M',  'a',  'n',  'a',  'g',  'e', 
    'r',  0x00, 0x00, 0x00, 0x1b, 0x08, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0e, 0x00, 'R',  'e', 
    's',  'o',  'u',  'r',  'c',  'e',  'E',  'd', 
    'i',  't',  'o',  'r',  0x1b, 0x07, 0x00, 0x00,
    0x07, 0x00, 'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x06, 0x00, '3',  '.', 
    '5',  '.',  '8',  '2',  0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x85, 0x09, 0x00, 0x00, 0x05, 0x12, 0x00, 0x00,
    0x05, 0x1b, 0x00, 0x00, 0x85, '#',  0x00, 0x00,
    0x05, '-',  0x00, 0x00, 0x05, '7',  0x00, 0x00,
    '$',  0x04, 0x00, 0x00, 0xb4, 0x03, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0xd4, 0x04, 0x00, 0x00, 0xd0, 0x03, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x04, 0x04, 0x00, 0x00, '\\', 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x9b, 0xf1, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x11, 0x00, 'Q',  'm', 
    'l',  'D',  'e',  's',  'i',  'g',  'n',  'e', 
    'r',  'P',  'l',  'u',  'g',  'i',  'n',  0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, '|',  0x07, 0x00, 0x00,
    0xa0, 0x07, 0x00, 0x00, 0xac, 0x07, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace QmlDesigner;
QT_MOC_EXPORT_PLUGIN(QmlDesigner::QmlDesignerPlugin, QmlDesignerPlugin)

QT_END_MOC_NAMESPACE
