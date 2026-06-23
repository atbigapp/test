/****************************************************************************
** Meta object code from reading C++ file 'candataparse.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../candataparse/candataparse.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'candataparse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CANDataParse_t {
    QByteArrayData data[15];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CANDataParse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CANDataParse_t qt_meta_stringdata_CANDataParse = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CANDataParse"
QT_MOC_LITERAL(1, 13, 18), // "sigReadDataFromCan"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "TimeStamp"
QT_MOC_LITERAL(4, 43, 5), // "CanCH"
QT_MOC_LITERAL(5, 49, 2), // "id"
QT_MOC_LITERAL(6, 52, 6), // "datAry"
QT_MOC_LITERAL(7, 59, 5), // "canFD"
QT_MOC_LITERAL(8, 65, 14), // "sigParseFinish"
QT_MOC_LITERAL(9, 80, 12), // "sigBeginTime"
QT_MOC_LITERAL(10, 93, 9), // "beginTime"
QT_MOC_LITERAL(11, 103, 16), // "slotParseCANFile"
QT_MOC_LITERAL(12, 120, 8), // "filename"
QT_MOC_LITERAL(13, 129, 17), // "slotParseCANFiles"
QT_MOC_LITERAL(14, 147, 9) // "filenames"

    },
    "CANDataParse\0sigReadDataFromCan\0\0"
    "TimeStamp\0CanCH\0id\0datAry\0canFD\0"
    "sigParseFinish\0sigBeginTime\0beginTime\0"
    "slotParseCANFile\0filename\0slotParseCANFiles\0"
    "filenames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CANDataParse[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   39,    2, 0x06 /* Public */,
       8,    0,   50,    2, 0x06 /* Public */,
       9,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   54,    2, 0x0a /* Public */,
      13,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::UInt, QMetaType::QByteArray, QMetaType::Bool,    3,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void CANDataParse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CANDataParse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigReadDataFromCan((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->sigParseFinish(); break;
        case 2: _t->sigBeginTime((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 3: _t->slotParseCANFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotParseCANFiles((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CANDataParse::*)(qint64 , int , quint32 , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CANDataParse::sigReadDataFromCan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CANDataParse::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CANDataParse::sigParseFinish)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CANDataParse::*)(const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CANDataParse::sigBeginTime)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CANDataParse::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CANDataParse.data,
    qt_meta_data_CANDataParse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CANDataParse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CANDataParse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CANDataParse.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CANDataParse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void CANDataParse::sigReadDataFromCan(qint64 _t1, int _t2, quint32 _t3, QByteArray _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CANDataParse::sigParseFinish()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CANDataParse::sigBeginTime(const QDateTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
