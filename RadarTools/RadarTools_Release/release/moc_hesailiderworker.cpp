/****************************************************************************
** Meta object code from reading C++ file 'hesailiderworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../truevalue/hesailiderworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hesailiderworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HeSaiLiderWorker_t {
    QByteArrayData data[31];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeSaiLiderWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeSaiLiderWorker_t qt_meta_stringdata_HeSaiLiderWorker = {
    {
QT_MOC_LITERAL(0, 0, 16), // "HeSaiLiderWorker"
QT_MOC_LITERAL(1, 17, 5), // "state"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 19), // "detectionFrameIndex"
QT_MOC_LITERAL(4, 44, 16), // "objectFrameIndex"
QT_MOC_LITERAL(5, 61, 8), // "finished"
QT_MOC_LITERAL(6, 70, 2), // "ok"
QT_MOC_LITERAL(7, 73, 3), // "msg"
QT_MOC_LITERAL(8, 77, 10), // "showTarget"
QT_MOC_LITERAL(9, 88, 5), // "index"
QT_MOC_LITERAL(10, 94, 5), // "count"
QT_MOC_LITERAL(11, 100, 12), // "targetString"
QT_MOC_LITERAL(12, 113, 11), // "frameNumber"
QT_MOC_LITERAL(13, 125, 6), // "number"
QT_MOC_LITERAL(14, 132, 4), // "stop"
QT_MOC_LITERAL(15, 137, 3), // "run"
QT_MOC_LITERAL(16, 141, 10), // "frameCount"
QT_MOC_LITERAL(17, 152, 4), // "save"
QT_MOC_LITERAL(18, 157, 2), // "ip"
QT_MOC_LITERAL(19, 160, 4), // "port"
QT_MOC_LITERAL(20, 165, 5), // "anyIP"
QT_MOC_LITERAL(21, 171, 34), // "slot_TargetFileSaveModeAndFil..."
QT_MOC_LITERAL(22, 206, 14), // "TargetSaveMode"
QT_MOC_LITERAL(23, 221, 8), // "fileName"
QT_MOC_LITERAL(24, 230, 13), // "lockDetection"
QT_MOC_LITERAL(25, 244, 15), // "unlockDetection"
QT_MOC_LITERAL(26, 260, 10), // "lockObject"
QT_MOC_LITERAL(27, 271, 12), // "unlockObject"
QT_MOC_LITERAL(28, 284, 19), // "setRadarFrameNumber"
QT_MOC_LITERAL(29, 304, 3), // "raw"
QT_MOC_LITERAL(30, 308, 5) // "track"

    },
    "HeSaiLiderWorker\0state\0\0detectionFrameIndex\0"
    "objectFrameIndex\0finished\0ok\0msg\0"
    "showTarget\0index\0count\0targetString\0"
    "frameNumber\0number\0stop\0run\0frameCount\0"
    "save\0ip\0port\0anyIP\0"
    "slot_TargetFileSaveModeAndFileName\0"
    "TargetSaveMode\0fileName\0lockDetection\0"
    "unlockDetection\0lockObject\0unlockObject\0"
    "setRadarFrameNumber\0raw\0track"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeSaiLiderWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       5,    2,   89,    2, 0x06 /* Public */,
       5,    1,   94,    2, 0x26 /* Public | MethodCloned */,
       5,    0,   97,    2, 0x26 /* Public | MethodCloned */,
       8,    3,   98,    2, 0x06 /* Public */,
      12,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  108,    2, 0x0a /* Public */,
      15,    5,  109,    2, 0x0a /* Public */,
      21,    2,  120,    2, 0x0a /* Public */,
      24,    0,  125,    2, 0x0a /* Public */,
      25,    0,  126,    2, 0x0a /* Public */,
      26,    0,  127,    2, 0x0a /* Public */,
      27,    0,  128,    2, 0x0a /* Public */,
      28,    2,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    9,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::QString, QMetaType::UShort, QMetaType::Bool,   16,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   29,   30,

       0        // eod
};

void HeSaiLiderWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HeSaiLiderWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->state((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->finished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->finished(); break;
        case 4: _t->showTarget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->frameNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->stop(); break;
        case 7: _t->run((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< quint16(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 8: _t->slot_TargetFileSaveModeAndFileName((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->lockDetection(); break;
        case 10: _t->unlockDetection(); break;
        case 11: _t->lockObject(); break;
        case 12: _t->unlockObject(); break;
        case 13: _t->setRadarFrameNumber((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HeSaiLiderWorker::*)(unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeSaiLiderWorker::state)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HeSaiLiderWorker::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeSaiLiderWorker::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HeSaiLiderWorker::*)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeSaiLiderWorker::showTarget)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HeSaiLiderWorker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeSaiLiderWorker::frameNumber)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HeSaiLiderWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HeSaiLiderWorker.data,
    qt_meta_data_HeSaiLiderWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HeSaiLiderWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeSaiLiderWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HeSaiLiderWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HeSaiLiderWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void HeSaiLiderWorker::state(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HeSaiLiderWorker::finished(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 4
void HeSaiLiderWorker::showTarget(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HeSaiLiderWorker::frameNumber(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
