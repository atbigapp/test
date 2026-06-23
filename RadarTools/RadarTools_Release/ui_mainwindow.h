/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClassicMode;
    QAction *actionGuide;
    QAction *actionCamera;
    QAction *actionExit;
    QAction *action_Firmware_update;
    QAction *actionFcwInfo;
    QAction *actionSystem_Time;
    QAction *actionWrite_flash;
    QAction *actionRadarInfo;
    QAction *actionAfterSaleCalibration;
    QAction *actionARS410Settings;
    QAction *actionHeSaiLider;
    QAction *actionexitFactoryMode;
    QAction *actionSelfCalibrateion;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *ptEdit_logo;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_Fcwid;
    QTextEdit *tEditlogo;
    QWidget *widget_CM;
    QGridLayout *gridLayout;
    QLabel *lb_CanBaudRate;
    QPushButton *pb_installCalc;
    QPushButton *pb_CohesionClose;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxCAN2ARS410;
    QPushButton *pb_CohesionOpen;
    QComboBox *cBox_widge;
    QWidget *wdget_RadarId;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBoxWorkMode;
    QLabel *label_radarid;
    QComboBox *cBox_RadarId;
    QCheckBox *checkBoxBOSCHLong;
    QWidget *widget_8;
    QCheckBox *checkBoxDebug;
    QComboBox *cBoxProtocol;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_canType;
    QComboBox *cB_CanCh;
    QComboBox *comboBox_CanRate;
    QComboBox *comboBox_CanDataRate;
    QPushButton *pushButton_Start;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpinBox *spinBoxRadarChannel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBoxRTKChannel;
    QLabel *lb_Scene;
    QLabel *lb_measCounter;
    QLabel *lb_RdrStsLatency;
    QLabel *lb_FullPointsCount;
    QMenuBar *menuBar;
    QMenu *menuFunction;
    QMenu *menuSettings;
    QMenu *menuView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(512, 620);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionClassicMode = new QAction(MainWindow);
        actionClassicMode->setObjectName(QString::fromUtf8("actionClassicMode"));
        actionClassicMode->setCheckable(true);
        actionGuide = new QAction(MainWindow);
        actionGuide->setObjectName(QString::fromUtf8("actionGuide"));
        actionCamera = new QAction(MainWindow);
        actionCamera->setObjectName(QString::fromUtf8("actionCamera"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        action_Firmware_update = new QAction(MainWindow);
        action_Firmware_update->setObjectName(QString::fromUtf8("action_Firmware_update"));
        actionFcwInfo = new QAction(MainWindow);
        actionFcwInfo->setObjectName(QString::fromUtf8("actionFcwInfo"));
        actionFcwInfo->setCheckable(true);
        actionSystem_Time = new QAction(MainWindow);
        actionSystem_Time->setObjectName(QString::fromUtf8("actionSystem_Time"));
        actionSystem_Time->setCheckable(true);
        actionWrite_flash = new QAction(MainWindow);
        actionWrite_flash->setObjectName(QString::fromUtf8("actionWrite_flash"));
        actionRadarInfo = new QAction(MainWindow);
        actionRadarInfo->setObjectName(QString::fromUtf8("actionRadarInfo"));
        actionAfterSaleCalibration = new QAction(MainWindow);
        actionAfterSaleCalibration->setObjectName(QString::fromUtf8("actionAfterSaleCalibration"));
        actionARS410Settings = new QAction(MainWindow);
        actionARS410Settings->setObjectName(QString::fromUtf8("actionARS410Settings"));
        actionHeSaiLider = new QAction(MainWindow);
        actionHeSaiLider->setObjectName(QString::fromUtf8("actionHeSaiLider"));
        actionexitFactoryMode = new QAction(MainWindow);
        actionexitFactoryMode->setObjectName(QString::fromUtf8("actionexitFactoryMode"));
        actionSelfCalibrateion = new QAction(MainWindow);
        actionSelfCalibrateion->setObjectName(QString::fromUtf8("actionSelfCalibrateion"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ptEdit_logo = new QPlainTextEdit(centralWidget);
        ptEdit_logo->setObjectName(QString::fromUtf8("ptEdit_logo"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        ptEdit_logo->setFont(font);
        ptEdit_logo->setStyleSheet(QString::fromUtf8("color: rgb(255, 11, 11);"));
        ptEdit_logo->setFrameShape(QFrame::NoFrame);
        ptEdit_logo->setFrameShadow(QFrame::Raised);
        ptEdit_logo->setLineWidth(0);
        ptEdit_logo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ptEdit_logo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ptEdit_logo->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        ptEdit_logo->setLineWrapMode(QPlainTextEdit::NoWrap);
        ptEdit_logo->setReadOnly(true);
        ptEdit_logo->setTabStopWidth(0);
        ptEdit_logo->setCursorWidth(0);
        ptEdit_logo->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout->addWidget(ptEdit_logo);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("color: rgb(255, 11, 11);"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);

        horizontalLayout_2->addWidget(label_5);

        label_Fcwid = new QLabel(widget);
        label_Fcwid->setObjectName(QString::fromUtf8("label_Fcwid"));
        label_Fcwid->setFont(font1);
        label_Fcwid->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_Fcwid);

        horizontalLayout_2->setStretch(1, 1);

        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        tEditlogo = new QTextEdit(centralWidget);
        tEditlogo->setObjectName(QString::fromUtf8("tEditlogo"));

        verticalLayout->addWidget(tEditlogo);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(2, 1);

        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        widget_CM = new QWidget(centralWidget);
        widget_CM->setObjectName(QString::fromUtf8("widget_CM"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_CM->sizePolicy().hasHeightForWidth());
        widget_CM->setSizePolicy(sizePolicy1);
        widget_CM->setMinimumSize(QSize(0, 0));
        widget_CM->setMaximumSize(QSize(1300, 1300));
        widget_CM->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget_CM);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(1);
        lb_CanBaudRate = new QLabel(widget_CM);
        lb_CanBaudRate->setObjectName(QString::fromUtf8("lb_CanBaudRate"));
        lb_CanBaudRate->setFont(font1);
        lb_CanBaudRate->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lb_CanBaudRate, 17, 4, 1, 1);

        pb_installCalc = new QPushButton(widget_CM);
        pb_installCalc->setObjectName(QString::fromUtf8("pb_installCalc"));
        pb_installCalc->setEnabled(true);
        pb_installCalc->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pb_installCalc, 6, 4, 1, 1);

        pb_CohesionClose = new QPushButton(widget_CM);
        pb_CohesionClose->setObjectName(QString::fromUtf8("pb_CohesionClose"));
        pb_CohesionClose->setEnabled(true);
        pb_CohesionClose->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pb_CohesionClose, 5, 4, 1, 1);

        widget_2 = new QWidget(widget_CM);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_7 = new QHBoxLayout(widget_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, -1, -1);
        comboBox = new QComboBox(widget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setMinimumSize(QSize(0, 25));
        comboBox->setMaximumSize(QSize(100, 32));

        horizontalLayout_7->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        checkBoxCAN2ARS410 = new QCheckBox(widget_CM);
        checkBoxCAN2ARS410->setObjectName(QString::fromUtf8("checkBoxCAN2ARS410"));
        checkBoxCAN2ARS410->setEnabled(true);
        checkBoxCAN2ARS410->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBoxCAN2ARS410->setChecked(true);

        gridLayout->addWidget(checkBoxCAN2ARS410, 11, 4, 1, 1);

        pb_CohesionOpen = new QPushButton(widget_CM);
        pb_CohesionOpen->setObjectName(QString::fromUtf8("pb_CohesionOpen"));
        pb_CohesionOpen->setEnabled(true);
        pb_CohesionOpen->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pb_CohesionOpen, 4, 4, 1, 1);

        cBox_widge = new QComboBox(widget_CM);
        cBox_widge->addItem(QString());
        cBox_widge->addItem(QString());
        cBox_widge->addItem(QString());
        cBox_widge->addItem(QString());
        cBox_widge->addItem(QString());
        cBox_widge->addItem(QString());
        cBox_widge->setObjectName(QString::fromUtf8("cBox_widge"));
        cBox_widge->setEnabled(true);

        gridLayout->addWidget(cBox_widge, 3, 4, 1, 1);

        wdget_RadarId = new QWidget(widget_CM);
        wdget_RadarId->setObjectName(QString::fromUtf8("wdget_RadarId"));
        horizontalLayout_6 = new QHBoxLayout(wdget_RadarId);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, -1, -1);
        comboBoxWorkMode = new QComboBox(wdget_RadarId);
        comboBoxWorkMode->addItem(QString());
        comboBoxWorkMode->addItem(QString());
        comboBoxWorkMode->addItem(QString());
        comboBoxWorkMode->addItem(QString());
        comboBoxWorkMode->addItem(QString());
        comboBoxWorkMode->addItem(QString());
        comboBoxWorkMode->setObjectName(QString::fromUtf8("comboBoxWorkMode"));
        comboBoxWorkMode->setEnabled(true);

        horizontalLayout_6->addWidget(comboBoxWorkMode);

        label_radarid = new QLabel(wdget_RadarId);
        label_radarid->setObjectName(QString::fromUtf8("label_radarid"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_radarid->setFont(font2);
        label_radarid->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_radarid->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_radarid);

        cBox_RadarId = new QComboBox(wdget_RadarId);
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->addItem(QString());
        cBox_RadarId->setObjectName(QString::fromUtf8("cBox_RadarId"));
        cBox_RadarId->setEnabled(true);

        horizontalLayout_6->addWidget(cBox_RadarId);

        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 1);

        gridLayout->addWidget(wdget_RadarId, 17, 0, 1, 1);

        checkBoxBOSCHLong = new QCheckBox(widget_CM);
        checkBoxBOSCHLong->setObjectName(QString::fromUtf8("checkBoxBOSCHLong"));
        checkBoxBOSCHLong->setEnabled(true);
        checkBoxBOSCHLong->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(checkBoxBOSCHLong, 14, 4, 1, 1);

        widget_8 = new QWidget(widget_CM);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));

        gridLayout->addWidget(widget_8, 1, 1, 1, 1);

        checkBoxDebug = new QCheckBox(widget_CM);
        checkBoxDebug->setObjectName(QString::fromUtf8("checkBoxDebug"));
        checkBoxDebug->setEnabled(true);
        checkBoxDebug->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(checkBoxDebug, 10, 4, 1, 1);

        cBoxProtocol = new QComboBox(widget_CM);
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->addItem(QString());
        cBoxProtocol->setObjectName(QString::fromUtf8("cBoxProtocol"));
        cBoxProtocol->setEnabled(true);

        gridLayout->addWidget(cBoxProtocol, 7, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        comboBox_canType = new QComboBox(widget_CM);
        comboBox_canType->addItem(QString());
        comboBox_canType->addItem(QString());
        comboBox_canType->addItem(QString());
        comboBox_canType->addItem(QString());
        comboBox_canType->addItem(QString());
        comboBox_canType->setObjectName(QString::fromUtf8("comboBox_canType"));
        comboBox_canType->setEnabled(true);
        comboBox_canType->setMaximumSize(QSize(80, 35));

        horizontalLayout_3->addWidget(comboBox_canType);

        cB_CanCh = new QComboBox(widget_CM);
        cB_CanCh->addItem(QString());
        cB_CanCh->addItem(QString());
        cB_CanCh->setObjectName(QString::fromUtf8("cB_CanCh"));
        cB_CanCh->setEnabled(true);
        cB_CanCh->setMinimumSize(QSize(0, 25));
        cB_CanCh->setMaximumSize(QSize(1000000, 35));

        horizontalLayout_3->addWidget(cB_CanCh);

        comboBox_CanRate = new QComboBox(widget_CM);
        comboBox_CanRate->addItem(QString());
        comboBox_CanRate->addItem(QString());
        comboBox_CanRate->setObjectName(QString::fromUtf8("comboBox_CanRate"));
        comboBox_CanRate->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_CanRate->sizePolicy().hasHeightForWidth());
        comboBox_CanRate->setSizePolicy(sizePolicy3);
        comboBox_CanRate->setMinimumSize(QSize(0, 25));
        comboBox_CanRate->setMaximumSize(QSize(16777215, 35));
        comboBox_CanRate->setFont(font1);

        horizontalLayout_3->addWidget(comboBox_CanRate);

        comboBox_CanDataRate = new QComboBox(widget_CM);
        comboBox_CanDataRate->addItem(QString());
        comboBox_CanDataRate->addItem(QString());
        comboBox_CanDataRate->addItem(QString());
        comboBox_CanDataRate->addItem(QString());
        comboBox_CanDataRate->setObjectName(QString::fromUtf8("comboBox_CanDataRate"));
        comboBox_CanDataRate->setEnabled(true);
        comboBox_CanDataRate->setMaximumSize(QSize(40, 35));

        horizontalLayout_3->addWidget(comboBox_CanDataRate);

        pushButton_Start = new QPushButton(widget_CM);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));
        pushButton_Start->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_Start->sizePolicy().hasHeightForWidth());
        pushButton_Start->setSizePolicy(sizePolicy4);
        pushButton_Start->setMaximumSize(QSize(16777215, 35));
        pushButton_Start->setFont(font2);
        pushButton_Start->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_3->addWidget(pushButton_Start);

        horizontalLayout_3->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget_CM);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label);

        spinBoxRadarChannel = new QSpinBox(widget_CM);
        spinBoxRadarChannel->setObjectName(QString::fromUtf8("spinBoxRadarChannel"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(spinBoxRadarChannel->sizePolicy().hasHeightForWidth());
        spinBoxRadarChannel->setSizePolicy(sizePolicy6);
        spinBoxRadarChannel->setMinimum(1);
        spinBoxRadarChannel->setMaximum(8);

        horizontalLayout_4->addWidget(spinBoxRadarChannel);


        gridLayout->addLayout(horizontalLayout_4, 8, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget_CM);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);

        spinBoxRTKChannel = new QSpinBox(widget_CM);
        spinBoxRTKChannel->setObjectName(QString::fromUtf8("spinBoxRTKChannel"));
        sizePolicy6.setHeightForWidth(spinBoxRTKChannel->sizePolicy().hasHeightForWidth());
        spinBoxRTKChannel->setSizePolicy(sizePolicy6);
        spinBoxRTKChannel->setMinimum(1);
        spinBoxRTKChannel->setMaximum(8);

        horizontalLayout->addWidget(spinBoxRTKChannel);


        gridLayout->addLayout(horizontalLayout, 9, 4, 1, 1);

        lb_Scene = new QLabel(widget_CM);
        lb_Scene->setObjectName(QString::fromUtf8("lb_Scene"));
        lb_Scene->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lb_Scene, 3, 0, 1, 1);

        lb_measCounter = new QLabel(widget_CM);
        lb_measCounter->setObjectName(QString::fromUtf8("lb_measCounter"));
        QFont font3;
        font3.setPointSize(10);
        lb_measCounter->setFont(font3);
        lb_measCounter->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lb_measCounter->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lb_measCounter, 4, 0, 9, 1);

        lb_RdrStsLatency = new QLabel(widget_CM);
        lb_RdrStsLatency->setObjectName(QString::fromUtf8("lb_RdrStsLatency"));

        gridLayout->addWidget(lb_RdrStsLatency, 14, 0, 1, 1);

        lb_FullPointsCount = new QLabel(widget_CM);
        lb_FullPointsCount->setObjectName(QString::fromUtf8("lb_FullPointsCount"));

        gridLayout->addWidget(lb_FullPointsCount, 15, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        gridLayout_2->addWidget(widget_CM, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 512, 21));
        menuFunction = new QMenu(menuBar);
        menuFunction->setObjectName(QString::fromUtf8("menuFunction"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(comboBox_CanRate, pushButton_Start);
        QWidget::setTabOrder(pushButton_Start, cBox_RadarId);
        QWidget::setTabOrder(cBox_RadarId, ptEdit_logo);

        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuFunction->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFunction->addAction(actionAfterSaleCalibration);
        menuFunction->addAction(actionexitFactoryMode);
        menuFunction->addAction(actionSelfCalibrateion);
        menuSettings->addAction(actionARS410Settings);
        menuSettings->addAction(actionHeSaiLider);
        menuView->addAction(actionClassicMode);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered(bool)), MainWindow, SLOT(close()));

        comboBox->setCurrentIndex(0);
        cBoxProtocol->setCurrentIndex(0);
        cB_CanCh->setCurrentIndex(0);
        comboBox_CanRate->setCurrentIndex(0);
        comboBox_CanDataRate->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClassicMode->setText(QCoreApplication::translate("MainWindow", "\347\273\217\345\205\270\346\250\241\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        actionClassicMode->setToolTip(QCoreApplication::translate("MainWindow", "\345\213\276\351\200\211\345\220\216\351\232\220\350\227\217 radarAxis \351\241\266\351\203\250 4 \346\214\211\351\222\256\345\267\245\345\205\267\346\240\217\357\274\214\345\233\236\345\210\260\345\216\237\345\247\213\344\270\244\344\272\244\344\272\222\347\225\214\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGuide->setText(QCoreApplication::translate("MainWindow", "Guide", nullptr));
        actionCamera->setText(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        action_Firmware_update->setText(QCoreApplication::translate("MainWindow", "Radar Firmware update", nullptr));
        actionFcwInfo->setText(QCoreApplication::translate("MainWindow", "FcwInfo", nullptr));
        actionSystem_Time->setText(QCoreApplication::translate("MainWindow", "System Time", nullptr));
        actionWrite_flash->setText(QCoreApplication::translate("MainWindow", "Write Flash", nullptr));
        actionRadarInfo->setText(QCoreApplication::translate("MainWindow", "RadarInfo", nullptr));
        actionAfterSaleCalibration->setText(QCoreApplication::translate("MainWindow", "\345\224\256\345\220\216/\344\270\213\347\272\277\346\240\207\345\256\232", nullptr));
        actionARS410Settings->setText(QCoreApplication::translate("MainWindow", "ARS410\351\205\215\347\275\256", nullptr));
        actionHeSaiLider->setText(QCoreApplication::translate("MainWindow", "\347\246\276\350\265\233\346\277\200\345\205\211\351\233\267\350\276\276", nullptr));
        actionexitFactoryMode->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\345\267\245\345\216\202\346\250\241\345\274\217", nullptr));
        actionSelfCalibrateion->setText(QCoreApplication::translate("MainWindow", "\350\207\252\346\240\207\345\256\232", nullptr));
        ptEdit_logo->setPlainText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "FcwID :", nullptr));
        label_Fcwid->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        lb_CanBaudRate->setText(QCoreApplication::translate("MainWindow", "500K", nullptr));
        pb_installCalc->setText(QCoreApplication::translate("MainWindow", "\345\256\211\350\243\205\346\240\207\345\256\232", nullptr));
        pb_CohesionClose->setText(QCoreApplication::translate("MainWindow", "\350\201\232\347\261\273\345\205\263\351\227\255", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Config", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "showAxis", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203ADC\351\207\207\351\233\206", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\347\233\270\346\234\272", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\347\246\276\350\265\233", nullptr));

        checkBoxCAN2ARS410->setText(QCoreApplication::translate("MainWindow", "CAN2 ARS410", nullptr));
        pb_CohesionOpen->setText(QCoreApplication::translate("MainWindow", "\350\201\232\347\261\273\345\274\200\345\220\257", nullptr));
        cBox_widge->setItemText(0, QString());
        cBox_widge->setItemText(1, QCoreApplication::translate("MainWindow", "\346\211\251\345\261\225\344\277\241\346\201\257", nullptr));
        cBox_widge->setItemText(2, QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\345\221\275\344\273\244", nullptr));
        cBox_widge->setItemText(3, QCoreApplication::translate("MainWindow", "\347\234\237\345\200\274\344\277\241\346\201\257", nullptr));
        cBox_widge->setItemText(4, QCoreApplication::translate("MainWindow", "\350\275\246\350\272\253\344\277\241\346\201\257", nullptr));
        cBox_widge->setItemText(5, QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\345\210\206\346\236\220", nullptr));

        comboBoxWorkMode->setItemText(0, QCoreApplication::translate("MainWindow", "NA", nullptr));
        comboBoxWorkMode->setItemText(1, QCoreApplication::translate("MainWindow", "STATIC", nullptr));
        comboBoxWorkMode->setItemText(2, QCoreApplication::translate("MainWindow", "MRR", nullptr));
        comboBoxWorkMode->setItemText(3, QCoreApplication::translate("MainWindow", "STATIC", nullptr));
        comboBoxWorkMode->setItemText(4, QCoreApplication::translate("MainWindow", "PARKING", nullptr));
        comboBoxWorkMode->setItemText(5, QCoreApplication::translate("MainWindow", "AUTO", nullptr));

        label_radarid->setText(QCoreApplication::translate("MainWindow", "Radar ID:", nullptr));
        cBox_RadarId->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        cBox_RadarId->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        cBox_RadarId->setItemText(2, QCoreApplication::translate("MainWindow", "9", nullptr));
        cBox_RadarId->setItemText(3, QCoreApplication::translate("MainWindow", "A", nullptr));
        cBox_RadarId->setItemText(4, QCoreApplication::translate("MainWindow", "B", nullptr));
        cBox_RadarId->setItemText(5, QCoreApplication::translate("MainWindow", "C", nullptr));
        cBox_RadarId->setItemText(6, QCoreApplication::translate("MainWindow", "D", nullptr));
        cBox_RadarId->setItemText(7, QCoreApplication::translate("MainWindow", "E", nullptr));
        cBox_RadarId->setItemText(8, QCoreApplication::translate("MainWindow", "F", nullptr));
        cBox_RadarId->setItemText(9, QCoreApplication::translate("MainWindow", "4", nullptr));
        cBox_RadarId->setItemText(10, QCoreApplication::translate("MainWindow", "5", nullptr));
        cBox_RadarId->setItemText(11, QCoreApplication::translate("MainWindow", "6", nullptr));
        cBox_RadarId->setItemText(12, QCoreApplication::translate("MainWindow", "7", nullptr));

        checkBoxBOSCHLong->setText(QCoreApplication::translate("MainWindow", "BOSCH\351\225\277\350\267\235\347\246\273", nullptr));
        checkBoxDebug->setText(QCoreApplication::translate("MainWindow", "DEBUG", nullptr));
        cBoxProtocol->setItemText(0, QCoreApplication::translate("MainWindow", "\346\211\277\346\263\260\345\215\217\350\256\256V2", nullptr));
        cBoxProtocol->setItemText(1, QCoreApplication::translate("MainWindow", "440/410\345\215\217\350\256\256", nullptr));
        cBoxProtocol->setItemText(2, QCoreApplication::translate("MainWindow", "C", nullptr));
        cBoxProtocol->setItemText(3, QCoreApplication::translate("MainWindow", "ETC\345\215\217\350\256\256", nullptr));
        cBoxProtocol->setItemText(4, QCoreApplication::translate("MainWindow", "A", nullptr));
        cBoxProtocol->setItemText(5, QCoreApplication::translate("MainWindow", "ARS410", nullptr));
        cBoxProtocol->setItemText(6, QCoreApplication::translate("MainWindow", "\346\211\277\346\263\260\346\227\247\345\215\217\350\256\256", nullptr));
        cBoxProtocol->setItemText(7, QCoreApplication::translate("MainWindow", "BOSCH UXE", nullptr));
        cBoxProtocol->setItemText(8, QCoreApplication::translate("MainWindow", "J5E", nullptr));
        cBoxProtocol->setItemText(9, QCoreApplication::translate("MainWindow", "BYD Higher Order", nullptr));
        cBoxProtocol->setItemText(10, QCoreApplication::translate("MainWindow", "BYD HO 0x659", nullptr));
        cBoxProtocol->setItemText(11, QCoreApplication::translate("MainWindow", "BYD\345\256\214\346\225\264\345\215\217\350\256\256", nullptr));
        cBoxProtocol->setItemText(12, QCoreApplication::translate("MainWindow", "CT_BYD\345\256\214\346\225\264\345\215\217\350\256\256", nullptr));
        cBoxProtocol->setItemText(13, QCoreApplication::translate("MainWindow", "GEELY", nullptr));
        cBoxProtocol->setItemText(14, QCoreApplication::translate("MainWindow", "GEELY \345\216\237\345\247\213\347\202\271", nullptr));

        comboBox_canType->setItemText(0, QCoreApplication::translate("MainWindow", "CAN", nullptr));
        comboBox_canType->setItemText(1, QCoreApplication::translate("MainWindow", "CAN-FD", nullptr));
        comboBox_canType->setItemText(2, QCoreApplication::translate("MainWindow", "TcCAN-FD", nullptr));
        comboBox_canType->setItemText(3, QCoreApplication::translate("MainWindow", "zlgCanFd", nullptr));
        comboBox_canType->setItemText(4, QCoreApplication::translate("MainWindow", "\345\233\236\346\224\276\346\250\241\345\274\217", nullptr));

        cB_CanCh->setItemText(0, QCoreApplication::translate("MainWindow", "CAN1", nullptr));
        cB_CanCh->setItemText(1, QCoreApplication::translate("MainWindow", "CAN2", nullptr));

        comboBox_CanRate->setItemText(0, QCoreApplication::translate("MainWindow", "500K", nullptr));
        comboBox_CanRate->setItemText(1, QCoreApplication::translate("MainWindow", "1000K", nullptr));

        comboBox_CanDataRate->setItemText(0, QCoreApplication::translate("MainWindow", "1M", nullptr));
        comboBox_CanDataRate->setItemText(1, QCoreApplication::translate("MainWindow", "2M", nullptr));
        comboBox_CanDataRate->setItemText(2, QCoreApplication::translate("MainWindow", "4M", nullptr));
        comboBox_CanDataRate->setItemText(3, QCoreApplication::translate("MainWindow", "5M", nullptr));

        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\233\267\350\276\276\351\200\232\351\201\223\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\234\237\345\200\274\351\200\232\351\201\223\357\274\232", nullptr));
        lb_Scene->setText(QString());
        lb_measCounter->setText(QString());
        lb_RdrStsLatency->setText(QString());
        lb_FullPointsCount->setText(QString());
        menuFunction->setTitle(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
