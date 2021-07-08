/****************************************************************************
** Meta object code from reading C++ file 'registration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../registration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Registration_t {
    QByteArrayData data[14];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Registration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Registration_t qt_meta_stringdata_Registration = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Registration"
QT_MOC_LITERAL(1, 13, 24), // "on_autorizButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "on_readyButton_clicked"
QT_MOC_LITERAL(4, 62, 23), // "on_nameEdit_textChanged"
QT_MOC_LITERAL(5, 86, 4), // "arg1"
QT_MOC_LITERAL(6, 91, 24), // "on_name2Edit_textChanged"
QT_MOC_LITERAL(7, 116, 25), // "on_numberEdit_textChanged"
QT_MOC_LITERAL(8, 142, 22), // "on_ageBox_valueChanged"
QT_MOC_LITERAL(9, 165, 24), // "on_gradeBox_valueChanged"
QT_MOC_LITERAL(10, 190, 27), // "on_passwordEdit_textChanged"
QT_MOC_LITERAL(11, 218, 32), // "on_comboTeach_currentTextChanged"
QT_MOC_LITERAL(12, 251, 33), // "on_comboTeach_currentIndexCha..."
QT_MOC_LITERAL(13, 285, 5) // "index"

    },
    "Registration\0on_autorizButton_clicked\0"
    "\0on_readyButton_clicked\0on_nameEdit_textChanged\0"
    "arg1\0on_name2Edit_textChanged\0"
    "on_numberEdit_textChanged\0"
    "on_ageBox_valueChanged\0on_gradeBox_valueChanged\0"
    "on_passwordEdit_textChanged\0"
    "on_comboTeach_currentTextChanged\0"
    "on_comboTeach_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Registration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      10,    1,   81,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void Registration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Registration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_autorizButton_clicked(); break;
        case 1: _t->on_readyButton_clicked(); break;
        case 2: _t->on_nameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_name2Edit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_numberEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_ageBox_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_gradeBox_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_passwordEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_comboTeach_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_comboTeach_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Registration::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Registration.data,
    qt_meta_data_Registration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Registration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Registration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Registration.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Registration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
