/****************************************************************************
** Meta object code from reading C++ file 'savecandata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../savecandata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savecandata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_saveCanData_t {
    QByteArrayData data[16];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_saveCanData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_saveCanData_t qt_meta_stringdata_saveCanData = {
    {
QT_MOC_LITERAL(0, 0, 11), // "saveCanData"
QT_MOC_LITERAL(1, 12, 18), // "slotCameraFrameIdx"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "FrameIdx"
QT_MOC_LITERAL(4, 41, 20), // "slot_Receive_CanData"
QT_MOC_LITERAL(5, 62, 9), // "TimeStamp"
QT_MOC_LITERAL(6, 72, 5), // "CanCH"
QT_MOC_LITERAL(7, 78, 2), // "id"
QT_MOC_LITERAL(8, 81, 6), // "datAry"
QT_MOC_LITERAL(9, 88, 5), // "canFD"
QT_MOC_LITERAL(10, 94, 16), // "slot_SaveCanData"
QT_MOC_LITERAL(11, 111, 10), // "SaveStatue"
QT_MOC_LITERAL(12, 122, 8), // "fileName"
QT_MOC_LITERAL(13, 131, 7), // "slotRun"
QT_MOC_LITERAL(14, 139, 18), // "slotCamearFrameIdx"
QT_MOC_LITERAL(15, 158, 3) // "idx"

    },
    "saveCanData\0slotCameraFrameIdx\0\0"
    "FrameIdx\0slot_Receive_CanData\0TimeStamp\0"
    "CanCH\0id\0datAry\0canFD\0slot_SaveCanData\0"
    "SaveStatue\0fileName\0slotRun\0"
    "slotCamearFrameIdx\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_saveCanData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    5,   42,    2, 0x0a /* Public */,
      10,    2,   53,    2, 0x0a /* Public */,
      13,    0,   58,    2, 0x0a /* Public */,
      14,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::QByteArray, QMetaType::Bool,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void saveCanData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<saveCanData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotCameraFrameIdx((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->slot_Receive_CanData((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: _t->slot_SaveCanData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->slotRun(); break;
        case 4: _t->slotCamearFrameIdx((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject saveCanData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_saveCanData.data,
    qt_meta_data_saveCanData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *saveCanData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *saveCanData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_saveCanData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int saveCanData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
