/****************************************************************************
** Meta object code from reading C++ file 'geelyprotocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../protocol/geelyprotocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geelyprotocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Analysis__Protocol__GEELYProtocol_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Analysis__Protocol__GEELYProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Analysis__Protocol__GEELYProtocol_t qt_meta_stringdata_Analysis__Protocol__GEELYProtocol = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Analysis::Protocol::GEELYProt..."
QT_MOC_LITERAL(1, 34, 12), // "sig_ShowInfo"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4), // "type"
QT_MOC_LITERAL(4, 53, 3) // "Str"

    },
    "Analysis::Protocol::GEELYProtocol\0"
    "sig_ShowInfo\0\0type\0Str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Analysis__Protocol__GEELYProtocol[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

       0        // eod
};

void Analysis::Protocol::GEELYProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GEELYProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_ShowInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GEELYProtocol::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GEELYProtocol::sig_ShowInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Analysis::Protocol::GEELYProtocol::staticMetaObject = { {
    QMetaObject::SuperData::link<IProtocol::staticMetaObject>(),
    qt_meta_stringdata_Analysis__Protocol__GEELYProtocol.data,
    qt_meta_data_Analysis__Protocol__GEELYProtocol,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Analysis::Protocol::GEELYProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Analysis::Protocol::GEELYProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Analysis__Protocol__GEELYProtocol.stringdata0))
        return static_cast<void*>(this);
    return IProtocol::qt_metacast(_clname);
}

int Analysis::Protocol::GEELYProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IProtocol::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Analysis::Protocol::GEELYProtocol::sig_ShowInfo(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
