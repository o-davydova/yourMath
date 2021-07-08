/****************************************************************************
** Meta object code from reading C++ file 'changeinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../changeinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changeinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_changeInfo_t {
    QByteArrayData data[13];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_changeInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_changeInfo_t qt_meta_stringdata_changeInfo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "changeInfo"
QT_MOC_LITERAL(1, 11, 22), // "on_readyButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 33), // "on_teacherBox_currentIndexCha..."
QT_MOC_LITERAL(4, 69, 5), // "index"
QT_MOC_LITERAL(5, 75, 32), // "on_teacherBox_currentTextChanged"
QT_MOC_LITERAL(6, 108, 4), // "arg1"
QT_MOC_LITERAL(7, 113, 23), // "on_nameEdit_textChanged"
QT_MOC_LITERAL(8, 137, 25), // "on_numberEdit_textChanged"
QT_MOC_LITERAL(9, 163, 23), // "on_passEdit_textChanged"
QT_MOC_LITERAL(10, 187, 26), // "on_newPassEdit_textChanged"
QT_MOC_LITERAL(11, 214, 23), // "on_AgeEdit_valueChanged"
QT_MOC_LITERAL(12, 238, 25) // "on_gradeEdit_valueChanged"

    },
    "changeInfo\0on_readyButton_clicked\0\0"
    "on_teacherBox_currentIndexChanged\0"
    "index\0on_teacherBox_currentTextChanged\0"
    "arg1\0on_nameEdit_textChanged\0"
    "on_numberEdit_textChanged\0"
    "on_passEdit_textChanged\0"
    "on_newPassEdit_textChanged\0"
    "on_AgeEdit_valueChanged\0"
    "on_gradeEdit_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_changeInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void changeInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<changeInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_readyButton_clicked(); break;
        case 1: _t->on_teacherBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_teacherBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_nameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_numberEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_passEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_newPassEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_AgeEdit_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_gradeEdit_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject changeInfo::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_changeInfo.data,
    qt_meta_data_changeInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *changeInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *changeInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_changeInfo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int changeInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
