/****************************************************************************
** Meta object code from reading C++ file 'replayerthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../replayerthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'replayerthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rePlayerThread_t {
    QByteArrayData data[26];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rePlayerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rePlayerThread_t qt_meta_stringdata_rePlayerThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "rePlayerThread"
QT_MOC_LITERAL(1, 15, 16), // "sigReplayStarted"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "sigReplayStoped"
QT_MOC_LITERAL(4, 49, 18), // "sigReadDataFromCan"
QT_MOC_LITERAL(5, 68, 9), // "TimeStamp"
QT_MOC_LITERAL(6, 78, 5), // "CanCH"
QT_MOC_LITERAL(7, 84, 2), // "id"
QT_MOC_LITERAL(8, 87, 6), // "datAry"
QT_MOC_LITERAL(9, 94, 5), // "canFD"
QT_MOC_LITERAL(10, 100, 22), // "sigReadDataFromCan_Ext"
QT_MOC_LITERAL(11, 123, 15), // "sigReadProgress"
QT_MOC_LITERAL(12, 139, 1), // "i"
QT_MOC_LITERAL(13, 141, 9), // "allLength"
QT_MOC_LITERAL(14, 151, 14), // "sigCamearFrame"
QT_MOC_LITERAL(15, 166, 5), // "frame"
QT_MOC_LITERAL(16, 172, 3), // "idx"
QT_MOC_LITERAL(17, 176, 22), // "sigReadDataTrkFrameCnt"
QT_MOC_LITERAL(18, 199, 8), // "uint32_t"
QT_MOC_LITERAL(19, 208, 8), // "frameCnt"
QT_MOC_LITERAL(20, 217, 12), // "endFrameTime"
QT_MOC_LITERAL(21, 230, 1), // "t"
QT_MOC_LITERAL(22, 232, 7), // "slotRun"
QT_MOC_LITERAL(23, 240, 13), // "slotCmeRePlay"
QT_MOC_LITERAL(24, 254, 3), // "cmd"
QT_MOC_LITERAL(25, 258, 3) // "str"

    },
    "rePlayerThread\0sigReplayStarted\0\0"
    "sigReplayStoped\0sigReadDataFromCan\0"
    "TimeStamp\0CanCH\0id\0datAry\0canFD\0"
    "sigReadDataFromCan_Ext\0sigReadProgress\0"
    "i\0allLength\0sigCamearFrame\0frame\0idx\0"
    "sigReadDataTrkFrameCnt\0uint32_t\0"
    "frameCnt\0endFrameTime\0t\0slotRun\0"
    "slotCmeRePlay\0cmd\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rePlayerThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    5,   71,    2, 0x06 /* Public */,
      10,    5,   82,    2, 0x06 /* Public */,
      11,    2,   93,    2, 0x06 /* Public */,
      14,    2,   98,    2, 0x06 /* Public */,
      17,    1,  103,    2, 0x06 /* Public */,
      20,    1,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  109,    2, 0x0a /* Public */,
      23,    2,  110,    2, 0x0a /* Public */,
      23,    1,  115,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::UInt, QMetaType::QByteArray, QMetaType::Bool,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::UInt, QMetaType::QByteArray, QMetaType::Bool,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::QImage, QMetaType::Int,   15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::LongLong,   21,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   24,   25,
    QMetaType::Void, QMetaType::Int,   24,

       0        // eod
};

void rePlayerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rePlayerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigReplayStarted(); break;
        case 1: _t->sigReplayStoped(); break;
        case 2: _t->sigReadDataFromCan((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->sigReadDataFromCan_Ext((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 4: _t->sigReadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->sigCamearFrame((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->sigReadDataTrkFrameCnt((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 7: _t->endFrameTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->slotRun(); break;
        case 9: _t->slotCmeRePlay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->slotCmeRePlay((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (rePlayerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rePlayerThread::sigReplayStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (rePlayerThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rePlayerThread::sigReplayStoped)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (rePlayerThread::*)(unsigned int , int , quint32 , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rePlayerThread::sigReadDataFromCan)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (rePlayerThread::*)(unsigned int , int , quint32 , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rePlayerThread::sigReadDataFromCan_Ext)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (rePlayerThread::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rePlayerThread::sigReadProgress)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (rePlayerThread::*)(QImage , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rePlayerThread::sigCamearFrame)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (rePlayerThread::*)(uint32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rePlayerThread::sigReadDataTrkFrameCnt)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (rePlayerThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rePlayerThread::endFrameTime)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rePlayerThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_rePlayerThread.data,
    qt_meta_data_rePlayerThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rePlayerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rePlayerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rePlayerThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int rePlayerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void rePlayerThread::sigReplayStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void rePlayerThread::sigReplayStoped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void rePlayerThread::sigReadDataFromCan(unsigned int _t1, int _t2, quint32 _t3, QByteArray _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void rePlayerThread::sigReadDataFromCan_Ext(unsigned int _t1, int _t2, quint32 _t3, QByteArray _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void rePlayerThread::sigReadProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void rePlayerThread::sigCamearFrame(QImage _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void rePlayerThread::sigReadDataTrkFrameCnt(uint32_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void rePlayerThread::endFrameTime(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
