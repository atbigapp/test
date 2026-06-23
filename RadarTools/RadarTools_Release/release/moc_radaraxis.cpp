/****************************************************************************
** Meta object code from reading C++ file 'radaraxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../radaraxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radaraxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_radarAxis_t {
    QByteArrayData data[72];
    char stringdata0[1145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_radarAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_radarAxis_t qt_meta_stringdata_radarAxis = {
    {
QT_MOC_LITERAL(0, 0, 9), // "radarAxis"
QT_MOC_LITERAL(1, 10, 12), // "sig_SortInfo"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "idx"
QT_MOC_LITERAL(4, 28, 3), // "str"
QT_MOC_LITERAL(5, 32, 10), // "sig_NoData"
QT_MOC_LITERAL(6, 43, 20), // "sig_SetCarStatistics"
QT_MOC_LITERAL(7, 64, 5), // "count"
QT_MOC_LITERAL(8, 70, 18), // "SigDisplayFrameCnt"
QT_MOC_LITERAL(9, 89, 3), // "cnt"
QT_MOC_LITERAL(10, 93, 12), // "sig_TTcPEtOK"
QT_MOC_LITERAL(11, 106, 3), // "TTc"
QT_MOC_LITERAL(12, 110, 3), // "PEt"
QT_MOC_LITERAL(13, 114, 17), // "SigSaveFrameCount"
QT_MOC_LITERAL(14, 132, 3), // "raw"
QT_MOC_LITERAL(15, 136, 3), // "Tra"
QT_MOC_LITERAL(16, 140, 11), // "measCounter"
QT_MOC_LITERAL(17, 152, 14), // "sig_FullPoints"
QT_MOC_LITERAL(18, 167, 15), // "fullPointsCount"
QT_MOC_LITERAL(19, 183, 20), // "sigPointCloudToggled"
QT_MOC_LITERAL(20, 204, 2), // "on"
QT_MOC_LITERAL(21, 207, 10), // "sigOpenAdc"
QT_MOC_LITERAL(22, 218, 18), // "sigOpenCalibration"
QT_MOC_LITERAL(23, 237, 15), // "sigOpenPlayback"
QT_MOC_LITERAL(24, 253, 20), // "sigToggleClassicMode"
QT_MOC_LITERAL(25, 274, 14), // "sigSendWaveCmd"
QT_MOC_LITERAL(26, 289, 4), // "mode"
QT_MOC_LITERAL(27, 294, 30), // "Slot_SysTimerUpdateAndshowTime"
QT_MOC_LITERAL(28, 325, 18), // "slot_TargetDisplay"
QT_MOC_LITERAL(29, 344, 15), // "TargetInfoFrame"
QT_MOC_LITERAL(30, 360, 7), // "trkData"
QT_MOC_LITERAL(31, 368, 7), // "rawData"
QT_MOC_LITERAL(32, 376, 22), // "slot_TrueTargetDisplay"
QT_MOC_LITERAL(33, 399, 8), // "trueData"
QT_MOC_LITERAL(34, 408, 18), // "slotShowTargetList"
QT_MOC_LITERAL(35, 427, 4), // "type"
QT_MOC_LITERAL(36, 432, 10), // "TargetList"
QT_MOC_LITERAL(37, 443, 22), // "slot_ObjListInfoSelect"
QT_MOC_LITERAL(38, 466, 5), // "state"
QT_MOC_LITERAL(39, 472, 22), // "slot_customContextMenu"
QT_MOC_LITERAL(40, 495, 1), // "a"
QT_MOC_LITERAL(41, 497, 29), // "slot_SetCarStatisticsDistance"
QT_MOC_LITERAL(42, 527, 8), // "distance"
QT_MOC_LITERAL(43, 536, 15), // "slotTrueObjInfo"
QT_MOC_LITERAL(44, 552, 13), // "stTrueObjInfo"
QT_MOC_LITERAL(45, 566, 11), // "trueObjInfo"
QT_MOC_LITERAL(46, 578, 5), // "delay"
QT_MOC_LITERAL(47, 584, 18), // "slotWaveModeResult"
QT_MOC_LITERAL(48, 603, 2), // "ok"
QT_MOC_LITERAL(49, 606, 7), // "ackText"
QT_MOC_LITERAL(50, 614, 24), // "on_checkBox_area_clicked"
QT_MOC_LITERAL(51, 639, 7), // "checked"
QT_MOC_LITERAL(52, 647, 19), // "on_cBoxTest_clicked"
QT_MOC_LITERAL(53, 667, 17), // "on_cBox50_clicked"
QT_MOC_LITERAL(54, 685, 26), // "on_cBoxBrigeFilter_clicked"
QT_MOC_LITERAL(55, 712, 18), // "on_cBoxFcw_clicked"
QT_MOC_LITERAL(56, 731, 32), // "on_lEAngleOffset_editingFinished"
QT_MOC_LITERAL(57, 764, 25), // "on_cBShowCar_stateChanged"
QT_MOC_LITERAL(58, 790, 4), // "arg1"
QT_MOC_LITERAL(59, 795, 34), // "on_pushButtonTrackSettings_cl..."
QT_MOC_LITERAL(60, 830, 32), // "on_pushButtonRawSettings_clicked"
QT_MOC_LITERAL(61, 863, 42), // "on_checkBoxMatchFlagLessThan3..."
QT_MOC_LITERAL(62, 906, 28), // "on_checkBoxLingering_clicked"
QT_MOC_LITERAL(63, 935, 22), // "on_checkBoxTag_clicked"
QT_MOC_LITERAL(64, 958, 29), // "on_checkBoxDisplayACC_clicked"
QT_MOC_LITERAL(65, 988, 24), // "on_btnPointCloud_toggled"
QT_MOC_LITERAL(66, 1013, 17), // "on_btnAdc_clicked"
QT_MOC_LITERAL(67, 1031, 19), // "on_btnCalib_clicked"
QT_MOC_LITERAL(68, 1051, 22), // "on_btnPlayback_clicked"
QT_MOC_LITERAL(69, 1074, 25), // "on_btnClassicMode_clicked"
QT_MOC_LITERAL(70, 1100, 21), // "on_btnFarWave_clicked"
QT_MOC_LITERAL(71, 1122, 22) // "on_btnNearWave_clicked"

    },
    "radarAxis\0sig_SortInfo\0\0idx\0str\0"
    "sig_NoData\0sig_SetCarStatistics\0count\0"
    "SigDisplayFrameCnt\0cnt\0sig_TTcPEtOK\0"
    "TTc\0PEt\0SigSaveFrameCount\0raw\0Tra\0"
    "measCounter\0sig_FullPoints\0fullPointsCount\0"
    "sigPointCloudToggled\0on\0sigOpenAdc\0"
    "sigOpenCalibration\0sigOpenPlayback\0"
    "sigToggleClassicMode\0sigSendWaveCmd\0"
    "mode\0Slot_SysTimerUpdateAndshowTime\0"
    "slot_TargetDisplay\0TargetInfoFrame\0"
    "trkData\0rawData\0slot_TrueTargetDisplay\0"
    "trueData\0slotShowTargetList\0type\0"
    "TargetList\0slot_ObjListInfoSelect\0"
    "state\0slot_customContextMenu\0a\0"
    "slot_SetCarStatisticsDistance\0distance\0"
    "slotTrueObjInfo\0stTrueObjInfo\0trueObjInfo\0"
    "delay\0slotWaveModeResult\0ok\0ackText\0"
    "on_checkBox_area_clicked\0checked\0"
    "on_cBoxTest_clicked\0on_cBox50_clicked\0"
    "on_cBoxBrigeFilter_clicked\0"
    "on_cBoxFcw_clicked\0on_lEAngleOffset_editingFinished\0"
    "on_cBShowCar_stateChanged\0arg1\0"
    "on_pushButtonTrackSettings_clicked\0"
    "on_pushButtonRawSettings_clicked\0"
    "on_checkBoxMatchFlagLessThan3_stateChanged\0"
    "on_checkBoxLingering_clicked\0"
    "on_checkBoxTag_clicked\0"
    "on_checkBoxDisplayACC_clicked\0"
    "on_btnPointCloud_toggled\0on_btnAdc_clicked\0"
    "on_btnCalib_clicked\0on_btnPlayback_clicked\0"
    "on_btnClassicMode_clicked\0"
    "on_btnFarWave_clicked\0on_btnNearWave_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_radarAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  224,    2, 0x06 /* Public */,
       5,    0,  229,    2, 0x06 /* Public */,
       6,    1,  230,    2, 0x06 /* Public */,
       8,    1,  233,    2, 0x06 /* Public */,
      10,    2,  236,    2, 0x06 /* Public */,
      13,    3,  241,    2, 0x06 /* Public */,
      17,    1,  248,    2, 0x06 /* Public */,
      19,    1,  251,    2, 0x06 /* Public */,
      21,    0,  254,    2, 0x06 /* Public */,
      22,    0,  255,    2, 0x06 /* Public */,
      23,    0,  256,    2, 0x06 /* Public */,
      24,    0,  257,    2, 0x06 /* Public */,
      25,    1,  258,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  261,    2, 0x0a /* Public */,
      28,    2,  262,    2, 0x0a /* Public */,
      32,    1,  267,    2, 0x0a /* Public */,
      34,    2,  270,    2, 0x0a /* Public */,
      37,    1,  275,    2, 0x0a /* Public */,
      39,    1,  278,    2, 0x0a /* Public */,
      41,    1,  281,    2, 0x0a /* Public */,
      43,    2,  284,    2, 0x0a /* Public */,
      47,    3,  289,    2, 0x0a /* Public */,
      50,    1,  296,    2, 0x08 /* Private */,
      52,    1,  299,    2, 0x08 /* Private */,
      53,    1,  302,    2, 0x08 /* Private */,
      54,    1,  305,    2, 0x08 /* Private */,
      55,    1,  308,    2, 0x08 /* Private */,
      56,    0,  311,    2, 0x08 /* Private */,
      57,    1,  312,    2, 0x08 /* Private */,
      59,    0,  315,    2, 0x08 /* Private */,
      60,    0,  316,    2, 0x08 /* Private */,
      61,    1,  317,    2, 0x08 /* Private */,
      62,    1,  320,    2, 0x08 /* Private */,
      63,    1,  323,    2, 0x08 /* Private */,
      64,    1,  326,    2, 0x08 /* Private */,
      65,    1,  329,    2, 0x08 /* Private */,
      66,    0,  332,    2, 0x08 /* Private */,
      67,    0,  333,    2, 0x08 /* Private */,
      68,    0,  334,    2, 0x08 /* Private */,
      69,    0,  335,    2, 0x08 /* Private */,
      70,    0,  336,    2, 0x08 /* Private */,
      71,    0,  337,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULong,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   26,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,   30,   31,
    QMetaType::Void, 0x80000000 | 29,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   35,   36,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::QPoint,   40,
    QMetaType::Void, QMetaType::Float,   42,
    QMetaType::Void, 0x80000000 | 44, QMetaType::Bool,   45,   46,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::QString,   48,   26,   49,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void radarAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<radarAxis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_SortInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sig_NoData(); break;
        case 2: _t->sig_SetCarStatistics((*reinterpret_cast< ulong(*)>(_a[1]))); break;
        case 3: _t->SigDisplayFrameCnt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sig_TTcPEtOK((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 5: _t->SigSaveFrameCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->sig_FullPoints((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sigPointCloudToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->sigOpenAdc(); break;
        case 9: _t->sigOpenCalibration(); break;
        case 10: _t->sigOpenPlayback(); break;
        case 11: _t->sigToggleClassicMode(); break;
        case 12: _t->sigSendWaveCmd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->Slot_SysTimerUpdateAndshowTime(); break;
        case 14: _t->slot_TargetDisplay((*reinterpret_cast< TargetInfoFrame(*)>(_a[1])),(*reinterpret_cast< TargetInfoFrame(*)>(_a[2]))); break;
        case 15: _t->slot_TrueTargetDisplay((*reinterpret_cast< TargetInfoFrame(*)>(_a[1]))); break;
        case 16: _t->slotShowTargetList((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->slot_ObjListInfoSelect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->slot_customContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 19: _t->slot_SetCarStatisticsDistance((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->slotTrueObjInfo((*reinterpret_cast< stTrueObjInfo(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->slotWaveModeResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 22: _t->on_checkBox_area_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_cBoxTest_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->on_cBox50_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_cBoxBrigeFilter_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_cBoxFcw_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_lEAngleOffset_editingFinished(); break;
        case 28: _t->on_cBShowCar_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_pushButtonTrackSettings_clicked(); break;
        case 30: _t->on_pushButtonRawSettings_clicked(); break;
        case 31: _t->on_checkBoxMatchFlagLessThan3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_checkBoxLingering_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_checkBoxTag_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->on_checkBoxDisplayACC_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_btnPointCloud_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_btnAdc_clicked(); break;
        case 37: _t->on_btnCalib_clicked(); break;
        case 38: _t->on_btnPlayback_clicked(); break;
        case 39: _t->on_btnClassicMode_clicked(); break;
        case 40: _t->on_btnFarWave_clicked(); break;
        case 41: _t->on_btnNearWave_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TargetInfoFrame >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TargetInfoFrame >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< stTrueObjInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (radarAxis::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sig_SortInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sig_NoData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)(unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sig_SetCarStatistics)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::SigDisplayFrameCnt)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sig_TTcPEtOK)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::SigSaveFrameCount)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sig_FullPoints)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sigPointCloudToggled)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sigOpenAdc)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sigOpenCalibration)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sigOpenPlayback)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sigToggleClassicMode)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (radarAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&radarAxis::sigSendWaveCmd)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject radarAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_radarAxis.data,
    qt_meta_data_radarAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *radarAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *radarAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_radarAxis.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int radarAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void radarAxis::sig_SortInfo(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void radarAxis::sig_NoData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void radarAxis::sig_SetCarStatistics(unsigned long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void radarAxis::SigDisplayFrameCnt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void radarAxis::sig_TTcPEtOK(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void radarAxis::SigSaveFrameCount(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void radarAxis::sig_FullPoints(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void radarAxis::sigPointCloudToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void radarAxis::sigOpenAdc()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void radarAxis::sigOpenCalibration()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void radarAxis::sigOpenPlayback()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void radarAxis::sigToggleClassicMode()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void radarAxis::sigSendWaveCmd(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
