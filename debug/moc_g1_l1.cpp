/****************************************************************************
** Meta object code from reading C++ file 'g1_l1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../g1_l1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'g1_l1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_G1_L1_t {
    QByteArrayData data[13];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_G1_L1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_G1_L1_t qt_meta_stringdata_G1_L1 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "G1_L1"
QT_MOC_LITERAL(1, 6, 21), // "on_homeButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(4, 51, 17), // "on_answ_1_clicked"
QT_MOC_LITERAL(5, 69, 17), // "on_answ_2_clicked"
QT_MOC_LITERAL(6, 87, 17), // "on_answ_3_clicked"
QT_MOC_LITERAL(7, 105, 17), // "on_answ_4_clicked"
QT_MOC_LITERAL(8, 123, 17), // "on_answ_5_clicked"
QT_MOC_LITERAL(9, 141, 17), // "on_answ_6_clicked"
QT_MOC_LITERAL(10, 159, 17), // "on_answ_7_clicked"
QT_MOC_LITERAL(11, 177, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(12, 199, 22) // "on_printButton_clicked"

    },
    "G1_L1\0on_homeButton_clicked\0\0"
    "on_nextButton_clicked\0on_answ_1_clicked\0"
    "on_answ_2_clicked\0on_answ_3_clicked\0"
    "on_answ_4_clicked\0on_answ_5_clicked\0"
    "on_answ_6_clicked\0on_answ_7_clicked\0"
    "on_backButton_clicked\0on_printButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_G1_L1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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

       0        // eod
};

void G1_L1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<G1_L1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_homeButton_clicked(); break;
        case 1: _t->on_nextButton_clicked(); break;
        case 2: _t->on_answ_1_clicked(); break;
        case 3: _t->on_answ_2_clicked(); break;
        case 4: _t->on_answ_3_clicked(); break;
        case 5: _t->on_answ_4_clicked(); break;
        case 6: _t->on_answ_5_clicked(); break;
        case 7: _t->on_answ_6_clicked(); break;
        case 8: _t->on_answ_7_clicked(); break;
        case 9: _t->on_backButton_clicked(); break;
        case 10: _t->on_printButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject G1_L1::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_G1_L1.data,
    qt_meta_data_G1_L1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *G1_L1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *G1_L1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_G1_L1.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int G1_L1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
