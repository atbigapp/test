/********************************************************************************
** Form generated from reading UI file 'vehicleinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEINFO_H
#define UI_VEHICLEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vehicleInfo
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QLineEdit *lEditLB;
    QLabel *label_4;
    QLineEdit *lEditRB;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *lEditYacc;
    QLabel *label_6;
    QLineEdit *lEditXacc;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *lEditSpeed;
    QLabel *label_11;
    QLineEdit *lEditActualGear;
    QLabel *label_8;
    QLineEdit *lEditYawRate;
    QLabel *label_9;
    QLineEdit *lEditSteeringAngle;
    QLabel *label_10;
    QLineEdit *lEditSteeringAngleSpd;
    QGridLayout *gridLayout_3;
    QLineEdit *lEditRF;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lEditLF;
    QGridLayout *gridLayout_7;
    QLabel *label_IMU_RollAngle;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_22;
    QLabel *label_PitchAngle;
    QLineEdit *lineEdit_IMU_Z_Accel;
    QLineEdit *lineEdit_IMU_X_AngularRate;
    QLineEdit *lineEdit_IMU_Y_AngularRate;
    QLineEdit *lineEdit_IMU_RollAngle;
    QLineEdit *lineEdit_IMU_PitchAngle;
    QLineEdit *lineEdit_IMU_YawAngle;
    QFormLayout *formLayout;
    QLabel *label_12;
    QLineEdit *lEObjValid;
    QLabel *label_13;
    QLineEdit *lEDxTarObj;
    QLabel *label_14;
    QLineEdit *lEAccDecReq;
    QLabel *label_15;
    QLineEdit *lEAccDecCtrlReq;
    QLabel *label_16;
    QLineEdit *lETimeOutCnt;
    QGridLayout *gridLayout_8;
    QLabel *label_FCWWarningID;
    QLabel *label_20;
    QLabel *label_23;
    QLineEdit *lineEdit_FCWWarningID;
    QLineEdit *lineEdit_FCWWarningLevel;
    QLineEdit *lineEdit_FCWWarningTTC;

    void setupUi(QDialog *vehicleInfo)
    {
        if (vehicleInfo->objectName().isEmpty())
            vehicleInfo->setObjectName(QString::fromUtf8("vehicleInfo"));
        vehicleInfo->resize(516, 458);
        vehicleInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);\n"
"color: rgb(238, 238, 238);\n"
"\n"
""));
        gridLayout_4 = new QGridLayout(vehicleInfo);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget = new QWidget(vehicleInfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        lEditLB = new QLineEdit(widget);
        lEditLB->setObjectName(QString::fromUtf8("lEditLB"));

        gridLayout_5->addWidget(lEditLB, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        lEditRB = new QLineEdit(widget);
        lEditRB->setObjectName(QString::fromUtf8("lEditRB"));

        gridLayout_5->addWidget(lEditRB, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lEditYacc = new QLineEdit(widget);
        lEditYacc->setObjectName(QString::fromUtf8("lEditYacc"));

        gridLayout_2->addWidget(lEditYacc, 0, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        lEditXacc = new QLineEdit(widget);
        lEditXacc->setObjectName(QString::fromUtf8("lEditXacc"));

        gridLayout_2->addWidget(lEditXacc, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        lEditSpeed = new QLineEdit(widget);
        lEditSpeed->setObjectName(QString::fromUtf8("lEditSpeed"));

        gridLayout->addWidget(lEditSpeed, 0, 1, 1, 3);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        lEditActualGear = new QLineEdit(widget);
        lEditActualGear->setObjectName(QString::fromUtf8("lEditActualGear"));

        gridLayout->addWidget(lEditActualGear, 1, 1, 1, 3);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 2);

        lEditYawRate = new QLineEdit(widget);
        lEditYawRate->setObjectName(QString::fromUtf8("lEditYawRate"));

        gridLayout->addWidget(lEditYawRate, 2, 2, 1, 2);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 2);

        lEditSteeringAngle = new QLineEdit(widget);
        lEditSteeringAngle->setObjectName(QString::fromUtf8("lEditSteeringAngle"));

        gridLayout->addWidget(lEditSteeringAngle, 3, 2, 1, 2);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 3);

        lEditSteeringAngleSpd = new QLineEdit(widget);
        lEditSteeringAngleSpd->setObjectName(QString::fromUtf8("lEditSteeringAngleSpd"));

        gridLayout->addWidget(lEditSteeringAngleSpd, 4, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lEditRF = new QLineEdit(widget);
        lEditRF->setObjectName(QString::fromUtf8("lEditRF"));

        gridLayout_3->addWidget(lEditRF, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        lEditLF = new QLineEdit(widget);
        lEditLF->setObjectName(QString::fromUtf8("lEditLF"));

        gridLayout_3->addWidget(lEditLF, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_IMU_RollAngle = new QLabel(widget);
        label_IMU_RollAngle->setObjectName(QString::fromUtf8("label_IMU_RollAngle"));

        gridLayout_7->addWidget(label_IMU_RollAngle, 3, 0, 1, 1);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 2, 0, 1, 1);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_7->addWidget(label_18, 5, 0, 1, 1);

        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_7->addWidget(label_19, 0, 0, 1, 1);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_7->addWidget(label_22, 1, 0, 1, 1);

        label_PitchAngle = new QLabel(widget);
        label_PitchAngle->setObjectName(QString::fromUtf8("label_PitchAngle"));

        gridLayout_7->addWidget(label_PitchAngle, 4, 0, 1, 1);

        lineEdit_IMU_Z_Accel = new QLineEdit(widget);
        lineEdit_IMU_Z_Accel->setObjectName(QString::fromUtf8("lineEdit_IMU_Z_Accel"));

        gridLayout_7->addWidget(lineEdit_IMU_Z_Accel, 0, 1, 1, 1);

        lineEdit_IMU_X_AngularRate = new QLineEdit(widget);
        lineEdit_IMU_X_AngularRate->setObjectName(QString::fromUtf8("lineEdit_IMU_X_AngularRate"));

        gridLayout_7->addWidget(lineEdit_IMU_X_AngularRate, 1, 1, 1, 1);

        lineEdit_IMU_Y_AngularRate = new QLineEdit(widget);
        lineEdit_IMU_Y_AngularRate->setObjectName(QString::fromUtf8("lineEdit_IMU_Y_AngularRate"));

        gridLayout_7->addWidget(lineEdit_IMU_Y_AngularRate, 2, 1, 1, 1);

        lineEdit_IMU_RollAngle = new QLineEdit(widget);
        lineEdit_IMU_RollAngle->setObjectName(QString::fromUtf8("lineEdit_IMU_RollAngle"));

        gridLayout_7->addWidget(lineEdit_IMU_RollAngle, 3, 1, 1, 1);

        lineEdit_IMU_PitchAngle = new QLineEdit(widget);
        lineEdit_IMU_PitchAngle->setObjectName(QString::fromUtf8("lineEdit_IMU_PitchAngle"));

        gridLayout_7->addWidget(lineEdit_IMU_PitchAngle, 4, 1, 1, 1);

        lineEdit_IMU_YawAngle = new QLineEdit(widget);
        lineEdit_IMU_YawAngle->setObjectName(QString::fromUtf8("lineEdit_IMU_YawAngle"));

        gridLayout_7->addWidget(lineEdit_IMU_YawAngle, 5, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_7, 4, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_12);

        lEObjValid = new QLineEdit(widget);
        lEObjValid->setObjectName(QString::fromUtf8("lEObjValid"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lEObjValid);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_13);

        lEDxTarObj = new QLineEdit(widget);
        lEDxTarObj->setObjectName(QString::fromUtf8("lEDxTarObj"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lEDxTarObj);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_14);

        lEAccDecReq = new QLineEdit(widget);
        lEAccDecReq->setObjectName(QString::fromUtf8("lEAccDecReq"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lEAccDecReq);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_15);

        lEAccDecCtrlReq = new QLineEdit(widget);
        lEAccDecCtrlReq->setObjectName(QString::fromUtf8("lEAccDecCtrlReq"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lEAccDecCtrlReq);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_16);

        lETimeOutCnt = new QLineEdit(widget);
        lETimeOutCnt->setObjectName(QString::fromUtf8("lETimeOutCnt"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lETimeOutCnt);


        gridLayout_6->addLayout(formLayout, 3, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_FCWWarningID = new QLabel(widget);
        label_FCWWarningID->setObjectName(QString::fromUtf8("label_FCWWarningID"));

        gridLayout_8->addWidget(label_FCWWarningID, 0, 0, 1, 1);

        label_20 = new QLabel(widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_8->addWidget(label_20, 1, 0, 1, 1);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_8->addWidget(label_23, 2, 0, 1, 1);

        lineEdit_FCWWarningID = new QLineEdit(widget);
        lineEdit_FCWWarningID->setObjectName(QString::fromUtf8("lineEdit_FCWWarningID"));

        gridLayout_8->addWidget(lineEdit_FCWWarningID, 0, 1, 1, 1);

        lineEdit_FCWWarningLevel = new QLineEdit(widget);
        lineEdit_FCWWarningLevel->setObjectName(QString::fromUtf8("lineEdit_FCWWarningLevel"));

        gridLayout_8->addWidget(lineEdit_FCWWarningLevel, 1, 1, 1, 1);

        lineEdit_FCWWarningTTC = new QLineEdit(widget);
        lineEdit_FCWWarningTTC->setObjectName(QString::fromUtf8("lineEdit_FCWWarningTTC"));

        gridLayout_8->addWidget(lineEdit_FCWWarningTTC, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_8, 4, 1, 1, 1);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(vehicleInfo);

        QMetaObject::connectSlotsByName(vehicleInfo);
    } // setupUi

    void retranslateUi(QDialog *vehicleInfo)
    {
        vehicleInfo->setWindowTitle(QCoreApplication::translate("vehicleInfo", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("vehicleInfo", "\345\267\246\345\220\216\350\275\256\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("vehicleInfo", "\345\217\263\345\220\216\350\275\256\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("vehicleInfo", "\347\272\265\345\220\221\345\212\240\351\200\237\345\272\246\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("vehicleInfo", "\346\250\252\345\220\221\345\212\240\351\200\237\345\272\246\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("vehicleInfo", "\350\207\252\350\275\246\351\200\237\345\272\246\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("vehicleInfo", "\350\207\252\350\275\246\346\214\241\344\275\215\344\277\241\345\217\267\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("vehicleInfo", "\350\207\252\350\275\246\346\250\252\346\221\206\350\247\222\351\200\237\345\272\246\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("vehicleInfo", "\350\207\252\350\275\246\346\226\271\345\220\221\347\233\230\350\247\222\345\272\246\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("vehicleInfo", "\350\207\252\350\275\246\346\226\271\345\220\221\347\233\230\350\247\222\351\200\237\345\272\246\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("vehicleInfo", "\345\267\246\345\211\215\350\275\256\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("vehicleInfo", "\345\217\263\345\211\215\350\275\256\357\274\232", nullptr));
        label_IMU_RollAngle->setText(QCoreApplication::translate("vehicleInfo", "IMU_RollAngle", nullptr));
        label_17->setText(QCoreApplication::translate("vehicleInfo", "IMU_Y_AngularRate", nullptr));
        label_18->setText(QCoreApplication::translate("vehicleInfo", "IMU_YawAngle", nullptr));
        label_19->setText(QCoreApplication::translate("vehicleInfo", "IMU_Z_Accel", nullptr));
        label_22->setText(QCoreApplication::translate("vehicleInfo", "IMU_X_AngularRate", nullptr));
        label_PitchAngle->setText(QCoreApplication::translate("vehicleInfo", "IMU_PitchAngle", nullptr));
        label_12->setText(QCoreApplication::translate("vehicleInfo", "ObjValid:", nullptr));
        label_13->setText(QCoreApplication::translate("vehicleInfo", "dxTarObj:", nullptr));
        label_14->setText(QCoreApplication::translate("vehicleInfo", "ACC_DecToStopReq:", nullptr));
        label_15->setText(QCoreApplication::translate("vehicleInfo", "AEBDecCtrlRequest :", nullptr));
        label_16->setText(QCoreApplication::translate("vehicleInfo", "timeOutCnt:", nullptr));
        label_FCWWarningID->setText(QCoreApplication::translate("vehicleInfo", "FCWWarningID", nullptr));
        label_20->setText(QCoreApplication::translate("vehicleInfo", "FCWWarningLevel", nullptr));
        label_23->setText(QCoreApplication::translate("vehicleInfo", "FCWWarningTTC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vehicleInfo: public Ui_vehicleInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINFO_H
