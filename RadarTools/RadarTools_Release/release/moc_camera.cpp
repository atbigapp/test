/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_camera_t {
    QByteArrayData data[20];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_camera_t qt_meta_stringdata_camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "camera"
QT_MOC_LITERAL(1, 7, 17), // "SigSaveFrameCount"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "RawFrameCount"
QT_MOC_LITERAL(4, 40, 13), // "TraFrameCount"
QT_MOC_LITERAL(5, 54, 11), // "MeasCounter"
QT_MOC_LITERAL(6, 66, 17), // "sigCameraFrameIdx"
QT_MOC_LITERAL(7, 84, 8), // "FrameIdx"
QT_MOC_LITERAL(8, 93, 14), // "sigtOpenCamera"
QT_MOC_LITERAL(9, 108, 3), // "idx"
QT_MOC_LITERAL(10, 112, 13), // "rotationAngle"
QT_MOC_LITERAL(11, 126, 5), // "angle"
QT_MOC_LITERAL(12, 132, 8), // "rotation"
QT_MOC_LITERAL(13, 141, 15), // "slotCamearFrame"
QT_MOC_LITERAL(14, 157, 5), // "frame"
QT_MOC_LITERAL(15, 163, 23), // "on_cBoxCamera_activated"
QT_MOC_LITERAL(16, 187, 5), // "index"
QT_MOC_LITERAL(17, 193, 25), // "on_pButtonRefresh_clicked"
QT_MOC_LITERAL(18, 219, 37), // "on_checkBoxRotationAngle_stat..."
QT_MOC_LITERAL(19, 257, 4) // "arg1"

    },
    "camera\0SigSaveFrameCount\0\0RawFrameCount\0"
    "TraFrameCount\0MeasCounter\0sigCameraFrameIdx\0"
    "FrameIdx\0sigtOpenCamera\0idx\0rotationAngle\0"
    "angle\0rotation\0slotCamearFrame\0frame\0"
    "on_cBoxCamera_activated\0index\0"
    "on_pButtonRefresh_clicked\0"
    "on_checkBoxRotationAngle_stateChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_camera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       6,    1,   61,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,
      10,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,   72,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x08 /* Private */,
      17,    0,   80,    2, 0x08 /* Private */,
      18,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::Int,   14,    9,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SigSaveFrameCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sigCameraFrameIdx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sigtOpenCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->rotationAngle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->slotCamearFrame((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_cBoxCamera_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pButtonRefresh_clicked(); break;
        case 7: _t->on_checkBoxRotationAngle_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (camera::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&camera::SigSaveFrameCount)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (camera::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&camera::sigCameraFrameIdx)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (camera::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&camera::sigtOpenCamera)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (camera::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&camera::rotationAngle)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject camera::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_camera.data,
    qt_meta_data_camera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_camera.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void camera::SigSaveFrameCount(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void camera::sigCameraFrameIdx(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void camera::sigtOpenCamera(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void camera::rotationAngle(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
