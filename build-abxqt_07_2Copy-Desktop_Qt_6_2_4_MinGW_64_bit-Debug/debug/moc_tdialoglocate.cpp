/****************************************************************************
** Meta object code from reading C++ file 'tdialoglocate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../abxqt_07_2 Copy/tdialoglocate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdialoglocate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDialogLocate_t {
    const uint offsetsAndSize[26];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TDialogLocate_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TDialogLocate_t qt_meta_stringdata_TDialogLocate = {
    {
QT_MOC_LITERAL(0, 13), // "TDialogLocate"
QT_MOC_LITERAL(14, 14), // "changeCellText"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 3), // "row"
QT_MOC_LITERAL(34, 6), // "column"
QT_MOC_LITERAL(41, 8), // "QString&"
QT_MOC_LITERAL(50, 4), // "text"
QT_MOC_LITERAL(55, 18), // "changeActionEnable"
QT_MOC_LITERAL(74, 2), // "en"
QT_MOC_LITERAL(77, 12), // "setSpinValue"
QT_MOC_LITERAL(90, 5), // "rowNo"
QT_MOC_LITERAL(96, 5), // "ColNo"
QT_MOC_LITERAL(102, 21) // "on_btnSetText_clicked"

    },
    "TDialogLocate\0changeCellText\0\0row\0"
    "column\0QString&\0text\0changeActionEnable\0"
    "en\0setSpinValue\0rowNo\0ColNo\0"
    "on_btnSetText_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDialogLocate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   38,    2, 0x06,    1 /* Public */,
       7,    1,   45,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   48,    2, 0x0a,    7 /* Public */,
      12,    0,   53,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,

       0        // eod
};

void TDialogLocate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TDialogLocate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeCellText((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[3]))); break;
        case 1: _t->changeActionEnable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setSpinValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_btnSetText_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TDialogLocate::*)(int , int , QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TDialogLocate::changeCellText)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TDialogLocate::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TDialogLocate::changeActionEnable)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TDialogLocate::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TDialogLocate.offsetsAndSize,
    qt_meta_data_TDialogLocate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TDialogLocate_t
, QtPrivate::TypeAndForceComplete<TDialogLocate, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TDialogLocate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDialogLocate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TDialogLocate.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TDialogLocate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TDialogLocate::changeCellText(int _t1, int _t2, QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TDialogLocate::changeActionEnable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
