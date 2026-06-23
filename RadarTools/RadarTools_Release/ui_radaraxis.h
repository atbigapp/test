/********************************************************************************
** Form generated from reading UI file 'radaraxis.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADARAXIS_H
#define UI_RADARAXIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <myaxissys.h>

QT_BEGIN_NAMESPACE

class Ui_radarAxis
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *toolbarTop;
    QHBoxLayout *horizontalLayoutTopBar;
    QPushButton *btnPointCloud;
    QPushButton *btnAdc;
    QPushButton *btnCalib;
    QPushButton *btnPlayback;
    QFrame *separatorWave;
    QPushButton *btnFarWave;
    QPushButton *btnNearWave;
    QLabel *lblWaveMode;
    QFrame *separatorCan;
    QComboBox *mirrorComboCanType;
    QComboBox *mirrorComboCanCh;
    QComboBox *mirrorComboCanRate;
    QComboBox *mirrorComboCanDataRate;
    QPushButton *mirrorBtnStart;
    QSpacerItem *horizontalSpacerTopBar;
    QPushButton *btnClassicMode;
    QSplitter *splitter_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_Trk;
    MyAxisSys *widget_Trk;
    QSplitter *splitter;
    QTableView *tableView;
    QPlainTextEdit *pEdit_TrkList;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_raw;
    MyAxisSys *widget_raw;
    QPlainTextEdit *pEdit_rawList;
    QSplitter *splitter_2;
    QWidget *widget_TrkFilter;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxFilteringProbability;
    QDoubleSpinBox *doubleSpinBoxFilteringProbability;
    QCheckBox *cBShowCar;
    QCheckBox *cBox_Static;
    QCheckBox *cBox_Come;
    QCheckBox *cBox_FarAway;
    QCheckBox *cBox_UnKnow;
    QCheckBox *cBox_FA;
    QCheckBox *checkBox_area;
    QCheckBox *checkBoxTrueValueTrack;
    QCheckBox *checkBoxDisplayACC;
    QPushButton *pushButtonTrackSettings;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_rawFilter;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cBoxCh1;
    QCheckBox *cBoxCh2;
    QCheckBox *cBoxBrigeFilter;
    QCheckBox *checkBoxSpeedGreaterThan90;
    QCheckBox *checkBoxMatchFlagLessThan3;
    QCheckBox *checkBoxTag;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cBoxFcw;
    QLineEdit *lEAngleOffset;
    QLabel *lbObjCnt;
    QCheckBox *cBox_Static_R;
    QCheckBox *cBox_Come_R;
    QCheckBox *cBox_FarAway_R;
    QCheckBox *checkBoxTrueValueRaw;
    QPushButton *pushButtonRawSettings;
    QCheckBox *checkBoxLingering;
    QSpinBox *spinBoxLingering;

    void setupUi(QWidget *radarAxis)
    {
        if (radarAxis->objectName().isEmpty())
            radarAxis->setObjectName(QString::fromUtf8("radarAxis"));
        radarAxis->resize(1762, 276);
        QFont font;
        font.setPointSize(7);
        radarAxis->setFont(font);
        radarAxis->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(29, 29, 29);"));
        verticalLayout_3 = new QVBoxLayout(radarAxis);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        toolbarTop = new QWidget(radarAxis);
        toolbarTop->setObjectName(QString::fromUtf8("toolbarTop"));
        toolbarTop->setMinimumSize(QSize(0, 56));
        toolbarTop->setMaximumSize(QSize(16777215, 56));
        toolbarTop->setStyleSheet(QString::fromUtf8("QWidget#toolbarTop { background-color: rgb(40, 40, 40); border-bottom: 1px solid rgb(80, 80, 80); }\n"
"QPushButton { background-color: rgb(60, 60, 60); color: rgb(255, 255, 255); border: 1px solid rgb(100, 100, 100); border-radius: 4px; padding: 4px 16px; font-size: 14px; font-weight: bold; min-width: 120px; min-height: 40px; }\n"
"QPushButton:hover { background-color: rgb(80, 80, 80); border-color: rgb(140, 140, 140); }\n"
"QPushButton:pressed { background-color: rgb(45, 45, 45); }\n"
"QPushButton:checked { background-color: rgb(200, 60, 40); border-color: rgb(255, 100, 80); color: rgb(255, 255, 255); }\n"
"QPushButton:disabled { color: rgb(140, 140, 140); background-color: rgb(50, 50, 50); }"));
        horizontalLayoutTopBar = new QHBoxLayout(toolbarTop);
        horizontalLayoutTopBar->setSpacing(10);
        horizontalLayoutTopBar->setObjectName(QString::fromUtf8("horizontalLayoutTopBar"));
        horizontalLayoutTopBar->setContentsMargins(10, 6, 10, 6);
        btnPointCloud = new QPushButton(toolbarTop);
        btnPointCloud->setObjectName(QString::fromUtf8("btnPointCloud"));
        btnPointCloud->setCheckable(true);

        horizontalLayoutTopBar->addWidget(btnPointCloud);

        btnAdc = new QPushButton(toolbarTop);
        btnAdc->setObjectName(QString::fromUtf8("btnAdc"));

        horizontalLayoutTopBar->addWidget(btnAdc);

        btnCalib = new QPushButton(toolbarTop);
        btnCalib->setObjectName(QString::fromUtf8("btnCalib"));

        horizontalLayoutTopBar->addWidget(btnCalib);

        btnPlayback = new QPushButton(toolbarTop);
        btnPlayback->setObjectName(QString::fromUtf8("btnPlayback"));

        horizontalLayoutTopBar->addWidget(btnPlayback);

        separatorWave = new QFrame(toolbarTop);
        separatorWave->setObjectName(QString::fromUtf8("separatorWave"));
        separatorWave->setFrameShape(QFrame::VLine);
        separatorWave->setFrameShadow(QFrame::Sunken);
        separatorWave->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));

        horizontalLayoutTopBar->addWidget(separatorWave);

        btnFarWave = new QPushButton(toolbarTop);
        btnFarWave->setObjectName(QString::fromUtf8("btnFarWave"));
        btnFarWave->setCheckable(true);

        horizontalLayoutTopBar->addWidget(btnFarWave);

        btnNearWave = new QPushButton(toolbarTop);
        btnNearWave->setObjectName(QString::fromUtf8("btnNearWave"));
        btnNearWave->setCheckable(true);

        horizontalLayoutTopBar->addWidget(btnNearWave);

        lblWaveMode = new QLabel(toolbarTop);
        lblWaveMode->setObjectName(QString::fromUtf8("lblWaveMode"));
        lblWaveMode->setMinimumSize(QSize(60, 0));
        lblWaveMode->setStyleSheet(QString::fromUtf8("QLabel { color: rgb(200, 200, 100); font-size: 13px; font-weight: bold; padding: 0 4px; }"));
        lblWaveMode->setAlignment(Qt::AlignCenter);

        horizontalLayoutTopBar->addWidget(lblWaveMode);

        separatorCan = new QFrame(toolbarTop);
        separatorCan->setObjectName(QString::fromUtf8("separatorCan"));
        separatorCan->setFrameShape(QFrame::VLine);
        separatorCan->setFrameShadow(QFrame::Sunken);
        separatorCan->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));

        horizontalLayoutTopBar->addWidget(separatorCan);

        mirrorComboCanType = new QComboBox(toolbarTop);
        mirrorComboCanType->setObjectName(QString::fromUtf8("mirrorComboCanType"));
        mirrorComboCanType->setMinimumSize(QSize(90, 40));
        mirrorComboCanType->setStyleSheet(QString::fromUtf8("QComboBox { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(100, 100, 100); border-radius: 3px; padding: 2px 6px; font-weight: bold; font-size: 13px; min-width: 90px; }\n"
"QComboBox QAbstractItemView { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); selection-background-color: rgb(70, 100, 140); }\n"
"QComboBox::drop-down { border: none; width: 18px; }"));

        horizontalLayoutTopBar->addWidget(mirrorComboCanType);

        mirrorComboCanCh = new QComboBox(toolbarTop);
        mirrorComboCanCh->setObjectName(QString::fromUtf8("mirrorComboCanCh"));
        mirrorComboCanCh->setMinimumSize(QSize(70, 40));
        mirrorComboCanCh->setStyleSheet(QString::fromUtf8("QComboBox { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(100, 100, 100); border-radius: 3px; padding: 2px 6px; font-weight: bold; font-size: 13px; min-width: 70px; }\n"
"QComboBox QAbstractItemView { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); selection-background-color: rgb(70, 100, 140); }\n"
"QComboBox::drop-down { border: none; width: 18px; }"));

        horizontalLayoutTopBar->addWidget(mirrorComboCanCh);

        mirrorComboCanRate = new QComboBox(toolbarTop);
        mirrorComboCanRate->setObjectName(QString::fromUtf8("mirrorComboCanRate"));
        mirrorComboCanRate->setMinimumSize(QSize(80, 40));
        mirrorComboCanRate->setStyleSheet(QString::fromUtf8("QComboBox { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(100, 100, 100); border-radius: 3px; padding: 2px 6px; font-weight: bold; font-size: 13px; min-width: 80px; }\n"
"QComboBox QAbstractItemView { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); selection-background-color: rgb(70, 100, 140); }\n"
"QComboBox::drop-down { border: none; width: 18px; }"));

        horizontalLayoutTopBar->addWidget(mirrorComboCanRate);

        mirrorComboCanDataRate = new QComboBox(toolbarTop);
        mirrorComboCanDataRate->setObjectName(QString::fromUtf8("mirrorComboCanDataRate"));
        mirrorComboCanDataRate->setMinimumSize(QSize(70, 40));
        mirrorComboCanDataRate->setStyleSheet(QString::fromUtf8("QComboBox { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(100, 100, 100); border-radius: 3px; padding: 2px 6px; font-weight: bold; font-size: 13px; min-width: 70px; }\n"
"QComboBox QAbstractItemView { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); selection-background-color: rgb(70, 100, 140); }\n"
"QComboBox::drop-down { border: none; width: 18px; }"));

        horizontalLayoutTopBar->addWidget(mirrorComboCanDataRate);

        mirrorBtnStart = new QPushButton(toolbarTop);
        mirrorBtnStart->setObjectName(QString::fromUtf8("mirrorBtnStart"));
        mirrorBtnStart->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(40, 130, 80); color: rgb(255, 255, 255); border: 1px solid rgb(70, 180, 110); border-radius: 4px; padding: 4px 18px; font-size: 14px; font-weight: bold; min-width: 80px; min-height: 40px; }\n"
"QPushButton:hover { background-color: rgb(60, 160, 100); border-color: rgb(100, 200, 130); }\n"
"QPushButton:pressed { background-color: rgb(30, 100, 60); }"));

        horizontalLayoutTopBar->addWidget(mirrorBtnStart);

        horizontalSpacerTopBar = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutTopBar->addItem(horizontalSpacerTopBar);

        btnClassicMode = new QPushButton(toolbarTop);
        btnClassicMode->setObjectName(QString::fromUtf8("btnClassicMode"));
        btnClassicMode->setStyleSheet(QString::fromUtf8("QPushButton { min-width: 100px; background-color: rgb(50, 50, 70); }"));

        horizontalLayoutTopBar->addWidget(btnClassicMode);


        verticalLayout_3->addWidget(toolbarTop);

        splitter_3 = new QSplitter(radarAxis);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter_Trk = new QSplitter(layoutWidget);
        splitter_Trk->setObjectName(QString::fromUtf8("splitter_Trk"));
        splitter_Trk->setOrientation(Qt::Horizontal);
        widget_Trk = new MyAxisSys(splitter_Trk);
        widget_Trk->setObjectName(QString::fromUtf8("widget_Trk"));
        splitter_Trk->addWidget(widget_Trk);
        splitter = new QSplitter(splitter_Trk);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setTextElideMode(Qt::ElideLeft);
        splitter->addWidget(tableView);
        pEdit_TrkList = new QPlainTextEdit(splitter);
        pEdit_TrkList->setObjectName(QString::fromUtf8("pEdit_TrkList"));
        pEdit_TrkList->setLineWrapMode(QPlainTextEdit::NoWrap);
        splitter->addWidget(pEdit_TrkList);
        splitter_Trk->addWidget(splitter);

        verticalLayout->addWidget(splitter_Trk);

        splitter_3->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_raw = new QSplitter(layoutWidget1);
        splitter_raw->setObjectName(QString::fromUtf8("splitter_raw"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter_raw->sizePolicy().hasHeightForWidth());
        splitter_raw->setSizePolicy(sizePolicy);
        splitter_raw->setOrientation(Qt::Horizontal);
        widget_raw = new MyAxisSys(splitter_raw);
        widget_raw->setObjectName(QString::fromUtf8("widget_raw"));
        splitter_raw->addWidget(widget_raw);
        pEdit_rawList = new QPlainTextEdit(splitter_raw);
        pEdit_rawList->setObjectName(QString::fromUtf8("pEdit_rawList"));
        splitter_raw->addWidget(pEdit_rawList);

        verticalLayout_2->addWidget(splitter_raw);

        splitter_3->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter_3);

        splitter_2 = new QSplitter(radarAxis);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        widget_TrkFilter = new QWidget(splitter_2);
        widget_TrkFilter->setObjectName(QString::fromUtf8("widget_TrkFilter"));
        widget_TrkFilter->setMinimumSize(QSize(0, 15));
        widget_TrkFilter->setMaximumSize(QSize(16777215, 15));
        gridLayout_2 = new QGridLayout(widget_TrkFilter);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxFilteringProbability = new QCheckBox(widget_TrkFilter);
        checkBoxFilteringProbability->setObjectName(QString::fromUtf8("checkBoxFilteringProbability"));

        horizontalLayout->addWidget(checkBoxFilteringProbability);

        doubleSpinBoxFilteringProbability = new QDoubleSpinBox(widget_TrkFilter);
        doubleSpinBoxFilteringProbability->setObjectName(QString::fromUtf8("doubleSpinBoxFilteringProbability"));
        doubleSpinBoxFilteringProbability->setMaximum(100.000000000000000);
        doubleSpinBoxFilteringProbability->setSingleStep(0.010000000000000);

        horizontalLayout->addWidget(doubleSpinBoxFilteringProbability);

        cBShowCar = new QCheckBox(widget_TrkFilter);
        cBShowCar->setObjectName(QString::fromUtf8("cBShowCar"));
        cBShowCar->setChecked(true);

        horizontalLayout->addWidget(cBShowCar);

        cBox_Static = new QCheckBox(widget_TrkFilter);
        cBox_Static->setObjectName(QString::fromUtf8("cBox_Static"));
        cBox_Static->setChecked(true);

        horizontalLayout->addWidget(cBox_Static);

        cBox_Come = new QCheckBox(widget_TrkFilter);
        cBox_Come->setObjectName(QString::fromUtf8("cBox_Come"));
        cBox_Come->setChecked(true);

        horizontalLayout->addWidget(cBox_Come);

        cBox_FarAway = new QCheckBox(widget_TrkFilter);
        cBox_FarAway->setObjectName(QString::fromUtf8("cBox_FarAway"));
        cBox_FarAway->setChecked(true);

        horizontalLayout->addWidget(cBox_FarAway);

        cBox_UnKnow = new QCheckBox(widget_TrkFilter);
        cBox_UnKnow->setObjectName(QString::fromUtf8("cBox_UnKnow"));

        horizontalLayout->addWidget(cBox_UnKnow);

        cBox_FA = new QCheckBox(widget_TrkFilter);
        cBox_FA->setObjectName(QString::fromUtf8("cBox_FA"));

        horizontalLayout->addWidget(cBox_FA);

        checkBox_area = new QCheckBox(widget_TrkFilter);
        checkBox_area->setObjectName(QString::fromUtf8("checkBox_area"));

        horizontalLayout->addWidget(checkBox_area);

        checkBoxTrueValueTrack = new QCheckBox(widget_TrkFilter);
        checkBoxTrueValueTrack->setObjectName(QString::fromUtf8("checkBoxTrueValueTrack"));

        horizontalLayout->addWidget(checkBoxTrueValueTrack);

        checkBoxDisplayACC = new QCheckBox(widget_TrkFilter);
        checkBoxDisplayACC->setObjectName(QString::fromUtf8("checkBoxDisplayACC"));

        horizontalLayout->addWidget(checkBoxDisplayACC);

        pushButtonTrackSettings = new QPushButton(widget_TrkFilter);
        pushButtonTrackSettings->setObjectName(QString::fromUtf8("pushButtonTrackSettings"));

        horizontalLayout->addWidget(pushButtonTrackSettings);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        splitter_2->addWidget(widget_TrkFilter);
        widget_rawFilter = new QWidget(splitter_2);
        widget_rawFilter->setObjectName(QString::fromUtf8("widget_rawFilter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_rawFilter->sizePolicy().hasHeightForWidth());
        widget_rawFilter->setSizePolicy(sizePolicy1);
        widget_rawFilter->setMinimumSize(QSize(0, 15));
        widget_rawFilter->setMaximumSize(QSize(16777215, 15));
        widget_rawFilter->setContextMenuPolicy(Qt::DefaultContextMenu);
        gridLayout_3 = new QGridLayout(widget_rawFilter);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cBoxCh1 = new QCheckBox(widget_rawFilter);
        cBoxCh1->setObjectName(QString::fromUtf8("cBoxCh1"));
        cBoxCh1->setChecked(true);

        horizontalLayout_3->addWidget(cBoxCh1);

        cBoxCh2 = new QCheckBox(widget_rawFilter);
        cBoxCh2->setObjectName(QString::fromUtf8("cBoxCh2"));
        cBoxCh2->setChecked(true);

        horizontalLayout_3->addWidget(cBoxCh2);

        cBoxBrigeFilter = new QCheckBox(widget_rawFilter);
        cBoxBrigeFilter->setObjectName(QString::fromUtf8("cBoxBrigeFilter"));

        horizontalLayout_3->addWidget(cBoxBrigeFilter);

        checkBoxSpeedGreaterThan90 = new QCheckBox(widget_rawFilter);
        checkBoxSpeedGreaterThan90->setObjectName(QString::fromUtf8("checkBoxSpeedGreaterThan90"));

        horizontalLayout_3->addWidget(checkBoxSpeedGreaterThan90);

        checkBoxMatchFlagLessThan3 = new QCheckBox(widget_rawFilter);
        checkBoxMatchFlagLessThan3->setObjectName(QString::fromUtf8("checkBoxMatchFlagLessThan3"));
        checkBoxMatchFlagLessThan3->setChecked(true);

        horizontalLayout_3->addWidget(checkBoxMatchFlagLessThan3);

        checkBoxTag = new QCheckBox(widget_rawFilter);
        checkBoxTag->setObjectName(QString::fromUtf8("checkBoxTag"));
        checkBoxTag->setChecked(false);

        horizontalLayout_3->addWidget(checkBoxTag);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cBoxFcw = new QCheckBox(widget_rawFilter);
        cBoxFcw->setObjectName(QString::fromUtf8("cBoxFcw"));
        cBoxFcw->setChecked(false);

        horizontalLayout_3->addWidget(cBoxFcw);

        lEAngleOffset = new QLineEdit(widget_rawFilter);
        lEAngleOffset->setObjectName(QString::fromUtf8("lEAngleOffset"));
        lEAngleOffset->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(lEAngleOffset);

        lbObjCnt = new QLabel(widget_rawFilter);
        lbObjCnt->setObjectName(QString::fromUtf8("lbObjCnt"));

        horizontalLayout_3->addWidget(lbObjCnt);

        cBox_Static_R = new QCheckBox(widget_rawFilter);
        cBox_Static_R->setObjectName(QString::fromUtf8("cBox_Static_R"));
        cBox_Static_R->setChecked(true);

        horizontalLayout_3->addWidget(cBox_Static_R);

        cBox_Come_R = new QCheckBox(widget_rawFilter);
        cBox_Come_R->setObjectName(QString::fromUtf8("cBox_Come_R"));
        cBox_Come_R->setChecked(true);

        horizontalLayout_3->addWidget(cBox_Come_R);

        cBox_FarAway_R = new QCheckBox(widget_rawFilter);
        cBox_FarAway_R->setObjectName(QString::fromUtf8("cBox_FarAway_R"));
        cBox_FarAway_R->setChecked(true);

        horizontalLayout_3->addWidget(cBox_FarAway_R);

        checkBoxTrueValueRaw = new QCheckBox(widget_rawFilter);
        checkBoxTrueValueRaw->setObjectName(QString::fromUtf8("checkBoxTrueValueRaw"));

        horizontalLayout_3->addWidget(checkBoxTrueValueRaw);

        pushButtonRawSettings = new QPushButton(widget_rawFilter);
        pushButtonRawSettings->setObjectName(QString::fromUtf8("pushButtonRawSettings"));

        horizontalLayout_3->addWidget(pushButtonRawSettings);

        checkBoxLingering = new QCheckBox(widget_rawFilter);
        checkBoxLingering->setObjectName(QString::fromUtf8("checkBoxLingering"));

        horizontalLayout_3->addWidget(checkBoxLingering);

        spinBoxLingering = new QSpinBox(widget_rawFilter);
        spinBoxLingering->setObjectName(QString::fromUtf8("spinBoxLingering"));
        spinBoxLingering->setMinimum(1);
        spinBoxLingering->setValue(3);

        horizontalLayout_3->addWidget(spinBoxLingering);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        splitter_2->addWidget(widget_rawFilter);

        verticalLayout_3->addWidget(splitter_2);


        retranslateUi(radarAxis);

        QMetaObject::connectSlotsByName(radarAxis);
    } // setupUi

    void retranslateUi(QWidget *radarAxis)
    {
        radarAxis->setWindowTitle(QCoreApplication::translate("radarAxis", "Form", nullptr));
        btnPointCloud->setText(QCoreApplication::translate("radarAxis", "\342\227\217 \347\202\271\344\272\221\351\207\207\351\233\206", nullptr));
#if QT_CONFIG(tooltip)
        btnPointCloud->setToolTip(QCoreApplication::translate("radarAxis", "\344\270\200\351\224\256\345\274\200\345\247\213/\345\201\234\346\255\242\347\202\271\344\272\221\351\207\207\351\233\206\357\274\210\350\207\252\345\212\250\344\277\235\345\255\230\345\210\260 data/ \347\233\256\345\275\225\357\274\214\346\226\207\344\273\266\345\220\215\345\270\246\346\227\266\351\227\264\346\210\263\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAdc->setText(QCoreApplication::translate("radarAxis", "ADC\351\207\207\351\233\206", nullptr));
#if QT_CONFIG(tooltip)
        btnAdc->setToolTip(QCoreApplication::translate("radarAxis", "\346\211\223\345\274\200\347\216\257\345\242\203ADC\351\207\207\351\233\206\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCalib->setText(QCoreApplication::translate("radarAxis", "\345\224\256\345\220\216/\344\270\213\347\272\277\346\240\207\345\256\232", nullptr));
#if QT_CONFIG(tooltip)
        btnCalib->setToolTip(QCoreApplication::translate("radarAxis", "\346\211\223\345\274\200\345\224\256\345\220\216/\344\270\213\347\272\277\346\240\207\345\256\232\346\265\201\347\250\213\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPlayback->setText(QCoreApplication::translate("radarAxis", "\345\233\236\346\224\276", nullptr));
#if QT_CONFIG(tooltip)
        btnPlayback->setToolTip(QCoreApplication::translate("radarAxis", "\345\210\207\346\215\242\345\210\260\346\225\260\346\215\256\345\233\236\346\224\276\346\250\241\345\274\217\357\274\210\345\205\263\351\227\255\345\275\223\345\211\215 CAN \350\256\276\345\244\207\345\271\266\346\211\223\345\274\200\345\233\236\346\224\276\347\252\227\345\217\243\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        btnFarWave->setText(QCoreApplication::translate("radarAxis", "\350\277\234\346\263\242", nullptr));
#if QT_CONFIG(tooltip)
        btnFarWave->setToolTip(QCoreApplication::translate("radarAxis", "\345\210\207\346\215\242\350\277\234\346\263\242\357\274\210workModeSet 1\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNearWave->setText(QCoreApplication::translate("radarAxis", "\350\277\221\346\263\242", nullptr));
#if QT_CONFIG(tooltip)
        btnNearWave->setToolTip(QCoreApplication::translate("radarAxis", "\345\210\207\346\215\242\350\277\221\346\263\242\357\274\210workModeSet 3\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        lblWaveMode->setText(QCoreApplication::translate("radarAxis", "--", nullptr));
#if QT_CONFIG(tooltip)
        mirrorComboCanType->setToolTip(QCoreApplication::translate("radarAxis", "CAN \350\256\276\345\244\207\347\261\273\345\236\213\357\274\210\344\270\216\344\270\273\347\252\227\345\217\243\345\220\214\346\255\245\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mirrorComboCanCh->setToolTip(QCoreApplication::translate("radarAxis", "CAN \351\200\232\351\201\223\357\274\210\344\270\216\344\270\273\347\252\227\345\217\243\345\220\214\346\255\245\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mirrorComboCanRate->setToolTip(QCoreApplication::translate("radarAxis", "CAN \346\200\273\347\272\277\344\273\262\350\243\201\346\263\242\347\211\271\347\216\207\357\274\210\344\270\216\344\270\273\347\252\227\345\217\243\345\220\214\346\255\245\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mirrorComboCanDataRate->setToolTip(QCoreApplication::translate("radarAxis", "CAN-FD \346\225\260\346\215\256\346\263\242\347\211\271\347\216\207\357\274\210\344\270\216\344\270\273\347\252\227\345\217\243\345\220\214\346\255\245\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        mirrorBtnStart->setText(QCoreApplication::translate("radarAxis", "Start", nullptr));
#if QT_CONFIG(tooltip)
        mirrorBtnStart->setToolTip(QCoreApplication::translate("radarAxis", "\345\220\257\345\212\250/\345\201\234\346\255\242 CAN \346\200\273\347\272\277\357\274\210\344\270\216\344\270\273\347\252\227\345\217\243 Start \346\214\211\351\222\256\345\220\214\346\255\245\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClassicMode->setText(QCoreApplication::translate("radarAxis", "\342\207\206 \347\273\217\345\205\270\346\250\241\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        btnClassicMode->setToolTip(QCoreApplication::translate("radarAxis", "\345\210\207\346\215\242\345\233\236\347\273\217\345\205\270\346\250\241\345\274\217\357\274\232\346\230\276\347\244\272\344\270\273\347\252\227\345\217\243\357\274\214\351\232\220\350\227\217\351\241\266\351\203\250\345\267\245\345\205\267\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxFilteringProbability->setText(QCoreApplication::translate("radarAxis", "\346\246\202\347\216\207(>):", nullptr));
        cBShowCar->setText(QCoreApplication::translate("radarAxis", "\344\270\215\346\230\276\347\244\272\347\273\277\347\202\271", nullptr));
        cBox_Static->setText(QCoreApplication::translate("radarAxis", "\347\233\270\345\257\271\351\235\231\346\255\242", nullptr));
        cBox_Come->setText(QCoreApplication::translate("radarAxis", "\347\233\270\345\257\271\346\235\245\345\220\221", nullptr));
        cBox_FarAway->setText(QCoreApplication::translate("radarAxis", "\347\233\270\345\257\271\345\216\273\345\220\221", nullptr));
        cBox_UnKnow->setText(QCoreApplication::translate("radarAxis", "\350\277\207\346\273\244\346\234\252\347\237\245", nullptr));
        cBox_FA->setText(QCoreApplication::translate("radarAxis", "\302\261A", nullptr));
        checkBox_area->setText(QCoreApplication::translate("radarAxis", "Area", nullptr));
        checkBoxTrueValueTrack->setText(QCoreApplication::translate("radarAxis", "\347\234\237\345\200\274", nullptr));
        checkBoxDisplayACC->setText(QCoreApplication::translate("radarAxis", "ACC", nullptr));
        pushButtonTrackSettings->setText(QString());
        cBoxCh1->setText(QCoreApplication::translate("radarAxis", "CH1", nullptr));
        cBoxCh2->setText(QCoreApplication::translate("radarAxis", "CH2", nullptr));
        cBoxBrigeFilter->setText(QCoreApplication::translate("radarAxis", "No", nullptr));
        checkBoxSpeedGreaterThan90->setText(QCoreApplication::translate("radarAxis", "V>90", nullptr));
        checkBoxMatchFlagLessThan3->setText(QCoreApplication::translate("radarAxis", "MF<3", nullptr));
        checkBoxTag->setText(QCoreApplication::translate("radarAxis", "TAG\345\214\272\345\210\206", nullptr));
        cBoxFcw->setText(QCoreApplication::translate("radarAxis", "FCW", nullptr));
        lEAngleOffset->setText(QCoreApplication::translate("radarAxis", "0", nullptr));
        lbObjCnt->setText(QCoreApplication::translate("radarAxis", "trk= 0 raw=  0", nullptr));
        cBox_Static_R->setText(QCoreApplication::translate("radarAxis", "\347\233\270\345\257\271\351\235\231\346\255\242", nullptr));
        cBox_Come_R->setText(QCoreApplication::translate("radarAxis", "\347\233\270\345\257\271\346\235\245\345\220\221", nullptr));
        cBox_FarAway_R->setText(QCoreApplication::translate("radarAxis", "\347\233\270\345\257\271\345\216\273\345\220\221", nullptr));
        checkBoxTrueValueRaw->setText(QCoreApplication::translate("radarAxis", "\347\234\237\345\200\274", nullptr));
        pushButtonRawSettings->setText(QString());
        checkBoxLingering->setText(QCoreApplication::translate("radarAxis", "\351\251\273\347\225\231\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class radarAxis: public Ui_radarAxis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADARAXIS_H
