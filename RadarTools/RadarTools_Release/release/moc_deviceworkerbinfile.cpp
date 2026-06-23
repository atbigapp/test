/****************************************************************************
** Meta object code from reading C++ file 'deviceworkerbinfile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../candataparse/deviceworkerbinfile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceworkerbinfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Devices__Can__DeviceWorkerFile_t {
    QByteArrayData data[10];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Devices__Can__DeviceWorkerFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Devices__Can__DeviceWorkerFile_t qt_meta_stringdata_Devices__Can__DeviceWorkerFile = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Devices::Can::DeviceWorkerFile"
QT_MOC_LITERAL(1, 31, 6), // "opened"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 6), // "closed"
QT_MOC_LITERAL(4, 46, 13), // "frameRecieved"
QT_MOC_LITERAL(5, 60, 22), // "Devices::Can::CanFrame"
QT_MOC_LITERAL(6, 83, 5), // "frame"
QT_MOC_LITERAL(7, 89, 15), // "setSkipFrameNum"
QT_MOC_LITERAL(8, 105, 8), // "frameNum"
QT_MOC_LITERAL(9, 114, 16) // "setPauseFrameNum"

    },
    "Devices::Can::DeviceWorkerFile\0opened\0"
    "\0closed\0frameRecieved\0Devices::Can::CanFrame\0"
    "frame\0setSkipFrameNum\0frameNum\0"
    "setPauseFrameNum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Devices__Can__DeviceWorkerFile[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   44,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,    8,

       0        // eod
};

void Devices::Can::DeviceWorkerFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceWorkerFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opened(); break;
        case 1: _t->closed(); break;
        case 2: _t->frameRecieved((*reinterpret_cast< const Devices::Can::CanFrame(*)>(_a[1]))); break;
        case 3: _t->setSkipFrameNum((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->setPauseFrameNum((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Devices::Can::CanFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceWorkerFile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceWorkerFile::opened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceWorkerFile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceWorkerFile::closed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceWorkerFile::*)(const Devices::Can::CanFrame & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceWorkerFile::frameRecieved)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Devices::Can::DeviceWorkerFile::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Devices__Can__DeviceWorkerFile.data,
    qt_meta_data_Devices__Can__DeviceWorkerFile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Devices::Can::DeviceWorkerFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Devices::Can::DeviceWorkerFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Devices__Can__DeviceWorkerFile.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Devices::Can::DeviceWorkerFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Devices::Can::DeviceWorkerFile::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Devices::Can::DeviceWorkerFile::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Devices::Can::DeviceWorkerFile::frameRecieved(const Devices::Can::CanFrame & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
