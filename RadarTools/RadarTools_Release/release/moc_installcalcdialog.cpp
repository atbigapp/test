/****************************************************************************
** Meta object code from reading C++ file 'installcalcdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../installcalcdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'installcalcdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InstallCalcDialog_t {
    QByteArrayData data[18];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstallCalcDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstallCalcDialog_t qt_meta_stringdata_InstallCalcDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "InstallCalcDialog"
QT_MOC_LITERAL(1, 18, 11), // "sigCfgRadar"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "type"
QT_MOC_LITERAL(4, 36, 8), // "sigApply"
QT_MOC_LITERAL(5, 45, 16), // "sigEOLCaliExtCfg"
QT_MOC_LITERAL(6, 62, 19), // "stInstallCalcExtCfg"
QT_MOC_LITERAL(7, 82, 7), // "cfgData"
QT_MOC_LITERAL(8, 90, 28), // "on_pButton_getResult_clicked"
QT_MOC_LITERAL(9, 119, 19), // "on_pB_close_clicked"
QT_MOC_LITERAL(10, 139, 24), // "on_pButton_apply_clicked"
QT_MOC_LITERAL(11, 164, 23), // "on_pButton_Save_clicked"
QT_MOC_LITERAL(12, 188, 25), // "on_pButton_ExtCfg_clicked"
QT_MOC_LITERAL(13, 214, 29), // "on_pButton_ExtCfgRead_clicked"
QT_MOC_LITERAL(14, 244, 29), // "on_pButton_ExtCfgmean_clicked"
QT_MOC_LITERAL(15, 274, 28), // "on_pButton_SetExtCfg_clicked"
QT_MOC_LITERAL(16, 303, 12), // "slotCalcInfo"
QT_MOC_LITERAL(17, 316, 4) // "Info"

    },
    "InstallCalcDialog\0sigCfgRadar\0\0type\0"
    "sigApply\0sigEOLCaliExtCfg\0stInstallCalcExtCfg\0"
    "cfgData\0on_pButton_getResult_clicked\0"
    "on_pB_close_clicked\0on_pButton_apply_clicked\0"
    "on_pButton_Save_clicked\0"
    "on_pButton_ExtCfg_clicked\0"
    "on_pButton_ExtCfgRead_clicked\0"
    "on_pButton_ExtCfgmean_clicked\0"
    "on_pButton_SetExtCfg_clicked\0slotCalcInfo\0"
    "Info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstallCalcDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    2,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   17,

       0        // eod
};

void InstallCalcDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstallCalcDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigCfgRadar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigApply(); break;
        case 2: _t->sigEOLCaliExtCfg((*reinterpret_cast< stInstallCalcExtCfg(*)>(_a[1]))); break;
        case 3: _t->on_pButton_getResult_clicked(); break;
        case 4: _t->on_pB_close_clicked(); break;
        case 5: _t->on_pButton_apply_clicked(); break;
        case 6: _t->on_pButton_Save_clicked(); break;
        case 7: _t->on_pButton_ExtCfg_clicked(); break;
        case 8: _t->on_pButton_ExtCfgRead_clicked(); break;
        case 9: _t->on_pButton_ExtCfgmean_clicked(); break;
        case 10: _t->on_pButton_SetExtCfg_clicked(); break;
        case 11: _t->slotCalcInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstallCalcDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstallCalcDialog::sigCfgRadar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InstallCalcDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstallCalcDialog::sigApply)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InstallCalcDialog::*)(stInstallCalcExtCfg );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstallCalcDialog::sigEOLCaliExtCfg)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InstallCalcDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_InstallCalcDialog.data,
    qt_meta_data_InstallCalcDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InstallCalcDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstallCalcDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstallCalcDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int InstallCalcDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void InstallCalcDialog::sigCfgRadar(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InstallCalcDialog::sigApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InstallCalcDialog::sigEOLCaliExtCfg(stInstallCalcExtCfg _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
