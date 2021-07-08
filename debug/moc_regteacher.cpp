/****************************************************************************
** Meta object code from reading C++ file 'regteacher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../regteacher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'regteacher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegTeacher_t {
    QByteArrayData data[11];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegTeacher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegTeacher_t qt_meta_stringdata_RegTeacher = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RegTeacher"
QT_MOC_LITERAL(1, 11, 23), // "on_nameEdit_textChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "arg1"
QT_MOC_LITERAL(4, 41, 24), // "on_name2Edit_textChanged"
QT_MOC_LITERAL(5, 66, 24), // "on_name3Edit_textChanged"
QT_MOC_LITERAL(6, 91, 25), // "on_numberEdit_textChanged"
QT_MOC_LITERAL(7, 117, 27), // "on_passwordEdit_textChanged"
QT_MOC_LITERAL(8, 145, 22), // "on_readyButton_clicked"
QT_MOC_LITERAL(9, 168, 25), // "on_schoolEdit_textChanged"
QT_MOC_LITERAL(10, 194, 24) // "on_autorizButton_clicked"

    },
    "RegTeacher\0on_nameEdit_textChanged\0\0"
    "arg1\0on_name2Edit_textChanged\0"
    "on_name3Edit_textChanged\0"
    "on_numberEdit_textChanged\0"
    "on_passwordEdit_textChanged\0"
    "on_readyButton_clicked\0on_schoolEdit_textChanged\0"
    "on_autorizButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegTeacher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    0,   69,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void RegTeacher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegTeacher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_nameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_name2Edit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_name3Edit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_numberEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_passwordEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_readyButton_clicked(); break;
        case 6: _t->on_schoolEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_autorizButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RegTeacher::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_RegTeacher.data,
    qt_meta_data_RegTeacher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RegTeacher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegTeacher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegTeacher.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RegTeacher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
