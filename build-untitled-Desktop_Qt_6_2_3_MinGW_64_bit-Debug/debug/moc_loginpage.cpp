/****************************************************************************
** Meta object code from reading C++ file 'loginpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Sadikshya/loginpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_loginpage_t {
    const uint offsetsAndSize[8];
<<<<<<< Updated upstream
    char stringdata0[69];
=======
    char stringdata0[60];
>>>>>>> Stashed changes
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_loginpage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_loginpage_t qt_meta_stringdata_loginpage = {
    {
QT_MOC_LITERAL(0, 9), // "loginpage"
<<<<<<< Updated upstream
QT_MOC_LITERAL(10, 26), // "on_pushButtonadmin_clicked"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 30) // "on_pushButton_custpmer_clicked"

    },
    "loginpage\0on_pushButtonadmin_clicked\0"
    "\0on_pushButton_custpmer_clicked"
=======
QT_MOC_LITERAL(10, 22), // "on_adminbutton_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 25) // "on_customerbutton_clicked"

    },
    "loginpage\0on_adminbutton_clicked\0\0"
    "on_customerbutton_clicked"
>>>>>>> Stashed changes
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loginpage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void loginpage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<loginpage *>(_o);
        (void)_t;
        switch (_id) {
<<<<<<< Updated upstream
        case 0: _t->on_pushButtonadmin_clicked(); break;
        case 1: _t->on_pushButton_custpmer_clicked(); break;
=======
        case 0: _t->on_adminbutton_clicked(); break;
        case 1: _t->on_customerbutton_clicked(); break;
>>>>>>> Stashed changes
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject loginpage::staticMetaObject = { {
<<<<<<< Updated upstream
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
=======
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
>>>>>>> Stashed changes
    qt_meta_stringdata_loginpage.offsetsAndSize,
    qt_meta_data_loginpage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_loginpage_t
, QtPrivate::TypeAndForceComplete<loginpage, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *loginpage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginpage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_loginpage.stringdata0))
        return static_cast<void*>(this);
<<<<<<< Updated upstream
    return QDialog::qt_metacast(_clname);
=======
    return QMainWindow::qt_metacast(_clname);
>>>>>>> Stashed changes
}

int loginpage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
<<<<<<< Updated upstream
    _id = QDialog::qt_metacall(_c, _id, _a);
=======
    _id = QMainWindow::qt_metacall(_c, _id, _a);
>>>>>>> Stashed changes
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
