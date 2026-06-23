/****************************************************************************
** Meta object code from reading C++ file 'calibrationform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../uds/calibrationform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibrationform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalibrationForm_t {
    QByteArrayData data[20];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalibrationForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalibrationForm_t qt_meta_stringdata_CalibrationForm = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CalibrationForm"
QT_MOC_LITERAL(1, 16, 5), // "start"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "stop"
QT_MOC_LITERAL(4, 28, 7), // "readDTC"
QT_MOC_LITERAL(5, 36, 8), // "clearDTC"
QT_MOC_LITERAL(6, 45, 7), // "message"
QT_MOC_LITERAL(7, 53, 18), // "calibrationStarted"
QT_MOC_LITERAL(8, 72, 19), // "calibrationFinished"
QT_MOC_LITERAL(9, 92, 2), // "ok"
QT_MOC_LITERAL(10, 95, 26), // "on_pushButtonStart_clicked"
QT_MOC_LITERAL(11, 122, 25), // "on_pushButtonStop_clicked"
QT_MOC_LITERAL(12, 148, 43), // "on_comboBoxChannelIndex_curre..."
QT_MOC_LITERAL(13, 192, 5), // "index"
QT_MOC_LITERAL(14, 198, 27), // "on_checkBoxCAN_stateChanged"
QT_MOC_LITERAL(15, 226, 4), // "arg1"
QT_MOC_LITERAL(16, 231, 46), // "on_comboBoxCalibrationType_cu..."
QT_MOC_LITERAL(17, 278, 28), // "on_pushButtonReadDTC_clicked"
QT_MOC_LITERAL(18, 307, 29), // "on_pushButtonClearDTC_clicked"
QT_MOC_LITERAL(19, 337, 30) // "on_pushButtonClearText_clicked"

    },
    "CalibrationForm\0start\0\0stop\0readDTC\0"
    "clearDTC\0message\0calibrationStarted\0"
    "calibrationFinished\0ok\0"
    "on_pushButtonStart_clicked\0"
    "on_pushButtonStop_clicked\0"
    "on_comboBoxChannelIndex_currentIndexChanged\0"
    "index\0on_checkBoxCAN_stateChanged\0"
    "arg1\0on_comboBoxCalibrationType_currentIndexChanged\0"
    "on_pushButtonReadDTC_clicked\0"
    "on_pushButtonClearDTC_clicked\0"
    "on_pushButtonClearText_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalibrationForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   93,    2, 0x08 /* Private */,
       7,    0,   96,    2, 0x08 /* Private */,
       8,    1,   97,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalibrationForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalibrationForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: _t->readDTC(); break;
        case 3: _t->clearDTC(); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->calibrationStarted(); break;
        case 6: _t->calibrationFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonStart_clicked(); break;
        case 8: _t->on_pushButtonStop_clicked(); break;
        case 9: _t->on_comboBoxChannelIndex_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_checkBoxCAN_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_comboBoxCalibrationType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_pushButtonReadDTC_clicked(); break;
        case 13: _t->on_pushButtonClearDTC_clicked(); break;
        case 14: _t->on_pushButtonClearText_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CalibrationForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalibrationForm::start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CalibrationForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalibrationForm::stop)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CalibrationForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalibrationForm::readDTC)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CalibrationForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalibrationForm::clearDTC)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalibrationForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CalibrationForm.data,
    qt_meta_data_CalibrationForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalibrationForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalibrationForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalibrationForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CalibrationForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void CalibrationForm::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CalibrationForm::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CalibrationForm::readDTC()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CalibrationForm::clearDTC()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
