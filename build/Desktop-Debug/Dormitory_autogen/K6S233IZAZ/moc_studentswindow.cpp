/****************************************************************************
** Meta object code from reading C++ file 'studentswindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../headers/studentswindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Students_t {
    uint offsetsAndSizes[20];
    char stringdata0[9];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[16];
    char stringdata5[8];
    char stringdata6[24];
    char stringdata7[23];
    char stringdata8[28];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Students_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Students_t qt_meta_stringdata_Students = {
    {
        QT_MOC_LITERAL(0, 8),  // "Students"
        QT_MOC_LITERAL(9, 17),  // "on_delAll_clicked"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 18),  // "showStudentDetails"
        QT_MOC_LITERAL(47, 15),  // "StudentResident"
        QT_MOC_LITERAL(63, 7),  // "student"
        QT_MOC_LITERAL(71, 23),  // "on_searchButton_clicked"
        QT_MOC_LITERAL(95, 22),  // "on_closeButton_clicked"
        QT_MOC_LITERAL(118, 27),  // "on_floorNumber_valueChanged"
        QT_MOC_LITERAL(146, 4)   // "arg1"
    },
    "Students",
    "on_delAll_clicked",
    "",
    "showStudentDetails",
    "StudentResident",
    "student",
    "on_searchButton_clicked",
    "on_closeButton_clicked",
    "on_floorNumber_valueChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Students[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    1,   45,    2, 0x08,    2 /* Private */,
       6,    0,   48,    2, 0x08,    4 /* Private */,
       7,    0,   49,    2, 0x08,    5 /* Private */,
       8,    1,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject Students::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Students.offsetsAndSizes,
    qt_meta_data_Students,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Students_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Students, std::true_type>,
        // method 'on_delAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showStudentDetails'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<StudentResident, std::false_type>,
        // method 'on_searchButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_floorNumber_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Students::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Students *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_delAll_clicked(); break;
        case 1: _t->showStudentDetails((*reinterpret_cast< std::add_pointer_t<StudentResident>>(_a[1]))); break;
        case 2: _t->on_searchButton_clicked(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->on_floorNumber_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Students::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Students::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Students.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Students::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
