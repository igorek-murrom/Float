/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../FloatUp/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[36];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 7), // "Add2Bar"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 4), // "data"
QT_MOC_LITERAL(25, 8), // "ClearBar"
QT_MOC_LITERAL(34, 12), // "writeTimeSet"
QT_MOC_LITERAL(47, 8), // "printErr"
QT_MOC_LITERAL(56, 5), // "error"
QT_MOC_LITERAL(62, 22), // "on_StartButton_clicked"
QT_MOC_LITERAL(85, 21), // "on_dataButton_clicked"
QT_MOC_LITERAL(107, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(130, 24), // "on_settimeButton_clicked"
QT_MOC_LITERAL(155, 23), // "on_scrollButton_clicked"
QT_MOC_LITERAL(179, 22), // "on_ClearButton_clicked"
QT_MOC_LITERAL(202, 24), // "on_ConnectButton_clicked"
QT_MOC_LITERAL(227, 23), // "on_updateButton_clicked"
QT_MOC_LITERAL(251, 8), // "doStatus"
QT_MOC_LITERAL(260, 1) // "f"

    },
    "MainWindow\0Add2Bar\0\0data\0ClearBar\0"
    "writeTimeSet\0printErr\0error\0"
    "on_StartButton_clicked\0on_dataButton_clicked\0"
    "on_resetButton_clicked\0on_settimeButton_clicked\0"
    "on_scrollButton_clicked\0on_ClearButton_clicked\0"
    "on_ConnectButton_clicked\0"
    "on_updateButton_clicked\0doStatus\0f"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x0a,    1 /* Public */,
       4,    0,   95,    2, 0x0a,    3 /* Public */,
       5,    1,   96,    2, 0x0a,    4 /* Public */,
       6,    1,   99,    2, 0x0a,    6 /* Public */,
       8,    0,  102,    2, 0x08,    8 /* Private */,
       9,    0,  103,    2, 0x08,    9 /* Private */,
      10,    0,  104,    2, 0x08,   10 /* Private */,
      11,    0,  105,    2, 0x08,   11 /* Private */,
      12,    0,  106,    2, 0x08,   12 /* Private */,
      13,    0,  107,    2, 0x08,   13 /* Private */,
      14,    0,  108,    2, 0x08,   14 /* Private */,
      15,    0,  109,    2, 0x08,   15 /* Private */,
      16,    1,  110,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Add2Bar((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->ClearBar(); break;
        case 2: _t->writeTimeSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->printErr((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_StartButton_clicked(); break;
        case 5: _t->on_dataButton_clicked(); break;
        case 6: _t->on_resetButton_clicked(); break;
        case 7: _t->on_settimeButton_clicked(); break;
        case 8: _t->on_scrollButton_clicked(); break;
        case 9: _t->on_ClearButton_clicked(); break;
        case 10: _t->on_ConnectButton_clicked(); break;
        case 11: _t->on_updateButton_clicked(); break;
        case 12: _t->doStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
