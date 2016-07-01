/****************************************************************************
** Meta object code from reading C++ file 'qpad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QPad/qpad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPad_t {
    QByteArrayData data[15];
    char stringdata[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QPad_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QPad_t qt_meta_stringdata_QPad = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 22),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 23),
QT_MOC_LITERAL(4, 53, 23),
QT_MOC_LITERAL(5, 77, 23),
QT_MOC_LITERAL(6, 101, 24),
QT_MOC_LITERAL(7, 126, 22),
QT_MOC_LITERAL(8, 149, 23),
QT_MOC_LITERAL(9, 173, 23),
QT_MOC_LITERAL(10, 197, 34),
QT_MOC_LITERAL(11, 232, 1),
QT_MOC_LITERAL(12, 234, 28),
QT_MOC_LITERAL(13, 263, 4),
QT_MOC_LITERAL(14, 268, 25)
    },
    "QPad\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionCopy_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionCut_triggered\0on_actionRedo_triggered\0"
    "on_actionUndo_triggered\0"
    "on_fontComboBox_currentFontChanged\0f\0"
    "on_pickFontSize_valueChanged\0arg1\0"
    "on_actionSaveAs_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       4,    0,   71,    2, 0x08,
       5,    0,   72,    2, 0x08,
       6,    0,   73,    2, 0x08,
       7,    0,   74,    2, 0x08,
       8,    0,   75,    2, 0x08,
       9,    0,   76,    2, 0x08,
      10,    1,   77,    2, 0x08,
      12,    1,   80,    2, 0x08,
      14,    0,   83,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void,

       0        // eod
};

void QPad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPad *_t = static_cast<QPad *>(_o);
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionCopy_triggered(); break;
        case 4: _t->on_actionPaste_triggered(); break;
        case 5: _t->on_actionCut_triggered(); break;
        case 6: _t->on_actionRedo_triggered(); break;
        case 7: _t->on_actionUndo_triggered(); break;
        case 8: _t->on_fontComboBox_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 9: _t->on_pickFontSize_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_actionSaveAs_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject QPad::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QPad.data,
      qt_meta_data_QPad,  qt_static_metacall, 0, 0}
};


const QMetaObject *QPad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPad.stringdata))
        return static_cast<void*>(const_cast< QPad*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QPad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
