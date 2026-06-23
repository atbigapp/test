/****************************************************************************
** Meta object code from reading C++ file 'icanbusinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../icanbusinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icanbusinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ICanBusInterface_t {
    QByteArrayData data[12];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ICanBusInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ICanBusInterface_t qt_meta_stringdata_ICanBusInterface = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ICanBusInterface"
QT_MOC_LITERAL(1, 17, 12), // "sigErrorCode"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "err"
QT_MOC_LITERAL(4, 35, 3), // "txt"
QT_MOC_LITERAL(5, 39, 18), // "sigReadDataFromCan"
QT_MOC_LITERAL(6, 58, 9), // "TimeStamp"
QT_MOC_LITERAL(7, 68, 5), // "CanCH"
QT_MOC_LITERAL(8, 74, 2), // "id"
QT_MOC_LITERAL(9, 77, 6), // "datAry"
QT_MOC_LITERAL(10, 84, 5), // "canFD"
QT_MOC_LITERAL(11, 90, 22) // "sigReadDataFromCan_Ext"

    },
    "ICanBusInterface\0sigErrorCode\0\0err\0"
    "txt\0sigReadDataFromCan\0TimeStamp\0CanCH\0"
    "id\0datAry\0canFD\0sigReadDataFromCan_Ext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ICanBusInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    5,   34,    2, 0x06 /* Public */,
      11,    5,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::UInt, QMetaType::QByteArray, QMetaType::Bool,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::UInt, QMetaType::QByteArray, QMetaType::Bool,    6,    7,    8,    9,   10,

       0        // eod
};

void ICanBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ICanBusInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigErrorCode((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sigReadDataFromCan((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: _t->sigReadDataFromCan_Ext((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ICanBusInterface::*)(quint16 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ICanBusInterface::sigErrorCode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ICanBusInterface::*)(unsigned int , int , quint32 , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ICanBusInterface::sigReadDataFromCan)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ICanBusInterface::*)(unsigned int , int , quint32 , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ICanBusInterface::sigReadDataFromCan_Ext)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ICanBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ICanBusInterface.data,
    qt_meta_data_ICanBusInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ICanBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ICanBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ICanBusInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ICanBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ICanBusInterface::sigErrorCode(quint16 _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ICanBusInterface::sigReadDataFromCan(unsigned int _t1, int _t2, quint32 _t3, QByteArray _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ICanBusInterface::sigReadDataFromCan_Ext(unsigned int _t1, int _t2, quint32 _t3, QByteArray _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
