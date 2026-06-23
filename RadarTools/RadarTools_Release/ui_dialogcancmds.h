/********************************************************************************
** Form generated from reading UI file 'dialogcancmds.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCANCMDS_H
#define UI_DIALOGCANCMDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCanCmds
{
public:
    QGridLayout *gridLayout_22;
    QTabWidget *tab_profile;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_9;
    QGridLayout *tab_0_layout;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_10;
    QGridLayout *tab_1_layout;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_8;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_11;
    QGridLayout *tab_2_layout;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_12;
    QGridLayout *tab_3_layout;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_5;
    QGridLayout *gridLayout_15;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLineEdit *leCfarPkThrd;
    QLabel *label_4;
    QLineEdit *leCfarRecwinMask;
    QLabel *label_5;
    QLineEdit *leCfarAlgoType;
    QLabel *label_6;
    QLineEdit *leCfarCaAlpha;
    QLabel *label_7;
    QLineEdit *leCfarCaN;
    QLabel *label;
    QLineEdit *leDoaMode;
    QLabel *label_8;
    QLineEdit *leDoaNumGroups;
    QLabel *label_9;
    QLineEdit *leDoaFftMux;
    QLabel *label_10;
    QLineEdit *leDoaCbFftMux;
    QLabel *label_11;
    QLineEdit *leDoaMethod;
    QLabel *label_12;
    QLineEdit *leDoaSmpSpace;
    QLabel *label_13;
    QLineEdit *leDoaMaxObj;
    QLabel *label_14;
    QLineEdit *leBfmAzLeft;
    QLabel *label_15;
    QLineEdit *leBfmAzRight;
    QLabel *label_16;
    QLineEdit *leBfmEvUp;
    QLabel *label_17;
    QLineEdit *leBfmEvDown;
    QLabel *label_18;
    QLineEdit *leDml2dschStart;
    QLabel *label_19;
    QLineEdit *leDml2dschStep;
    QLabel *label_20;
    QLineEdit *leDml2dschEnd;
    QLabel *label_21;
    QLineEdit *leDmlExtra1d;
    QLabel *label_22;
    QLineEdit *leDmlP1P2;
    QLabel *label_23;
    QLineEdit *leDmlRespCoef;
    QGridLayout *gridLayout_17;
    QPushButton *btnClearCfgText;
    QPushButton *btnConfig;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_2;
    QLabel *label_24;
    QCheckBox *cbSelProf0;
    QCheckBox *cbSelProf1;
    QCheckBox *cbSelProf2;
    QCheckBox *cbSelProf3;
    QGridLayout *gridLayout_13;
    QTextEdit *textCmds;
    QTextEdit *textCmdAck;
    QGridLayout *gridLayout_18;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QPushButton *btnSendCmd;
    QPushButton *btnWriteFlash;
    QPushButton *btnClearFlash;
    QGridLayout *gridLayout_21;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_20;
    QPushButton *pushButtonParamDescrption;
    QPushButton *pushButtonCfgEffect;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_14;
    QLabel *label_3;
    QComboBox *cbProfile;
    QPushButton *btnReadCfg;
    QPushButton *pushButton_entryCfg;
    QPushButton *pushButton_outCfg;
    QPushButton *pushButton_temp;
    QPushButton *pushButtonClearBuf;
    QFrame *frame_3;
    QGridLayout *gridLayout_23;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_SR;
    QPushButton *pushButton_NoSR;
    QPushButton *pushButton_mimo;

    void setupUi(QDialog *DialogCanCmds)
    {
        if (DialogCanCmds->objectName().isEmpty())
            DialogCanCmds->setObjectName(QString::fromUtf8("DialogCanCmds"));
        DialogCanCmds->setWindowModality(Qt::NonModal);
        DialogCanCmds->resize(1018, 860);
        DialogCanCmds->setAutoFillBackground(false);
        gridLayout_22 = new QGridLayout(DialogCanCmds);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        tab_profile = new QTabWidget(DialogCanCmds);
        tab_profile->setObjectName(QString::fromUtf8("tab_profile"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        tab_profile->setFont(font);
        tab_profile->setTabShape(QTabWidget::Triangular);
        tab_profile->setElideMode(Qt::ElideNone);
        tab_profile->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea_2 = new QScrollArea(tab);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 471, 692));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        tab_0_layout = new QGridLayout();
        tab_0_layout->setObjectName(QString::fromUtf8("tab_0_layout"));

        gridLayout_9->addLayout(tab_0_layout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer, 1, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_5->addWidget(scrollArea_2, 0, 0, 1, 1);

        tab_profile->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scrollArea_3 = new QScrollArea(tab_2);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 471, 692));
        gridLayout_10 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        tab_1_layout = new QGridLayout();
        tab_1_layout->setObjectName(QString::fromUtf8("tab_1_layout"));

        gridLayout_10->addLayout(tab_1_layout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_2, 1, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout_6->addWidget(scrollArea_3, 0, 0, 1, 1);

        tab_profile->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_8 = new QGridLayout(tab_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        scrollArea_4 = new QScrollArea(tab_3);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 471, 692));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        tab_2_layout = new QGridLayout();
        tab_2_layout->setObjectName(QString::fromUtf8("tab_2_layout"));

        gridLayout_11->addLayout(tab_2_layout, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_3, 1, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        gridLayout_8->addWidget(scrollArea_4, 0, 0, 1, 1);

        tab_profile->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_7 = new QGridLayout(tab_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        scrollArea = new QScrollArea(tab_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 471, 692));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        tab_3_layout = new QGridLayout();
        tab_3_layout->setObjectName(QString::fromUtf8("tab_3_layout"));

        gridLayout_12->addLayout(tab_3_layout, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_7->addWidget(scrollArea, 0, 0, 1, 1);

        tab_profile->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_15 = new QGridLayout(tab_5);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        scrollArea_5 = new QScrollArea(tab_5);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 454, 750));
        gridLayout_16 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(scrollAreaWidgetContents_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        leCfarPkThrd = new QLineEdit(scrollAreaWidgetContents_5);
        leCfarPkThrd->setObjectName(QString::fromUtf8("leCfarPkThrd"));

        gridLayout_4->addWidget(leCfarPkThrd, 1, 0, 1, 2);

        label_4 = new QLabel(scrollAreaWidgetContents_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 2, 0, 1, 1);

        leCfarRecwinMask = new QLineEdit(scrollAreaWidgetContents_5);
        leCfarRecwinMask->setObjectName(QString::fromUtf8("leCfarRecwinMask"));

        gridLayout_4->addWidget(leCfarRecwinMask, 3, 0, 1, 2);

        label_5 = new QLabel(scrollAreaWidgetContents_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_5, 4, 0, 1, 1);

        leCfarAlgoType = new QLineEdit(scrollAreaWidgetContents_5);
        leCfarAlgoType->setObjectName(QString::fromUtf8("leCfarAlgoType"));

        gridLayout_4->addWidget(leCfarAlgoType, 4, 1, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_6, 5, 0, 1, 1);

        leCfarCaAlpha = new QLineEdit(scrollAreaWidgetContents_5);
        leCfarCaAlpha->setObjectName(QString::fromUtf8("leCfarCaAlpha"));

        gridLayout_4->addWidget(leCfarCaAlpha, 6, 0, 1, 2);

        label_7 = new QLabel(scrollAreaWidgetContents_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_7, 7, 0, 1, 1);

        leCfarCaN = new QLineEdit(scrollAreaWidgetContents_5);
        leCfarCaN->setObjectName(QString::fromUtf8("leCfarCaN"));

        gridLayout_4->addWidget(leCfarCaN, 8, 0, 1, 2);

        label = new QLabel(scrollAreaWidgetContents_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 9, 0, 1, 1);

        leDoaMode = new QLineEdit(scrollAreaWidgetContents_5);
        leDoaMode->setObjectName(QString::fromUtf8("leDoaMode"));

        gridLayout_4->addWidget(leDoaMode, 9, 1, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_8, 10, 0, 1, 1);

        leDoaNumGroups = new QLineEdit(scrollAreaWidgetContents_5);
        leDoaNumGroups->setObjectName(QString::fromUtf8("leDoaNumGroups"));

        gridLayout_4->addWidget(leDoaNumGroups, 10, 1, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_9, 11, 0, 1, 1);

        leDoaFftMux = new QLineEdit(scrollAreaWidgetContents_5);
        leDoaFftMux->setObjectName(QString::fromUtf8("leDoaFftMux"));

        gridLayout_4->addWidget(leDoaFftMux, 12, 0, 1, 2);

        label_10 = new QLabel(scrollAreaWidgetContents_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_10, 13, 0, 1, 1);

        leDoaCbFftMux = new QLineEdit(scrollAreaWidgetContents_5);
        leDoaCbFftMux->setObjectName(QString::fromUtf8("leDoaCbFftMux"));

        gridLayout_4->addWidget(leDoaCbFftMux, 14, 0, 1, 2);

        label_11 = new QLabel(scrollAreaWidgetContents_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_11, 15, 0, 1, 1);

        leDoaMethod = new QLineEdit(scrollAreaWidgetContents_5);
        leDoaMethod->setObjectName(QString::fromUtf8("leDoaMethod"));

        gridLayout_4->addWidget(leDoaMethod, 15, 1, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_12, 16, 0, 1, 1);

        leDoaSmpSpace = new QLineEdit(scrollAreaWidgetContents_5);
        leDoaSmpSpace->setObjectName(QString::fromUtf8("leDoaSmpSpace"));

        gridLayout_4->addWidget(leDoaSmpSpace, 16, 1, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_13, 17, 0, 1, 1);

        leDoaMaxObj = new QLineEdit(scrollAreaWidgetContents_5);
        leDoaMaxObj->setObjectName(QString::fromUtf8("leDoaMaxObj"));

        gridLayout_4->addWidget(leDoaMaxObj, 17, 1, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_14, 18, 0, 1, 1);

        leBfmAzLeft = new QLineEdit(scrollAreaWidgetContents_5);
        leBfmAzLeft->setObjectName(QString::fromUtf8("leBfmAzLeft"));

        gridLayout_4->addWidget(leBfmAzLeft, 18, 1, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_15, 19, 0, 1, 1);

        leBfmAzRight = new QLineEdit(scrollAreaWidgetContents_5);
        leBfmAzRight->setObjectName(QString::fromUtf8("leBfmAzRight"));

        gridLayout_4->addWidget(leBfmAzRight, 19, 1, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_16, 20, 0, 1, 1);

        leBfmEvUp = new QLineEdit(scrollAreaWidgetContents_5);
        leBfmEvUp->setObjectName(QString::fromUtf8("leBfmEvUp"));

        gridLayout_4->addWidget(leBfmEvUp, 20, 1, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_17, 21, 0, 1, 1);

        leBfmEvDown = new QLineEdit(scrollAreaWidgetContents_5);
        leBfmEvDown->setObjectName(QString::fromUtf8("leBfmEvDown"));

        gridLayout_4->addWidget(leBfmEvDown, 21, 1, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_18, 22, 0, 1, 1);

        leDml2dschStart = new QLineEdit(scrollAreaWidgetContents_5);
        leDml2dschStart->setObjectName(QString::fromUtf8("leDml2dschStart"));

        gridLayout_4->addWidget(leDml2dschStart, 22, 1, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_19, 23, 0, 1, 1);

        leDml2dschStep = new QLineEdit(scrollAreaWidgetContents_5);
        leDml2dschStep->setObjectName(QString::fromUtf8("leDml2dschStep"));

        gridLayout_4->addWidget(leDml2dschStep, 23, 1, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font1);
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_20, 24, 0, 1, 1);

        leDml2dschEnd = new QLineEdit(scrollAreaWidgetContents_5);
        leDml2dschEnd->setObjectName(QString::fromUtf8("leDml2dschEnd"));

        gridLayout_4->addWidget(leDml2dschEnd, 24, 1, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font1);
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_21, 25, 0, 1, 1);

        leDmlExtra1d = new QLineEdit(scrollAreaWidgetContents_5);
        leDmlExtra1d->setObjectName(QString::fromUtf8("leDmlExtra1d"));

        gridLayout_4->addWidget(leDmlExtra1d, 25, 1, 1, 1);

        label_22 = new QLabel(scrollAreaWidgetContents_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_22, 26, 0, 1, 1);

        leDmlP1P2 = new QLineEdit(scrollAreaWidgetContents_5);
        leDmlP1P2->setObjectName(QString::fromUtf8("leDmlP1P2"));

        gridLayout_4->addWidget(leDmlP1P2, 26, 1, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font1);
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_23, 27, 0, 1, 1);

        leDmlRespCoef = new QLineEdit(scrollAreaWidgetContents_5);
        leDmlRespCoef->setObjectName(QString::fromUtf8("leDmlRespCoef"));

        gridLayout_4->addWidget(leDmlRespCoef, 28, 0, 1, 2);


        gridLayout_16->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        btnClearCfgText = new QPushButton(scrollAreaWidgetContents_5);
        btnClearCfgText->setObjectName(QString::fromUtf8("btnClearCfgText"));

        gridLayout_17->addWidget(btnClearCfgText, 0, 0, 1, 1);

        btnConfig = new QPushButton(scrollAreaWidgetContents_5);
        btnConfig->setObjectName(QString::fromUtf8("btnConfig"));

        gridLayout_17->addWidget(btnConfig, 0, 1, 1, 1);


        gridLayout_16->addLayout(gridLayout_17, 1, 0, 1, 1);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        gridLayout_15->addWidget(scrollArea_5, 0, 0, 1, 1);

        tab_profile->addTab(tab_5, QString());

        gridLayout_22->addWidget(tab_profile, 1, 1, 1, 1);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_24 = new QLabel(DialogCanCmds);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font1);
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_24, 0, 0, 1, 1);

        cbSelProf0 = new QCheckBox(DialogCanCmds);
        cbSelProf0->setObjectName(QString::fromUtf8("cbSelProf0"));
        cbSelProf0->setChecked(true);

        gridLayout_2->addWidget(cbSelProf0, 0, 1, 1, 1);

        cbSelProf1 = new QCheckBox(DialogCanCmds);
        cbSelProf1->setObjectName(QString::fromUtf8("cbSelProf1"));
        cbSelProf1->setChecked(true);

        gridLayout_2->addWidget(cbSelProf1, 0, 2, 1, 1);

        cbSelProf2 = new QCheckBox(DialogCanCmds);
        cbSelProf2->setObjectName(QString::fromUtf8("cbSelProf2"));
        cbSelProf2->setChecked(true);

        gridLayout_2->addWidget(cbSelProf2, 0, 3, 1, 1);

        cbSelProf3 = new QCheckBox(DialogCanCmds);
        cbSelProf3->setObjectName(QString::fromUtf8("cbSelProf3"));
        cbSelProf3->setChecked(true);

        gridLayout_2->addWidget(cbSelProf3, 0, 4, 1, 1);


        gridLayout_19->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        textCmds = new QTextEdit(DialogCanCmds);
        textCmds->setObjectName(QString::fromUtf8("textCmds"));
        textCmds->setAcceptRichText(false);

        gridLayout_13->addWidget(textCmds, 0, 0, 1, 1);

        textCmdAck = new QTextEdit(DialogCanCmds);
        textCmdAck->setObjectName(QString::fromUtf8("textCmdAck"));
        textCmdAck->setReadOnly(false);

        gridLayout_13->addWidget(textCmdAck, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_13, 1, 0, 1, 1);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnSendCmd = new QPushButton(DialogCanCmds);
        btnSendCmd->setObjectName(QString::fromUtf8("btnSendCmd"));
        btnSendCmd->setAutoFillBackground(false);
        btnSendCmd->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(btnSendCmd, 0, 0, 1, 1);

        btnWriteFlash = new QPushButton(DialogCanCmds);
        btnWriteFlash->setObjectName(QString::fromUtf8("btnWriteFlash"));
        btnWriteFlash->setAutoFillBackground(false);
        btnWriteFlash->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(btnWriteFlash, 0, 1, 1, 1);

        btnClearFlash = new QPushButton(DialogCanCmds);
        btnClearFlash->setObjectName(QString::fromUtf8("btnClearFlash"));
        btnClearFlash->setAutoFillBackground(false);
        btnClearFlash->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(btnClearFlash, 0, 2, 1, 1);


        gridLayout_18->addLayout(gridLayout_3, 0, 1, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 2, 0, 1, 1);


        gridLayout_22->addLayout(gridLayout_19, 0, 0, 2, 1);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        frame_2 = new QFrame(DialogCanCmds);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout_20 = new QGridLayout(frame_2);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        pushButtonParamDescrption = new QPushButton(frame_2);
        pushButtonParamDescrption->setObjectName(QString::fromUtf8("pushButtonParamDescrption"));

        gridLayout_20->addWidget(pushButtonParamDescrption, 0, 0, 1, 1);

        pushButtonCfgEffect = new QPushButton(frame_2);
        pushButtonCfgEffect->setObjectName(QString::fromUtf8("pushButtonCfgEffect"));

        gridLayout_20->addWidget(pushButtonCfgEffect, 1, 0, 1, 1);


        gridLayout_21->addWidget(frame_2, 0, 1, 1, 1);

        frame = new QFrame(DialogCanCmds);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_14->addWidget(label_3, 0, 0, 1, 1);

        cbProfile = new QComboBox(frame);
        cbProfile->addItem(QString());
        cbProfile->addItem(QString());
        cbProfile->addItem(QString());
        cbProfile->addItem(QString());
        cbProfile->setObjectName(QString::fromUtf8("cbProfile"));

        gridLayout_14->addWidget(cbProfile, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_14, 0, 0, 1, 1);

        btnReadCfg = new QPushButton(frame);
        btnReadCfg->setObjectName(QString::fromUtf8("btnReadCfg"));

        gridLayout->addWidget(btnReadCfg, 0, 1, 1, 1);

        pushButton_entryCfg = new QPushButton(frame);
        pushButton_entryCfg->setObjectName(QString::fromUtf8("pushButton_entryCfg"));

        gridLayout->addWidget(pushButton_entryCfg, 1, 0, 1, 1);

        pushButton_outCfg = new QPushButton(frame);
        pushButton_outCfg->setObjectName(QString::fromUtf8("pushButton_outCfg"));

        gridLayout->addWidget(pushButton_outCfg, 1, 1, 1, 1);

        pushButton_temp = new QPushButton(frame);
        pushButton_temp->setObjectName(QString::fromUtf8("pushButton_temp"));

        gridLayout->addWidget(pushButton_temp, 2, 0, 1, 1);

        pushButtonClearBuf = new QPushButton(frame);
        pushButtonClearBuf->setObjectName(QString::fromUtf8("pushButtonClearBuf"));

        gridLayout->addWidget(pushButtonClearBuf, 2, 1, 1, 1);


        gridLayout_21->addWidget(frame, 0, 0, 1, 1);

        frame_3 = new QFrame(DialogCanCmds);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        gridLayout_23 = new QGridLayout(frame_3);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_SR = new QPushButton(frame_3);
        pushButton_SR->setObjectName(QString::fromUtf8("pushButton_SR"));

        verticalLayout->addWidget(pushButton_SR);

        pushButton_NoSR = new QPushButton(frame_3);
        pushButton_NoSR->setObjectName(QString::fromUtf8("pushButton_NoSR"));

        verticalLayout->addWidget(pushButton_NoSR);

        pushButton_mimo = new QPushButton(frame_3);
        pushButton_mimo->setObjectName(QString::fromUtf8("pushButton_mimo"));

        verticalLayout->addWidget(pushButton_mimo);


        gridLayout_23->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_21->addWidget(frame_3, 0, 2, 1, 1);


        gridLayout_22->addLayout(gridLayout_21, 0, 1, 1, 1);


        retranslateUi(DialogCanCmds);

        tab_profile->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogCanCmds);
    } // setupUi

    void retranslateUi(QDialog *DialogCanCmds)
    {
        DialogCanCmds->setWindowTitle(QCoreApplication::translate("DialogCanCmds", "Dialog", nullptr));
        tab_profile->setTabText(tab_profile->indexOf(tab), QCoreApplication::translate("DialogCanCmds", " profile_0", nullptr));
        tab_profile->setTabText(tab_profile->indexOf(tab_2), QCoreApplication::translate("DialogCanCmds", "1", nullptr));
        tab_profile->setTabText(tab_profile->indexOf(tab_3), QCoreApplication::translate("DialogCanCmds", "2", nullptr));
        tab_profile->setTabText(tab_profile->indexOf(tab_4), QCoreApplication::translate("DialogCanCmds", "3", nullptr));
        label_2->setText(QCoreApplication::translate("DialogCanCmds", "CFAR pk threshold", nullptr));
        label_4->setText(QCoreApplication::translate("DialogCanCmds", "CFAR recwin mask", nullptr));
        label_5->setText(QCoreApplication::translate("DialogCanCmds", "CFAR algo type", nullptr));
        label_6->setText(QCoreApplication::translate("DialogCanCmds", "CFAR CA Alpha", nullptr));
        label_7->setText(QCoreApplication::translate("DialogCanCmds", "CFAR CA N", nullptr));
        label->setText(QCoreApplication::translate("DialogCanCmds", "DOA Mode", nullptr));
        label_8->setText(QCoreApplication::translate("DialogCanCmds", "DOA Num Groups", nullptr));
        label_9->setText(QCoreApplication::translate("DialogCanCmds", "DOA FFT Mux", nullptr));
        label_10->setText(QCoreApplication::translate("DialogCanCmds", "CB DOA FFT Mux", nullptr));
        label_11->setText(QCoreApplication::translate("DialogCanCmds", "DOA Method", nullptr));
        label_12->setText(QCoreApplication::translate("DialogCanCmds", "DOA Smp Space", nullptr));
        label_13->setText(QCoreApplication::translate("DialogCanCmds", "Doa Max Obj", nullptr));
        label_14->setText(QCoreApplication::translate("DialogCanCmds", "Bfm AZ Left", nullptr));
        label_15->setText(QCoreApplication::translate("DialogCanCmds", "Bfm AZ Right", nullptr));
        label_16->setText(QCoreApplication::translate("DialogCanCmds", "Bfm Ev UP", nullptr));
        label_17->setText(QCoreApplication::translate("DialogCanCmds", "Bfm Ev Down", nullptr));
        label_18->setText(QCoreApplication::translate("DialogCanCmds", "DML 2dsch Start ", nullptr));
        label_19->setText(QCoreApplication::translate("DialogCanCmds", "DML 2dsch Step", nullptr));
        label_20->setText(QCoreApplication::translate("DialogCanCmds", "DML 2dsch End", nullptr));
        label_21->setText(QCoreApplication::translate("DialogCanCmds", "DML Extra 1D", nullptr));
        label_22->setText(QCoreApplication::translate("DialogCanCmds", "DML P1P2", nullptr));
        label_23->setText(QCoreApplication::translate("DialogCanCmds", "DML Respwr Coef", nullptr));
        btnClearCfgText->setText(QCoreApplication::translate("DialogCanCmds", "\346\270\205\351\231\244\351\205\215\347\275\256", nullptr));
        btnConfig->setText(QCoreApplication::translate("DialogCanCmds", "\345\217\221\351\200\201\351\205\215\347\275\256", nullptr));
        tab_profile->setTabText(tab_profile->indexOf(tab_5), QCoreApplication::translate("DialogCanCmds", "\345\205\266\344\273\226", nullptr));
        label_24->setText(QCoreApplication::translate("DialogCanCmds", "Cmd Profile", nullptr));
        cbSelProf0->setText(QCoreApplication::translate("DialogCanCmds", "Profile0", nullptr));
        cbSelProf1->setText(QCoreApplication::translate("DialogCanCmds", "Profile1", nullptr));
        cbSelProf2->setText(QCoreApplication::translate("DialogCanCmds", "Profile2", nullptr));
        cbSelProf3->setText(QCoreApplication::translate("DialogCanCmds", "Profile3", nullptr));
        btnSendCmd->setText(QCoreApplication::translate("DialogCanCmds", "\345\217\221\351\200\201\345\221\275\344\273\244", nullptr));
        btnWriteFlash->setText(QCoreApplication::translate("DialogCanCmds", "\345\206\231FLASH", nullptr));
        btnClearFlash->setText(QCoreApplication::translate("DialogCanCmds", "\346\270\205\351\231\244flash", nullptr));
        pushButtonParamDescrption->setText(QCoreApplication::translate("DialogCanCmds", "\345\217\202\346\225\260\350\247\243\351\207\212", nullptr));
        pushButtonCfgEffect->setText(QCoreApplication::translate("DialogCanCmds", " \351\205\215\347\275\256\347\224\237\346\225\210", nullptr));
        label_3->setText(QCoreApplication::translate("DialogCanCmds", "Profile", nullptr));
        cbProfile->setItemText(0, QCoreApplication::translate("DialogCanCmds", "0", nullptr));
        cbProfile->setItemText(1, QCoreApplication::translate("DialogCanCmds", "1", nullptr));
        cbProfile->setItemText(2, QCoreApplication::translate("DialogCanCmds", "2", nullptr));
        cbProfile->setItemText(3, QCoreApplication::translate("DialogCanCmds", "3", nullptr));

        btnReadCfg->setText(QCoreApplication::translate("DialogCanCmds", "\350\257\273\345\217\226\351\205\215\347\275\256", nullptr));
        pushButton_entryCfg->setText(QCoreApplication::translate("DialogCanCmds", "\350\277\233\345\205\245\345\221\275\344\273\244\346\250\241\345\274\217", nullptr));
        pushButton_outCfg->setText(QCoreApplication::translate("DialogCanCmds", "\351\200\200\345\207\272\345\221\275\344\273\244\346\250\241\345\274\217", nullptr));
        pushButton_temp->setText(QCoreApplication::translate("DialogCanCmds", "\350\257\273\345\217\226\346\270\251\345\272\246", nullptr));
        pushButtonClearBuf->setText(QCoreApplication::translate("DialogCanCmds", "\346\270\205\347\274\223\345\255\230", nullptr));
        pushButton_SR->setText(QCoreApplication::translate("DialogCanCmds", " SR", nullptr));
        pushButton_NoSR->setText(QCoreApplication::translate("DialogCanCmds", " NoSR", nullptr));
        pushButton_mimo->setText(QCoreApplication::translate("DialogCanCmds", " M", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCanCmds: public Ui_DialogCanCmds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCANCMDS_H
