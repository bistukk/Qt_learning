/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../abxqt_10_6/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[492];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 25), // "on_actFile_Open_triggered"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 28), // "on_actImage_ZoomIn_triggered"
QT_MOC_LITERAL(67, 29), // "on_actImage_ZoomOut_triggered"
QT_MOC_LITERAL(97, 32), // "on_actImage_RotateLeft_triggered"
QT_MOC_LITERAL(130, 33), // "on_actImage_RotateRight_trigg..."
QT_MOC_LITERAL(164, 28), // "on_actImage_FilpUD_triggered"
QT_MOC_LITERAL(193, 28), // "on_actImage_FilpLR_triggered"
QT_MOC_LITERAL(222, 27), // "on_actFile_Reload_triggered"
QT_MOC_LITERAL(250, 25), // "on_actFile_Save_triggered"
QT_MOC_LITERAL(276, 27), // "on_actFile_SaveAs_triggered"
QT_MOC_LITERAL(304, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(326, 23), // "on_btnGetRGB565_clicked"
QT_MOC_LITERAL(350, 26), // "on_btnSaveDataFile_clicked"
QT_MOC_LITERAL(377, 26), // "on_actFile_Print_triggered"
QT_MOC_LITERAL(404, 28), // "on_actFile_Preview_triggered"
QT_MOC_LITERAL(433, 20), // "do_paintRequestImage"
QT_MOC_LITERAL(454, 9), // "QPrinter*"
QT_MOC_LITERAL(464, 7), // "printer"
QT_MOC_LITERAL(472, 19) // "do_paintRequestText"

    },
    "MainWindow\0on_actFile_Open_triggered\0"
    "\0on_actImage_ZoomIn_triggered\0"
    "on_actImage_ZoomOut_triggered\0"
    "on_actImage_RotateLeft_triggered\0"
    "on_actImage_RotateRight_triggered\0"
    "on_actImage_FilpUD_triggered\0"
    "on_actImage_FilpLR_triggered\0"
    "on_actFile_Reload_triggered\0"
    "on_actFile_Save_triggered\0"
    "on_actFile_SaveAs_triggered\0"
    "on_pushButton_clicked\0on_btnGetRGB565_clicked\0"
    "on_btnSaveDataFile_clicked\0"
    "on_actFile_Print_triggered\0"
    "on_actFile_Preview_triggered\0"
    "do_paintRequestImage\0QPrinter*\0printer\0"
    "do_paintRequestText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x08,    1 /* Private */,
       3,    0,  117,    2, 0x08,    2 /* Private */,
       4,    0,  118,    2, 0x08,    3 /* Private */,
       5,    0,  119,    2, 0x08,    4 /* Private */,
       6,    0,  120,    2, 0x08,    5 /* Private */,
       7,    0,  121,    2, 0x08,    6 /* Private */,
       8,    0,  122,    2, 0x08,    7 /* Private */,
       9,    0,  123,    2, 0x08,    8 /* Private */,
      10,    0,  124,    2, 0x08,    9 /* Private */,
      11,    0,  125,    2, 0x08,   10 /* Private */,
      12,    0,  126,    2, 0x08,   11 /* Private */,
      13,    0,  127,    2, 0x08,   12 /* Private */,
      14,    0,  128,    2, 0x08,   13 /* Private */,
      15,    0,  129,    2, 0x08,   14 /* Private */,
      16,    0,  130,    2, 0x08,   15 /* Private */,
      17,    1,  131,    2, 0x08,   16 /* Private */,
      20,    1,  134,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actFile_Open_triggered(); break;
        case 1: _t->on_actImage_ZoomIn_triggered(); break;
        case 2: _t->on_actImage_ZoomOut_triggered(); break;
        case 3: _t->on_actImage_RotateLeft_triggered(); break;
        case 4: _t->on_actImage_RotateRight_triggered(); break;
        case 5: _t->on_actImage_FilpUD_triggered(); break;
        case 6: _t->on_actImage_FilpLR_triggered(); break;
        case 7: _t->on_actFile_Reload_triggered(); break;
        case 8: _t->on_actFile_Save_triggered(); break;
        case 9: _t->on_actFile_SaveAs_triggered(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_btnGetRGB565_clicked(); break;
        case 12: _t->on_btnSaveDataFile_clicked(); break;
        case 13: _t->on_actFile_Print_triggered(); break;
        case 14: _t->on_actFile_Preview_triggered(); break;
        case 15: _t->do_paintRequestImage((*reinterpret_cast< std::add_pointer_t<QPrinter*>>(_a[1]))); break;
        case 16: _t->do_paintRequestText((*reinterpret_cast< std::add_pointer_t<QPrinter*>>(_a[1]))); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPrinter *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPrinter *, std::false_type>


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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
