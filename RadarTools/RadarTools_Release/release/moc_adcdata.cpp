/****************************************************************************
** Meta object code from reading C++ file 'adcdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../adcdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adcdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adcData_t {
    QByteArrayData data[16];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adcData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adcData_t qt_meta_stringdata_adcData = {
    {
QT_MOC_LITERAL(0, 0, 7), // "adcData"
QT_MOC_LITERAL(1, 8, 10), // "sigCanSend"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 2), // "id"
QT_MOC_LITERAL(4, 23, 3), // "Ary"
QT_MOC_LITERAL(5, 27, 20), // "slot_Receive_CanData"
QT_MOC_LITERAL(6, 48, 9), // "TimeStamp"
QT_MOC_LITERAL(7, 58, 5), // "CanCH"
QT_MOC_LITERAL(8, 64, 6), // "datAry"
QT_MOC_LITERAL(9, 71, 5), // "canFD"
QT_MOC_LITERAL(10, 77, 18), // "on_pBStart_clicked"
QT_MOC_LITERAL(11, 96, 24), // "on_pButtonImport_clicked"
QT_MOC_LITERAL(12, 121, 26), // "on_pushButton_mode_clicked"
QT_MOC_LITERAL(13, 148, 39), // "on_comboBoxDataType_currentIn..."
QT_MOC_LITERAL(14, 188, 5), // "index"
QT_MOC_LITERAL(15, 194, 36) // "on_comboBoxRadar_currentIndex..."

    },
    "adcData\0sigCanSend\0\0id\0Ary\0"
    "slot_Receive_CanData\0TimeStamp\0CanCH\0"
    "datAry\0canFD\0on_pBStart_clicked\0"
    "on_pButtonImport_clicked\0"
    "on_pushButton_mode_clicked\0"
    "on_comboBoxDataType_currentIndexChanged\0"
    "index\0on_comboBoxRadar_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adcData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    5,   54,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,
      13,    1,   68,    2, 0x08 /* Private */,
      15,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QByteArray,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::QByteArray, QMetaType::Bool,    6,    7,    3,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void adcData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adcData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigCanSend((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->slot_Receive_CanData((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: _t->on_pBStart_clicked(); break;
        case 3: _t->on_pButtonImport_clicked(); break;
        case 4: _t->on_pushButton_mode_clicked(); break;
        case 5: _t->on_comboBoxDataType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_comboBoxRadar_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (adcData::*)(quint32 , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&adcData::sigCanSend)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject adcData::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_adcData.data,
    qt_meta_data_adcData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *adcData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adcData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adcData.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int adcData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void adcData::sigCanSend(quint32 _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
