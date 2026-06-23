/****************************************************************************
** Meta object code from reading C++ file 'dataplayback.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../dataplayback.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataplayback.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dataPlayback_t {
    QByteArrayData data[19];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dataPlayback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dataPlayback_t qt_meta_stringdata_dataPlayback = {
    {
QT_MOC_LITERAL(0, 0, 12), // "dataPlayback"
QT_MOC_LITERAL(1, 13, 12), // "sigCmeRePlay"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "cmd"
QT_MOC_LITERAL(4, 31, 3), // "str"
QT_MOC_LITERAL(5, 35, 16), // "slotReadProgress"
QT_MOC_LITERAL(6, 52, 1), // "i"
QT_MOC_LITERAL(7, 54, 9), // "allLength"
QT_MOC_LITERAL(8, 64, 23), // "slotReadDataTrkFrameCnt"
QT_MOC_LITERAL(9, 88, 8), // "uint32_t"
QT_MOC_LITERAL(10, 97, 8), // "frameCnt"
QT_MOC_LITERAL(11, 106, 12), // "endFrameTime"
QT_MOC_LITERAL(12, 119, 1), // "t"
QT_MOC_LITERAL(13, 121, 22), // "on_pButtonRead_clicked"
QT_MOC_LITERAL(14, 144, 22), // "on_pButtonNext_clicked"
QT_MOC_LITERAL(15, 167, 34), // "on_lEditStartFrame_editingFin..."
QT_MOC_LITERAL(16, 202, 33), // "on_lEditframeTime_editingFini..."
QT_MOC_LITERAL(17, 236, 29), // "on_pushButtonPlayerEn_clicked"
QT_MOC_LITERAL(18, 266, 32) // "on_pushButtonPlayControl_clicked"

    },
    "dataPlayback\0sigCmeRePlay\0\0cmd\0str\0"
    "slotReadProgress\0i\0allLength\0"
    "slotReadDataTrkFrameCnt\0uint32_t\0"
    "frameCnt\0endFrameTime\0t\0on_pButtonRead_clicked\0"
    "on_pButtonNext_clicked\0"
    "on_lEditStartFrame_editingFinished\0"
    "on_lEditframeTime_editingFinished\0"
    "on_pushButtonPlayerEn_clicked\0"
    "on_pushButtonPlayControl_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dataPlayback[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       1,    1,   74,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   77,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,
      17,    0,   92,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::LongLong,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dataPlayback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dataPlayback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigCmeRePlay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sigCmeRePlay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotReadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotReadDataTrkFrameCnt((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 4: _t->endFrameTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->on_pButtonRead_clicked(); break;
        case 6: _t->on_pButtonNext_clicked(); break;
        case 7: _t->on_lEditStartFrame_editingFinished(); break;
        case 8: _t->on_lEditframeTime_editingFinished(); break;
        case 9: _t->on_pushButtonPlayerEn_clicked(); break;
        case 10: _t->on_pushButtonPlayControl_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dataPlayback::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dataPlayback::sigCmeRePlay)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dataPlayback::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_dataPlayback.data,
    qt_meta_data_dataPlayback,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dataPlayback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dataPlayback::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dataPlayback.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int dataPlayback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void dataPlayback::sigCmeRePlay(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
