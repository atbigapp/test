/****************************************************************************
** Meta object code from reading C++ file 'camerathread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../camerathread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camerathread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cameraThread_t {
    QByteArrayData data[17];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cameraThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cameraThread_t qt_meta_stringdata_cameraThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "cameraThread"
QT_MOC_LITERAL(1, 13, 14), // "sigCamearFrame"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "frame"
QT_MOC_LITERAL(4, 35, 3), // "idx"
QT_MOC_LITERAL(5, 39, 7), // "slotRun"
QT_MOC_LITERAL(6, 47, 8), // "slotStop"
QT_MOC_LITERAL(7, 56, 13), // "slotStartSave"
QT_MOC_LITERAL(8, 70, 14), // "TargetSaveMode"
QT_MOC_LITERAL(9, 85, 12), // "pathFileName"
QT_MOC_LITERAL(10, 98, 12), // "slotStopSave"
QT_MOC_LITERAL(11, 111, 14), // "slotOpenCamera"
QT_MOC_LITERAL(12, 126, 14), // "slotStopCamera"
QT_MOC_LITERAL(13, 141, 18), // "slotSaveFrameCount"
QT_MOC_LITERAL(14, 160, 13), // "RawFrameCount"
QT_MOC_LITERAL(15, 174, 13), // "TraFrameCount"
QT_MOC_LITERAL(16, 188, 11) // "MeasCounter"

    },
    "cameraThread\0sigCamearFrame\0\0frame\0"
    "idx\0slotRun\0slotStop\0slotStartSave\0"
    "TargetSaveMode\0pathFileName\0slotStopSave\0"
    "slotOpenCamera\0slotStopCamera\0"
    "slotSaveFrameCount\0RawFrameCount\0"
    "TraFrameCount\0MeasCounter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cameraThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   59,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    2,   61,    2, 0x0a /* Public */,
      10,    0,   66,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    3,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::UInt,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,

       0        // eod
};

void cameraThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cameraThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigCamearFrame((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->slotRun(); break;
        case 2: _t->slotStop(); break;
        case 3: _t->slotStartSave((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->slotStopSave(); break;
        case 5: _t->slotOpenCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotStopCamera(); break;
        case 7: _t->slotSaveFrameCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (cameraThread::*)(QImage , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cameraThread::sigCamearFrame)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cameraThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_cameraThread.data,
    qt_meta_data_cameraThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cameraThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cameraThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cameraThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cameraThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cameraThread::sigCamearFrame(QImage _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
