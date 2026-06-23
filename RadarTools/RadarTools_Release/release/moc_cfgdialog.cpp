/****************************************************************************
** Meta object code from reading C++ file 'cfgdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../cfgdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cfgdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cfgDialog_t {
    QByteArrayData data[78];
    char stringdata0[1395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cfgDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cfgDialog_t qt_meta_stringdata_cfgDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "cfgDialog"
QT_MOC_LITERAL(1, 10, 36), // "sig_SetTargetFileSaveModeAndF..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "SaveEn"
QT_MOC_LITERAL(4, 55, 18), // "SaveTargetFileName"
QT_MOC_LITERAL(5, 74, 35), // "sig_SetLiderFileSaveModeAndFi..."
QT_MOC_LITERAL(6, 110, 15), // "sig_saveCanData"
QT_MOC_LITERAL(7, 126, 8), // "FileName"
QT_MOC_LITERAL(8, 135, 9), // "sigCfgStr"
QT_MOC_LITERAL(9, 145, 13), // "sigCanCmdSend"
QT_MOC_LITERAL(10, 159, 2), // "id"
QT_MOC_LITERAL(11, 162, 3), // "Ary"
QT_MOC_LITERAL(12, 166, 15), // "sigRadarUpgrade"
QT_MOC_LITERAL(13, 182, 13), // "sigGetRadarFW"
QT_MOC_LITERAL(14, 196, 12), // "sigGetSrMode"
QT_MOC_LITERAL(15, 209, 19), // "sigEnterFactoryMode"
QT_MOC_LITERAL(16, 229, 11), // "sigCfgRadar"
QT_MOC_LITERAL(17, 241, 4), // "type"
QT_MOC_LITERAL(18, 246, 22), // "sigSetStatiscsDistance"
QT_MOC_LITERAL(19, 269, 8), // "distance"
QT_MOC_LITERAL(20, 278, 14), // "sigStartAdcCfg"
QT_MOC_LITERAL(21, 293, 11), // "frameNumber"
QT_MOC_LITERAL(22, 305, 16), // "sigParseCANFiles"
QT_MOC_LITERAL(23, 322, 8), // "filename"
QT_MOC_LITERAL(24, 331, 19), // "sigStopParseCANFile"
QT_MOC_LITERAL(25, 351, 26), // "sigRadarCalculateDelayTime"
QT_MOC_LITERAL(26, 378, 7), // "uint8_t"
QT_MOC_LITERAL(27, 386, 1), // "t"
QT_MOC_LITERAL(28, 388, 23), // "sigSaveFileStateChanged"
QT_MOC_LITERAL(29, 412, 7), // "checked"
QT_MOC_LITERAL(30, 420, 24), // "on_cBox_saveFile_clicked"
QT_MOC_LITERAL(31, 445, 25), // "on_pButton_CanCmd_clicked"
QT_MOC_LITERAL(32, 471, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(33, 492, 16), // "QAbstractButton*"
QT_MOC_LITERAL(34, 509, 6), // "button"
QT_MOC_LITERAL(35, 516, 30), // "on_pButton_adminiCfgEn_clicked"
QT_MOC_LITERAL(36, 547, 25), // "on_pButtonUpgrade_clicked"
QT_MOC_LITERAL(37, 573, 24), // "on_pButtonFwRead_clicked"
QT_MOC_LITERAL(38, 598, 28), // "on_pButtonFactoryCfg_clicked"
QT_MOC_LITERAL(39, 627, 32), // "on_pButton_GetExtendInfo_clicked"
QT_MOC_LITERAL(40, 660, 27), // "on_pButton_CfgDebug_clicked"
QT_MOC_LITERAL(41, 688, 33), // "on_pButton_GetInstallInfo_cli..."
QT_MOC_LITERAL(42, 722, 28), // "on_pButton_CustomCfg_clicked"
QT_MOC_LITERAL(43, 751, 26), // "on_pButton_reFlash_clicked"
QT_MOC_LITERAL(44, 778, 30), // "on_pButton_accSelfCalc_clicked"
QT_MOC_LITERAL(45, 809, 24), // "on_pButton_CWcfg_clicked"
QT_MOC_LITERAL(46, 834, 25), // "on_pButton_CwRead_clicked"
QT_MOC_LITERAL(47, 860, 25), // "on_cBox_oldTestEn_clicked"
QT_MOC_LITERAL(48, 886, 22), // "on_pButton_cmd_clicked"
QT_MOC_LITERAL(49, 909, 23), // "on_pB_getScreen_clicked"
QT_MOC_LITERAL(50, 933, 34), // "on_cBox_Device_currentIndexCh..."
QT_MOC_LITERAL(51, 968, 35), // "on_cBox_setStatiscsDistance_c..."
QT_MOC_LITERAL(52, 1004, 24), // "on_pButtonADCCfg_clicked"
QT_MOC_LITERAL(53, 1029, 28), // "on_pushButtonCANFile_clicked"
QT_MOC_LITERAL(54, 1058, 33), // "on_pushButtonCANFileParse_cli..."
QT_MOC_LITERAL(55, 1092, 44), // "on_pushButtonRadarCalculateDe..."
QT_MOC_LITERAL(56, 1137, 15), // "slot_SaveFileOK"
QT_MOC_LITERAL(57, 1153, 6), // "rawCnt"
QT_MOC_LITERAL(58, 1160, 6), // "trkCnt"
QT_MOC_LITERAL(59, 1167, 14), // "slotlogTocfgUi"
QT_MOC_LITERAL(60, 1182, 14), // "slotGetRadarFW"
QT_MOC_LITERAL(61, 1197, 5), // "FWStr"
QT_MOC_LITERAL(62, 1203, 14), // "slotReadiniCfg"
QT_MOC_LITERAL(63, 1218, 11), // "slotSynInfo"
QT_MOC_LITERAL(64, 1230, 13), // "ShareMemory_t"
QT_MOC_LITERAL(65, 1244, 11), // "ShareMemory"
QT_MOC_LITERAL(66, 1256, 18), // "slotStrToCfgDialog"
QT_MOC_LITERAL(67, 1275, 3), // "str"
QT_MOC_LITERAL(68, 1279, 10), // "slotScreen"
QT_MOC_LITERAL(69, 1290, 10), // "slotcmdAck"
QT_MOC_LITERAL(70, 1301, 3), // "ack"
QT_MOC_LITERAL(71, 1305, 15), // "slot_Statistics"
QT_MOC_LITERAL(72, 1321, 15), // "TargetInfoFrame"
QT_MOC_LITERAL(73, 1337, 7), // "trkData"
QT_MOC_LITERAL(74, 1345, 10), // "slogCmdAck"
QT_MOC_LITERAL(75, 1356, 6), // "AckStr"
QT_MOC_LITERAL(76, 1363, 6), // "CMdStr"
QT_MOC_LITERAL(77, 1370, 24) // "slotParseCANFileFinished"

    },
    "cfgDialog\0sig_SetTargetFileSaveModeAndFileName\0"
    "\0SaveEn\0SaveTargetFileName\0"
    "sig_SetLiderFileSaveModeAndFileName\0"
    "sig_saveCanData\0FileName\0sigCfgStr\0"
    "sigCanCmdSend\0id\0Ary\0sigRadarUpgrade\0"
    "sigGetRadarFW\0sigGetSrMode\0"
    "sigEnterFactoryMode\0sigCfgRadar\0type\0"
    "sigSetStatiscsDistance\0distance\0"
    "sigStartAdcCfg\0frameNumber\0sigParseCANFiles\0"
    "filename\0sigStopParseCANFile\0"
    "sigRadarCalculateDelayTime\0uint8_t\0t\0"
    "sigSaveFileStateChanged\0checked\0"
    "on_cBox_saveFile_clicked\0"
    "on_pButton_CanCmd_clicked\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_pButton_adminiCfgEn_clicked\0"
    "on_pButtonUpgrade_clicked\0"
    "on_pButtonFwRead_clicked\0"
    "on_pButtonFactoryCfg_clicked\0"
    "on_pButton_GetExtendInfo_clicked\0"
    "on_pButton_CfgDebug_clicked\0"
    "on_pButton_GetInstallInfo_clicked\0"
    "on_pButton_CustomCfg_clicked\0"
    "on_pButton_reFlash_clicked\0"
    "on_pButton_accSelfCalc_clicked\0"
    "on_pButton_CWcfg_clicked\0"
    "on_pButton_CwRead_clicked\0"
    "on_cBox_oldTestEn_clicked\0"
    "on_pButton_cmd_clicked\0on_pB_getScreen_clicked\0"
    "on_cBox_Device_currentIndexChanged\0"
    "on_cBox_setStatiscsDistance_clicked\0"
    "on_pButtonADCCfg_clicked\0"
    "on_pushButtonCANFile_clicked\0"
    "on_pushButtonCANFileParse_clicked\0"
    "on_pushButtonRadarCalculateDelayTime_clicked\0"
    "slot_SaveFileOK\0rawCnt\0trkCnt\0"
    "slotlogTocfgUi\0slotGetRadarFW\0FWStr\0"
    "slotReadiniCfg\0slotSynInfo\0ShareMemory_t\0"
    "ShareMemory\0slotStrToCfgDialog\0str\0"
    "slotScreen\0slotcmdAck\0ack\0slot_Statistics\0"
    "TargetInfoFrame\0trkData\0slogCmdAck\0"
    "AckStr\0CMdStr\0slotParseCANFileFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cfgDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  269,    2, 0x06 /* Public */,
       5,    2,  274,    2, 0x06 /* Public */,
       6,    2,  279,    2, 0x06 /* Public */,
       8,    2,  284,    2, 0x06 /* Public */,
       9,    2,  289,    2, 0x06 /* Public */,
      12,    0,  294,    2, 0x06 /* Public */,
      13,    0,  295,    2, 0x06 /* Public */,
      14,    0,  296,    2, 0x06 /* Public */,
      15,    0,  297,    2, 0x06 /* Public */,
      16,    1,  298,    2, 0x06 /* Public */,
      18,    1,  301,    2, 0x06 /* Public */,
      20,    1,  304,    2, 0x06 /* Public */,
      22,    1,  307,    2, 0x06 /* Public */,
      24,    0,  310,    2, 0x06 /* Public */,
      25,    1,  311,    2, 0x06 /* Public */,
      28,    1,  314,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  317,    2, 0x08 /* Private */,
      31,    0,  320,    2, 0x08 /* Private */,
      32,    1,  321,    2, 0x08 /* Private */,
      35,    0,  324,    2, 0x08 /* Private */,
      36,    0,  325,    2, 0x08 /* Private */,
      37,    0,  326,    2, 0x08 /* Private */,
      38,    0,  327,    2, 0x08 /* Private */,
      39,    0,  328,    2, 0x08 /* Private */,
      40,    0,  329,    2, 0x08 /* Private */,
      41,    0,  330,    2, 0x08 /* Private */,
      42,    0,  331,    2, 0x08 /* Private */,
      43,    0,  332,    2, 0x08 /* Private */,
      44,    0,  333,    2, 0x08 /* Private */,
      45,    0,  334,    2, 0x08 /* Private */,
      46,    0,  335,    2, 0x08 /* Private */,
      47,    1,  336,    2, 0x08 /* Private */,
      48,    0,  339,    2, 0x08 /* Private */,
      49,    0,  340,    2, 0x08 /* Private */,
      50,    0,  341,    2, 0x08 /* Private */,
      51,    1,  342,    2, 0x08 /* Private */,
      52,    0,  345,    2, 0x08 /* Private */,
      53,    0,  346,    2, 0x08 /* Private */,
      54,    0,  347,    2, 0x08 /* Private */,
      55,    0,  348,    2, 0x08 /* Private */,
      56,    2,  349,    2, 0x0a /* Public */,
      59,    2,  354,    2, 0x0a /* Public */,
      60,    2,  359,    2, 0x0a /* Public */,
      62,    0,  364,    2, 0x0a /* Public */,
      63,    1,  365,    2, 0x0a /* Public */,
      66,    2,  368,    2, 0x0a /* Public */,
      68,    0,  373,    2, 0x0a /* Public */,
      69,    1,  374,    2, 0x0a /* Public */,
      71,    1,  377,    2, 0x0a /* Public */,
      74,    2,  380,    2, 0x0a /* Public */,
      77,    0,  385,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Bool,   29,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   57,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   61,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 64,   65,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,   17,   67,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, 0x80000000 | 72,   73,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   75,   76,
    QMetaType::Void,

       0        // eod
};

void cfgDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cfgDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_SetTargetFileSaveModeAndFileName((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sig_SetLiderFileSaveModeAndFileName((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->sig_saveCanData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->sigCfgStr((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 4: _t->sigCanCmdSend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 5: _t->sigRadarUpgrade(); break;
        case 6: _t->sigGetRadarFW(); break;
        case 7: _t->sigGetSrMode(); break;
        case 8: _t->sigEnterFactoryMode(); break;
        case 9: _t->sigCfgRadar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->sigSetStatiscsDistance((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->sigStartAdcCfg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sigParseCANFiles((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->sigStopParseCANFile(); break;
        case 14: _t->sigRadarCalculateDelayTime((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 15: _t->sigSaveFileStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_cBox_saveFile_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_pButton_CanCmd_clicked(); break;
        case 18: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 19: _t->on_pButton_adminiCfgEn_clicked(); break;
        case 20: _t->on_pButtonUpgrade_clicked(); break;
        case 21: _t->on_pButtonFwRead_clicked(); break;
        case 22: _t->on_pButtonFactoryCfg_clicked(); break;
        case 23: _t->on_pButton_GetExtendInfo_clicked(); break;
        case 24: _t->on_pButton_CfgDebug_clicked(); break;
        case 25: _t->on_pButton_GetInstallInfo_clicked(); break;
        case 26: _t->on_pButton_CustomCfg_clicked(); break;
        case 27: _t->on_pButton_reFlash_clicked(); break;
        case 28: _t->on_pButton_accSelfCalc_clicked(); break;
        case 29: _t->on_pButton_CWcfg_clicked(); break;
        case 30: _t->on_pButton_CwRead_clicked(); break;
        case 31: _t->on_cBox_oldTestEn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_pButton_cmd_clicked(); break;
        case 33: _t->on_pB_getScreen_clicked(); break;
        case 34: _t->on_cBox_Device_currentIndexChanged(); break;
        case 35: _t->on_cBox_setStatiscsDistance_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_pButtonADCCfg_clicked(); break;
        case 37: _t->on_pushButtonCANFile_clicked(); break;
        case 38: _t->on_pushButtonCANFileParse_clicked(); break;
        case 39: _t->on_pushButtonRadarCalculateDelayTime_clicked(); break;
        case 40: _t->slot_SaveFileOK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 41: _t->slotlogTocfgUi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 42: _t->slotGetRadarFW((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 43: _t->slotReadiniCfg(); break;
        case 44: _t->slotSynInfo((*reinterpret_cast< ShareMemory_t(*)>(_a[1]))); break;
        case 45: _t->slotStrToCfgDialog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 46: _t->slotScreen(); break;
        case 47: _t->slotcmdAck((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->slot_Statistics((*reinterpret_cast< TargetInfoFrame(*)>(_a[1]))); break;
        case 49: _t->slogCmdAck((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 50: _t->slotParseCANFileFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ShareMemory_t >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TargetInfoFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (cfgDialog::*)(bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sig_SetTargetFileSaveModeAndFileName)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sig_SetLiderFileSaveModeAndFileName)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sig_saveCanData)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(int , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigCfgStr)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(int , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigCanCmdSend)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigRadarUpgrade)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigGetRadarFW)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigGetSrMode)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigEnterFactoryMode)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigCfgRadar)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigSetStatiscsDistance)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigStartAdcCfg)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigParseCANFiles)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigStopParseCANFile)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigRadarCalculateDelayTime)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (cfgDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cfgDialog::sigSaveFileStateChanged)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cfgDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_cfgDialog.data,
    qt_meta_data_cfgDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cfgDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cfgDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cfgDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int cfgDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void cfgDialog::sig_SetTargetFileSaveModeAndFileName(bool _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cfgDialog::sig_SetLiderFileSaveModeAndFileName(bool _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cfgDialog::sig_saveCanData(bool _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cfgDialog::sigCfgStr(int _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void cfgDialog::sigCanCmdSend(int _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void cfgDialog::sigRadarUpgrade()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void cfgDialog::sigGetRadarFW()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void cfgDialog::sigGetSrMode()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void cfgDialog::sigEnterFactoryMode()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void cfgDialog::sigCfgRadar(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void cfgDialog::sigSetStatiscsDistance(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void cfgDialog::sigStartAdcCfg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void cfgDialog::sigParseCANFiles(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void cfgDialog::sigStopParseCANFile()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void cfgDialog::sigRadarCalculateDelayTime(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void cfgDialog::sigSaveFileStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
