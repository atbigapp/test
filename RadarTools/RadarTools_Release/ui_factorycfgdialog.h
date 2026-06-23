/********************************************************************************
** Form generated from reading UI file 'factorycfgdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTORYCFGDIALOG_H
#define UI_FACTORYCFGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_factoryCfgDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGroupBox *gBox_radarReg;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lEdit_regist;
    QLabel *label_2;
    QPushButton *pButtonRegistRead;
    QPushButton *pButtonRegistWrite;
    QGroupBox *gBox_caliparam;
    QGridLayout *gridLayout_7;
    QPushButton *pButtonCaliRead;
    QPushButton *pButtonCaliWrite;
    QLineEdit *lEdit_CaliDistance;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *lEdit_CaliPhase;
    QLabel *label_8;
    QLabel *label_5;
    QGroupBox *gBox_dsp;
    QGridLayout *gridLayout_10;
    QLineEdit *lineEdit;
    QLabel *label_26;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *gBox_version;
    QGridLayout *gridLayout_9;
    QLabel *label_16;
    QLineEdit *lEdit_V_SW;
    QLineEdit *lEdit_V_HW;
    QLabel *label_18;
    QLineEdit *lEdit_V_Mac;
    QLabel *label_17;
    QLabel *label_21;
    QLineEdit *lEdit_V_Cali;
    QLineEdit *lEdit_V_IP;
    QLabel *label_22;
    QLineEdit *lEdit_V_BBSN;
    QLineEdit *lEdit_V_RFSN;
    QLineEdit *lEdit_V_SN;
    QLineEdit *lEdit_V_Name;
    QLineEdit *lEdit_V_ID;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_20;
    QLabel *label_25;
    QLabel *label_19;
    QPushButton *pButtonVersionInfoRead;
    QPushButton *pButtonVersionInfoWrite;
    QGroupBox *gBox_other;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pButtonResetFlash;
    QTextEdit *textEdit_FlashLog;
    QCheckBox *cBox_resetFlashSelect;
    QPushButton *pButton_getFlashData;
    QGroupBox *gBox_radarSigParam;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pButtonRadarSigParamWrite;
    QPushButton *pButtonRadarSigParamRead;
    QPushButton *pButtonRadarSigParamShowClear;
    QPushButton *pButton_ParamExplain;
    QTableWidget *tWidgetCfg;

    void setupUi(QDialog *factoryCfgDialog)
    {
        if (factoryCfgDialog->objectName().isEmpty())
            factoryCfgDialog->setObjectName(QString::fromUtf8("factoryCfgDialog"));
        factoryCfgDialog->resize(785, 872);
        factoryCfgDialog->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(21, 21, 21);"));
        gridLayout = new QGridLayout(factoryCfgDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(factoryCfgDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(4);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gBox_radarReg = new QGroupBox(widget);
        gBox_radarReg->setObjectName(QString::fromUtf8("gBox_radarReg"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        gBox_radarReg->setFont(font);
        gBox_radarReg->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     border: 1.5px solid green;\n"
"     margin-top:2ex; \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     position: relative;\n"
"     left: 5px;\n"
"	 font: 16pt \"\351\273\221\344\275\223\";\n"
"}"));
        gridLayout_4 = new QGridLayout(gBox_radarReg);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(3);
        label_4 = new QLabel(gBox_radarReg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        label_4->setFont(font1);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 2);

        label = new QLabel(gBox_radarReg);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font1);

        gridLayout_4->addWidget(label, 2, 0, 1, 1);

        lEdit_regist = new QLineEdit(gBox_radarReg);
        lEdit_regist->setObjectName(QString::fromUtf8("lEdit_regist"));
        QFont font2;
        font2.setPointSize(11);
        lEdit_regist->setFont(font2);

        gridLayout_4->addWidget(lEdit_regist, 4, 0, 1, 2);

        label_2 = new QLabel(gBox_radarReg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        label_2->setFont(font3);

        gridLayout_4->addWidget(label_2, 2, 1, 1, 1);

        pButtonRegistRead = new QPushButton(gBox_radarReg);
        pButtonRegistRead->setObjectName(QString::fromUtf8("pButtonRegistRead"));
        pButtonRegistRead->setFont(font2);
        pButtonRegistRead->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(pButtonRegistRead, 5, 0, 1, 1);

        pButtonRegistWrite = new QPushButton(gBox_radarReg);
        pButtonRegistWrite->setObjectName(QString::fromUtf8("pButtonRegistWrite"));
        pButtonRegistWrite->setFont(font2);
        pButtonRegistWrite->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(pButtonRegistWrite, 5, 1, 1, 1);


        gridLayout_2->addWidget(gBox_radarReg, 2, 0, 1, 1);

        gBox_caliparam = new QGroupBox(widget);
        gBox_caliparam->setObjectName(QString::fromUtf8("gBox_caliparam"));
        gBox_caliparam->setFont(font);
        gBox_caliparam->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     border: 1.5px solid green;\n"
"     margin-top:2ex; \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     position: relative;\n"
"     left: 5px;\n"
"	 font: 16pt \"\351\273\221\344\275\223\";\n"
"}"));
        gridLayout_7 = new QGridLayout(gBox_caliparam);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(2);
        pButtonCaliRead = new QPushButton(gBox_caliparam);
        pButtonCaliRead->setObjectName(QString::fromUtf8("pButtonCaliRead"));
        QFont font4;
        font4.setPointSize(10);
        pButtonCaliRead->setFont(font4);
        pButtonCaliRead->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(pButtonCaliRead, 6, 1, 1, 1);

        pButtonCaliWrite = new QPushButton(gBox_caliparam);
        pButtonCaliWrite->setObjectName(QString::fromUtf8("pButtonCaliWrite"));
        pButtonCaliWrite->setFont(font4);
        pButtonCaliWrite->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(pButtonCaliWrite, 6, 2, 1, 1);

        lEdit_CaliDistance = new QLineEdit(gBox_caliparam);
        lEdit_CaliDistance->setObjectName(QString::fromUtf8("lEdit_CaliDistance"));

        gridLayout_7->addWidget(lEdit_CaliDistance, 5, 1, 1, 2);

        label_7 = new QLabel(gBox_caliparam);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_7->addWidget(label_7, 4, 1, 1, 2);

        label_6 = new QLabel(gBox_caliparam);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setWeight(75);
        label_6->setFont(font5);

        gridLayout_7->addWidget(label_6, 3, 1, 1, 1);

        lEdit_CaliPhase = new QLineEdit(gBox_caliparam);
        lEdit_CaliPhase->setObjectName(QString::fromUtf8("lEdit_CaliPhase"));

        gridLayout_7->addWidget(lEdit_CaliPhase, 2, 1, 1, 2);

        label_8 = new QLabel(gBox_caliparam);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 1, 1, 1, 2);

        label_5 = new QLabel(gBox_caliparam);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout_7->addWidget(label_5, 0, 1, 1, 1);


        gridLayout_2->addWidget(gBox_caliparam, 0, 0, 1, 1);

        gBox_dsp = new QGroupBox(widget);
        gBox_dsp->setObjectName(QString::fromUtf8("gBox_dsp"));
        gBox_dsp->setFont(font);
        gBox_dsp->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     border: 1.5px solid green;\n"
"     margin-top:2ex; \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     position: relative;\n"
"     left: 5px;\n"
"	 font: 16pt \"\351\273\221\344\275\223\";\n"
"}"));
        gridLayout_10 = new QGridLayout(gBox_dsp);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setVerticalSpacing(0);
        lineEdit = new QLineEdit(gBox_dsp);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);

        gridLayout_10->addWidget(lineEdit, 0, 1, 1, 1);

        label_26 = new QLabel(gBox_dsp);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_10->addWidget(label_26, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_2, 1, 0, 1, 2);

        label_26->raise();
        lineEdit->raise();

        gridLayout_2->addWidget(gBox_dsp, 4, 0, 1, 1);

        gBox_version = new QGroupBox(widget);
        gBox_version->setObjectName(QString::fromUtf8("gBox_version"));
        gBox_version->setFont(font);
        gBox_version->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     border: 1.5px solid green;\n"
"     margin-top:2ex; \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     position: relative;\n"
"     left: 5px;\n"
"	 font: 16pt \"\351\273\221\344\275\223\";\n"
"}"));
        gridLayout_9 = new QGridLayout(gBox_version);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(0);
        label_16 = new QLabel(gBox_version);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_9->addWidget(label_16, 0, 0, 1, 1);

        lEdit_V_SW = new QLineEdit(gBox_version);
        lEdit_V_SW->setObjectName(QString::fromUtf8("lEdit_V_SW"));
        lEdit_V_SW->setEnabled(true);

        gridLayout_9->addWidget(lEdit_V_SW, 6, 1, 1, 1);

        lEdit_V_HW = new QLineEdit(gBox_version);
        lEdit_V_HW->setObjectName(QString::fromUtf8("lEdit_V_HW"));
        lEdit_V_HW->setEnabled(true);
        lEdit_V_HW->setFrame(true);

        gridLayout_9->addWidget(lEdit_V_HW, 8, 1, 1, 1);

        label_18 = new QLabel(gBox_version);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_9->addWidget(label_18, 4, 0, 1, 1);

        lEdit_V_Mac = new QLineEdit(gBox_version);
        lEdit_V_Mac->setObjectName(QString::fromUtf8("lEdit_V_Mac"));
        lEdit_V_Mac->setEnabled(true);

        gridLayout_9->addWidget(lEdit_V_Mac, 10, 1, 1, 1);

        label_17 = new QLabel(gBox_version);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_9->addWidget(label_17, 2, 0, 1, 1);

        label_21 = new QLabel(gBox_version);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_9->addWidget(label_21, 10, 0, 1, 1);

        lEdit_V_Cali = new QLineEdit(gBox_version);
        lEdit_V_Cali->setObjectName(QString::fromUtf8("lEdit_V_Cali"));
        lEdit_V_Cali->setEnabled(true);

        gridLayout_9->addWidget(lEdit_V_Cali, 14, 1, 1, 1);

        lEdit_V_IP = new QLineEdit(gBox_version);
        lEdit_V_IP->setObjectName(QString::fromUtf8("lEdit_V_IP"));
        lEdit_V_IP->setEnabled(false);

        gridLayout_9->addWidget(lEdit_V_IP, 12, 1, 1, 1);

        label_22 = new QLabel(gBox_version);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_9->addWidget(label_22, 12, 0, 1, 1);

        lEdit_V_BBSN = new QLineEdit(gBox_version);
        lEdit_V_BBSN->setObjectName(QString::fromUtf8("lEdit_V_BBSN"));
        lEdit_V_BBSN->setEnabled(true);

        gridLayout_9->addWidget(lEdit_V_BBSN, 18, 1, 1, 1);

        lEdit_V_RFSN = new QLineEdit(gBox_version);
        lEdit_V_RFSN->setObjectName(QString::fromUtf8("lEdit_V_RFSN"));
        lEdit_V_RFSN->setEnabled(true);

        gridLayout_9->addWidget(lEdit_V_RFSN, 16, 1, 1, 1);

        lEdit_V_SN = new QLineEdit(gBox_version);
        lEdit_V_SN->setObjectName(QString::fromUtf8("lEdit_V_SN"));
        lEdit_V_SN->setEnabled(true);

        gridLayout_9->addWidget(lEdit_V_SN, 4, 1, 1, 1);

        lEdit_V_Name = new QLineEdit(gBox_version);
        lEdit_V_Name->setObjectName(QString::fromUtf8("lEdit_V_Name"));
        lEdit_V_Name->setEnabled(true);

        gridLayout_9->addWidget(lEdit_V_Name, 2, 1, 1, 1);

        lEdit_V_ID = new QLineEdit(gBox_version);
        lEdit_V_ID->setObjectName(QString::fromUtf8("lEdit_V_ID"));
        lEdit_V_ID->setEnabled(true);

        gridLayout_9->addWidget(lEdit_V_ID, 0, 1, 1, 1);

        label_23 = new QLabel(gBox_version);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_9->addWidget(label_23, 8, 0, 1, 1);

        label_24 = new QLabel(gBox_version);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_9->addWidget(label_24, 6, 0, 1, 1);

        label_20 = new QLabel(gBox_version);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_9->addWidget(label_20, 16, 0, 1, 1);

        label_25 = new QLabel(gBox_version);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_9->addWidget(label_25, 14, 0, 1, 1);

        label_19 = new QLabel(gBox_version);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_9->addWidget(label_19, 18, 0, 1, 1);

        pButtonVersionInfoRead = new QPushButton(gBox_version);
        pButtonVersionInfoRead->setObjectName(QString::fromUtf8("pButtonVersionInfoRead"));
        pButtonVersionInfoRead->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_9->addWidget(pButtonVersionInfoRead, 20, 0, 1, 1);

        pButtonVersionInfoWrite = new QPushButton(gBox_version);
        pButtonVersionInfoWrite->setObjectName(QString::fromUtf8("pButtonVersionInfoWrite"));
        pButtonVersionInfoWrite->setMaximumSize(QSize(125, 16777215));
        pButtonVersionInfoWrite->setBaseSize(QSize(0, 0));
        pButtonVersionInfoWrite->setLayoutDirection(Qt::LeftToRight);
        pButtonVersionInfoWrite->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_9->addWidget(pButtonVersionInfoWrite, 20, 1, 1, 1, Qt::AlignRight);


        gridLayout_2->addWidget(gBox_version, 3, 0, 1, 1);

        gBox_other = new QGroupBox(widget);
        gBox_other->setObjectName(QString::fromUtf8("gBox_other"));
        gBox_other->setFont(font);
        gBox_other->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"     border: 1.5px solid green;\n"
"     margin-top:2ex; \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     position: relative;\n"
"     left: 5px;\n"
"	 font: 16pt \"\351\273\221\344\275\223\";\n"
"}"));
        gridLayout_6 = new QGridLayout(gBox_other);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 0, 0, 1, 1);

        pButtonResetFlash = new QPushButton(gBox_other);
        pButtonResetFlash->setObjectName(QString::fromUtf8("pButtonResetFlash"));
        pButtonResetFlash->setFont(font3);
        pButtonResetFlash->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_6->addWidget(pButtonResetFlash, 1, 0, 1, 1);

        textEdit_FlashLog = new QTextEdit(gBox_other);
        textEdit_FlashLog->setObjectName(QString::fromUtf8("textEdit_FlashLog"));
        textEdit_FlashLog->setEnabled(true);
        textEdit_FlashLog->setStyleSheet(QString::fromUtf8("color: rgb(255, 100, 29);"));

        gridLayout_6->addWidget(textEdit_FlashLog, 3, 0, 1, 2);

        cBox_resetFlashSelect = new QCheckBox(gBox_other);
        cBox_resetFlashSelect->setObjectName(QString::fromUtf8("cBox_resetFlashSelect"));
        cBox_resetFlashSelect->setEnabled(true);
        cBox_resetFlashSelect->setChecked(true);

        gridLayout_6->addWidget(cBox_resetFlashSelect, 4, 0, 1, 1);

        pButton_getFlashData = new QPushButton(gBox_other);
        pButton_getFlashData->setObjectName(QString::fromUtf8("pButton_getFlashData"));
        pButton_getFlashData->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_6->addWidget(pButton_getFlashData, 2, 0, 1, 1);

        gridLayout_6->setRowStretch(0, 1);
        gridLayout_6->setColumnStretch(0, 1);

        gridLayout_2->addWidget(gBox_other, 5, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 1, 2, 1);

        gBox_radarSigParam = new QGroupBox(factoryCfgDialog);
        gBox_radarSigParam->setObjectName(QString::fromUtf8("gBox_radarSigParam"));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setWeight(75);
        font6.setStyleStrategy(QFont::PreferDefault);
        gBox_radarSigParam->setFont(font6);
        gBox_radarSigParam->setMouseTracking(true);
        gBox_radarSigParam->setFocusPolicy(Qt::NoFocus);
        gBox_radarSigParam->setContextMenuPolicy(Qt::NoContextMenu);
        gBox_radarSigParam->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background: white;\n"
"QGroupBox {\n"
"     border: 1.5px solid green;\n"
"     margin-top:2ex; \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     position: relative;\n"
"     left: 5px;\n"
"	 font: 16pt \"\351\273\221\344\275\223\";\n"
"}"));
        gBox_radarSigParam->setFlat(false);
        gBox_radarSigParam->setCheckable(false);
        gridLayout_3 = new QGridLayout(gBox_radarSigParam);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pButtonRadarSigParamWrite = new QPushButton(gBox_radarSigParam);
        pButtonRadarSigParamWrite->setObjectName(QString::fromUtf8("pButtonRadarSigParamWrite"));

        horizontalLayout->addWidget(pButtonRadarSigParamWrite);

        pButtonRadarSigParamRead = new QPushButton(gBox_radarSigParam);
        pButtonRadarSigParamRead->setObjectName(QString::fromUtf8("pButtonRadarSigParamRead"));

        horizontalLayout->addWidget(pButtonRadarSigParamRead);

        pButtonRadarSigParamShowClear = new QPushButton(gBox_radarSigParam);
        pButtonRadarSigParamShowClear->setObjectName(QString::fromUtf8("pButtonRadarSigParamShowClear"));

        horizontalLayout->addWidget(pButtonRadarSigParamShowClear);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        pButton_ParamExplain = new QPushButton(gBox_radarSigParam);
        pButton_ParamExplain->setObjectName(QString::fromUtf8("pButton_ParamExplain"));

        gridLayout_3->addWidget(pButton_ParamExplain, 2, 0, 1, 1);

        tWidgetCfg = new QTableWidget(gBox_radarSigParam);
        if (tWidgetCfg->columnCount() < 4)
            tWidgetCfg->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tWidgetCfg->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tWidgetCfg->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tWidgetCfg->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tWidgetCfg->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tWidgetCfg->rowCount() < 21)
            tWidgetCfg->setRowCount(21);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(10, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(11, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(12, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(13, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(14, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(15, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(16, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(17, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(18, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(19, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tWidgetCfg->setVerticalHeaderItem(20, __qtablewidgetitem24);
        tWidgetCfg->setObjectName(QString::fromUtf8("tWidgetCfg"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Bahnschrift"));
        font7.setPointSize(9);
        font7.setBold(true);
        font7.setWeight(75);
        tWidgetCfg->setFont(font7);
        tWidgetCfg->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tWidgetCfg->setAutoFillBackground(false);
        tWidgetCfg->setStyleSheet(QString::fromUtf8(""));
        tWidgetCfg->setFrameShadow(QFrame::Sunken);
        tWidgetCfg->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tWidgetCfg->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tWidgetCfg->setTabKeyNavigation(true);
        tWidgetCfg->setProperty("showDropIndicator", QVariant(true));
        tWidgetCfg->setTextElideMode(Qt::ElideRight);
        tWidgetCfg->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tWidgetCfg->setShowGrid(true);
        tWidgetCfg->setGridStyle(Qt::DashDotDotLine);
        tWidgetCfg->horizontalHeader()->setVisible(false);
        tWidgetCfg->horizontalHeader()->setCascadingSectionResizes(false);
        tWidgetCfg->horizontalHeader()->setMinimumSectionSize(25);
        tWidgetCfg->horizontalHeader()->setDefaultSectionSize(80);
        tWidgetCfg->horizontalHeader()->setHighlightSections(true);
        tWidgetCfg->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tWidgetCfg->horizontalHeader()->setStretchLastSection(false);

        gridLayout_3->addWidget(tWidgetCfg, 0, 0, 1, 1);


        gridLayout->addWidget(gBox_radarSigParam, 0, 0, 2, 1);

        gridLayout->setRowStretch(0, 5);
        gridLayout->setColumnStretch(0, 5);

        retranslateUi(factoryCfgDialog);

        QMetaObject::connectSlotsByName(factoryCfgDialog);
    } // setupUi

    void retranslateUi(QDialog *factoryCfgDialog)
    {
        factoryCfgDialog->setWindowTitle(QCoreApplication::translate("factoryCfgDialog", "Factory Config", nullptr));
        gBox_radarReg->setTitle(QCoreApplication::translate("factoryCfgDialog", "register", nullptr));
        label_4->setText(QCoreApplication::translate("factoryCfgDialog", "\346\240\274\345\274\217\357\274\2100x\357\274\211\357\274\23201 06 3C", nullptr));
        label->setText(QCoreApplication::translate("factoryCfgDialog", "\345\257\204\345\255\230\345\231\250\350\257\273\345\206\231\357\274\232 ", nullptr));
        label_2->setText(QCoreApplication::translate("factoryCfgDialog", "\346\250\241\345\235\227 \345\257\204\345\255\230\345\231\250 \345\200\274", nullptr));
        pButtonRegistRead->setText(QCoreApplication::translate("factoryCfgDialog", "\350\257\273", nullptr));
        pButtonRegistWrite->setText(QCoreApplication::translate("factoryCfgDialog", "\345\206\231", nullptr));
        gBox_caliparam->setTitle(QCoreApplication::translate("factoryCfgDialog", "radarCaliParam", nullptr));
        pButtonCaliRead->setText(QCoreApplication::translate("factoryCfgDialog", "\350\257\273", nullptr));
        pButtonCaliWrite->setText(QCoreApplication::translate("factoryCfgDialog", "\345\206\231", nullptr));
        label_7->setText(QCoreApplication::translate("factoryCfgDialog", "[\344\276\213\357\274\2320  4.96  8.42  12.4  9  12]", nullptr));
        label_6->setText(QCoreApplication::translate("factoryCfgDialog", "Distance: ", nullptr));
        label_8->setText(QCoreApplication::translate("factoryCfgDialog", "[\344\276\213\357\274\2320  0.36  -9.32  -20.8 10 20]", nullptr));
        label_5->setText(QCoreApplication::translate("factoryCfgDialog", "Phase: ", nullptr));
        gBox_dsp->setTitle(QCoreApplication::translate("factoryCfgDialog", "\346\225\260\346\215\256\345\244\204\347\220\206\345\217\202\346\225\260", nullptr));
        lineEdit->setText(QCoreApplication::translate("factoryCfgDialog", "\346\232\202\344\270\215\345\217\257\347\224\250", nullptr));
        label_26->setText(QCoreApplication::translate("factoryCfgDialog", "\350\275\246\351\201\223\345\256\275\345\272\246\357\274\232m", nullptr));
        gBox_version->setTitle(QCoreApplication::translate("factoryCfgDialog", "\347\211\210\346\234\254\345\217\202\346\225\260", nullptr));
        label_16->setText(QCoreApplication::translate("factoryCfgDialog", "ID:", nullptr));
        label_18->setText(QCoreApplication::translate("factoryCfgDialog", "SN:", nullptr));
        label_17->setText(QCoreApplication::translate("factoryCfgDialog", "Name:", nullptr));
        label_21->setText(QCoreApplication::translate("factoryCfgDialog", "MAC:", nullptr));
        label_22->setText(QCoreApplication::translate("factoryCfgDialog", "IP:", nullptr));
        label_23->setText(QCoreApplication::translate("factoryCfgDialog", "HW:", nullptr));
        label_24->setText(QCoreApplication::translate("factoryCfgDialog", "SW:", nullptr));
        label_20->setText(QCoreApplication::translate("factoryCfgDialog", "RF SN:", nullptr));
        label_25->setText(QCoreApplication::translate("factoryCfgDialog", "CALI:", nullptr));
        label_19->setText(QCoreApplication::translate("factoryCfgDialog", "BB SN:", nullptr));
        pButtonVersionInfoRead->setText(QCoreApplication::translate("factoryCfgDialog", "\350\257\273", nullptr));
        pButtonVersionInfoWrite->setText(QCoreApplication::translate("factoryCfgDialog", "\345\206\231", nullptr));
        gBox_other->setTitle(QCoreApplication::translate("factoryCfgDialog", "\345\205\266\344\273\226", nullptr));
        pButtonResetFlash->setText(QCoreApplication::translate("factoryCfgDialog", "\351\207\215\347\275\256FLASH\351\205\215\347\275\256\345\214\272\345\237\237", nullptr));
        textEdit_FlashLog->setHtml(QCoreApplication::translate("factoryCfgDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[\346\263\250\346\204\217]\357\274\232Flash \351\207\215\347\275\256\344\274\232\346\223\246\351\231\244Flash\351\205\215\347\275\256,\344\270\215\345\217\257\351\200\206,\350\257\267\350\260\250\346\205\216\346\223\215\344\275\234\343\200\202</p></body></html>", nullptr));
        cBox_resetFlashSelect->setText(QCoreApplication::translate("factoryCfgDialog", "\344\277\235\347\225\231\347\211\210\346\234\254\345\217\202\346\225\260\344\277\241\346\201\257\345\222\214\346\240\241\345\207\206\344\277\241\346\201\257", nullptr));
        pButton_getFlashData->setText(QCoreApplication::translate("factoryCfgDialog", "\350\257\273\345\217\226Flash\351\205\215\347\275\256\346\225\260\346\215\256", nullptr));
        gBox_radarSigParam->setTitle(QCoreApplication::translate("factoryCfgDialog", "radarSigParam", nullptr));
        pButtonRadarSigParamWrite->setText(QCoreApplication::translate("factoryCfgDialog", "\345\206\231", nullptr));
        pButtonRadarSigParamRead->setText(QCoreApplication::translate("factoryCfgDialog", "\350\257\273", nullptr));
        pButtonRadarSigParamShowClear->setText(QCoreApplication::translate("factoryCfgDialog", "\346\230\276\347\244\272\346\270\205\351\231\244\351\233\266", nullptr));
        pButton_ParamExplain->setText(QCoreApplication::translate("factoryCfgDialog", "\345\217\202\346\225\260\350\247\243\351\207\212", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tWidgetCfg->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("factoryCfgDialog", "\345\200\2741", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tWidgetCfg->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("factoryCfgDialog", "\345\200\2742", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tWidgetCfg->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("factoryCfgDialog", "\345\200\2743", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tWidgetCfg->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("factoryCfgDialog", "\345\200\2744", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tWidgetCfg->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("factoryCfgDialog", "Tx Ch", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tWidgetCfg->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("factoryCfgDialog", "Start Freq", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tWidgetCfg->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("factoryCfgDialog", "BandWidth", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tWidgetCfg->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("factoryCfgDialog", "Up Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tWidgetCfg->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("factoryCfgDialog", "Down Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tWidgetCfg->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("factoryCfgDialog", "Idle Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tWidgetCfg->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("factoryCfgDialog", "Pre Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tWidgetCfg->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("factoryCfgDialog", "Post Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tWidgetCfg->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("factoryCfgDialog", "LO Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tWidgetCfg->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("factoryCfgDialog", "Tx1 Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tWidgetCfg->verticalHeaderItem(10);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("factoryCfgDialog", "Tx2 Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tWidgetCfg->verticalHeaderItem(11);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("factoryCfgDialog", "Rx1 Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tWidgetCfg->verticalHeaderItem(12);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("factoryCfgDialog", "Rx2 Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tWidgetCfg->verticalHeaderItem(13);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("factoryCfgDialog", "Rx3 Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tWidgetCfg->verticalHeaderItem(14);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("factoryCfgDialog", "Rx4 Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tWidgetCfg->verticalHeaderItem(15);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("factoryCfgDialog", "Tx SW En", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tWidgetCfg->verticalHeaderItem(16);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("factoryCfgDialog", "FixVehicleEn", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tWidgetCfg->verticalHeaderItem(17);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("factoryCfgDialog", "HistThrdInit", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tWidgetCfg->verticalHeaderItem(18);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("factoryCfgDialog", "HistThrdFactor", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tWidgetCfg->verticalHeaderItem(19);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("factoryCfgDialog", "CfarThrd", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tWidgetCfg->verticalHeaderItem(20);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("factoryCfgDialog", "LHPFilter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class factoryCfgDialog: public Ui_factoryCfgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTORYCFGDIALOG_H
