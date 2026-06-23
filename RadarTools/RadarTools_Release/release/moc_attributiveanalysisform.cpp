/****************************************************************************
** Meta object code from reading C++ file 'attributiveanalysisform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../attributiveanalysisform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attributiveanalysisform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AttributiveAnalysisForm_t {
    QByteArrayData data[4];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttributiveAnalysisForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttributiveAnalysisForm_t qt_meta_stringdata_AttributiveAnalysisForm = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AttributiveAnalysisForm"
QT_MOC_LITERAL(1, 24, 31), // "on_lineEdit_x_y_editingFinished"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 32) // "on_lineEdit_x_y2_editingFinished"

    },
    "AttributiveAnalysisForm\0"
    "on_lineEdit_x_y_editingFinished\0\0"
    "on_lineEdit_x_y2_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttributiveAnalysisForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AttributiveAnalysisForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AttributiveAnalysisForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_x_y_editingFinished(); break;
        case 1: _t->on_lineEdit_x_y2_editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AttributiveAnalysisForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AttributiveAnalysisForm.data,
    qt_meta_data_AttributiveAnalysisForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AttributiveAnalysisForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttributiveAnalysisForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttributiveAnalysisForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AttributiveAnalysisForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ObjInfoView_t {
    QByteArrayData data[22];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjInfoView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjInfoView_t qt_meta_stringdata_ObjInfoView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ObjInfoView"
QT_MOC_LITERAL(1, 12, 15), // "sigSetViewObjId"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "int16_t"
QT_MOC_LITERAL(4, 37, 2), // "ID"
QT_MOC_LITERAL(5, 40, 18), // "sigReadDataFromCan"
QT_MOC_LITERAL(6, 59, 9), // "TimeStamp"
QT_MOC_LITERAL(7, 69, 5), // "CanCH"
QT_MOC_LITERAL(8, 75, 2), // "id"
QT_MOC_LITERAL(9, 78, 6), // "datAry"
QT_MOC_LITERAL(10, 85, 5), // "canFD"
QT_MOC_LITERAL(11, 91, 15), // "slotViewObjInfo"
QT_MOC_LITERAL(12, 107, 10), // "TargetInfo"
QT_MOC_LITERAL(13, 118, 6), // "target"
QT_MOC_LITERAL(14, 125, 5), // "valid"
QT_MOC_LITERAL(15, 131, 30), // "Slot_SysTimerUpdateAndshowTime"
QT_MOC_LITERAL(16, 162, 30), // "on_lEdit_ObjId_editingFinished"
QT_MOC_LITERAL(17, 193, 42), // "on_lineEdit_viewFrameRange_ed..."
QT_MOC_LITERAL(18, 236, 41), // "on_lineEdit_viewFrameRangeEn_..."
QT_MOC_LITERAL(19, 278, 4), // "arg1"
QT_MOC_LITERAL(20, 283, 36), // "on_lineEdit_viewFrameRangeEn_..."
QT_MOC_LITERAL(21, 320, 7) // "checked"

    },
    "ObjInfoView\0sigSetViewObjId\0\0int16_t\0"
    "ID\0sigReadDataFromCan\0TimeStamp\0CanCH\0"
    "id\0datAry\0canFD\0slotViewObjInfo\0"
    "TargetInfo\0target\0valid\0"
    "Slot_SysTimerUpdateAndshowTime\0"
    "on_lEdit_ObjId_editingFinished\0"
    "on_lineEdit_viewFrameRange_editingFinished\0"
    "on_lineEdit_viewFrameRangeEn_stateChanged\0"
    "arg1\0on_lineEdit_viewFrameRangeEn_clicked\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjInfoView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    5,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   73,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x2a /* Public | MethodCloned */,
      15,    0,   81,    2, 0x0a /* Public */,
      16,    0,   82,    2, 0x08 /* Private */,
      17,    0,   83,    2, 0x08 /* Private */,
      18,    1,   84,    2, 0x08 /* Private */,
      20,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::UInt, QMetaType::QByteArray, QMetaType::Bool,    6,    7,    8,    9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool,   13,   14,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,   21,

       0        // eod
};

void ObjInfoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjInfoView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigSetViewObjId((*reinterpret_cast< int16_t(*)>(_a[1]))); break;
        case 1: _t->sigReadDataFromCan((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: _t->slotViewObjInfo((*reinterpret_cast< TargetInfo(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->slotViewObjInfo((*reinterpret_cast< TargetInfo(*)>(_a[1]))); break;
        case 4: _t->Slot_SysTimerUpdateAndshowTime(); break;
        case 5: _t->on_lEdit_ObjId_editingFinished(); break;
        case 6: _t->on_lineEdit_viewFrameRange_editingFinished(); break;
        case 7: _t->on_lineEdit_viewFrameRangeEn_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_viewFrameRangeEn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TargetInfo >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TargetInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ObjInfoView::*)(int16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjInfoView::sigSetViewObjId)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ObjInfoView::*)(unsigned int , int , quint32 , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjInfoView::sigReadDataFromCan)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ObjInfoView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ObjInfoView.data,
    qt_meta_data_ObjInfoView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjInfoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjInfoView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjInfoView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ObjInfoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ObjInfoView::sigSetViewObjId(int16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ObjInfoView::sigReadDataFromCan(unsigned int _t1, int _t2, quint32 _t3, QByteArray _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
