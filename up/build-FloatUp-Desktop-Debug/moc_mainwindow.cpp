/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FloatUp/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "Add2Bar"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "data"
QT_MOC_LITERAL(4, 25, 8), // "ClearBar"
QT_MOC_LITERAL(5, 34, 12), // "writeTimeSet"
QT_MOC_LITERAL(6, 47, 11), // "printConErr"
QT_MOC_LITERAL(7, 59, 22), // "on_StartButton_clicked"
QT_MOC_LITERAL(8, 82, 21), // "on_dataButton_clicked"
QT_MOC_LITERAL(9, 104, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(10, 127, 24), // "on_settimeButton_clicked"
QT_MOC_LITERAL(11, 152, 23), // "on_scrollButton_clicked"
QT_MOC_LITERAL(12, 176, 22), // "on_ClearButton_clicked"
QT_MOC_LITERAL(13, 199, 24), // "on_ConnectButton_clicked"
QT_MOC_LITERAL(14, 224, 23), // "on_updateButton_clicked"
QT_MOC_LITERAL(15, 248, 20), // "change_color_connect"
QT_MOC_LITERAL(16, 269, 1) // "f"

    },
    "MainWindow\0Add2Bar\0\0data\0ClearBar\0"
    "writeTimeSet\0printConErr\0"
    "on_StartButton_clicked\0on_dataButton_clicked\0"
    "on_resetButton_clicked\0on_settimeButton_clicked\0"
    "on_scrollButton_clicked\0on_ClearButton_clicked\0"
    "on_ConnectButton_clicked\0"
    "on_updateButton_clicked\0change_color_connect\0"
    "f"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    0,   82,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       6,    0,   86,    2, 0x0a /* Public */,
       7,    0,   87,    2, 0x08 /* Private */,
       8,    0,   88,    2, 0x08 /* Private */,
       9,    0,   89,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Add2Bar((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->ClearBar(); break;
        case 2: _t->writeTimeSet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->printConErr(); break;
        case 4: _t->on_StartButton_clicked(); break;
        case 5: _t->on_dataButton_clicked(); break;
        case 6: _t->on_resetButton_clicked(); break;
        case 7: _t->on_settimeButton_clicked(); break;
        case 8: _t->on_scrollButton_clicked(); break;
        case 9: _t->on_ClearButton_clicked(); break;
        case 10: _t->on_ConnectButton_clicked(); break;
        case 11: _t->on_updateButton_clicked(); break;
        case 12: _t->change_color_connect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
