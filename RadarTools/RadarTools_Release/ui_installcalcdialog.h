/********************************************************************************
** Form generated from reading UI file 'installcalcdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLCALCDIALOG_H
#define UI_INSTALLCALCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InstallCalcDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_Ext;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *lEdit_AngleRange;
    QCheckBox *cBox_AngleRange;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *cBox_SendInfoResult;
    QCheckBox *cBox_SendInfoExtCfg;
    QCheckBox *cBox_SendInfoSN;
    QCheckBox *cBox_SendInfoEn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lEdit_HistAngleThr;
    QCheckBox *cBox_HistAngleThr;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLineEdit *lEdit_HistValidThr;
    QCheckBox *cBox_HistValidThr;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *lEdit_NoObjCntThr;
    QCheckBox *cBox_NoObjCntThr;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLineEdit *lEdit_TimeoutThr;
    QCheckBox *cBox_TimeoutThr;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLineEdit *lEdit_WaitThr;
    QCheckBox *cBox_WaitThr;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QLineEdit *lEdit_ExtTxSel;
    QCheckBox *cBox_ExtTxSel;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pButton_ExtCfg;
    QPushButton *pButton_ExtCfgRead;
    QPushButton *pButton_ExtCfgmean;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pButton_apply;
    QPushButton *pB_close;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *cBox_installCalcEn;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *cBox_selfSendInfo;
    QPushButton *pButton_Save;
    QLineEdit *lEdit_objRangeThreashold;
    QLineEdit *lEdit_objRange;
    QLineEdit *lEdit_objAngleThreshold;
    QLineEdit *lEdit_objAngle;
    QPushButton *pButton_SetExtCfg;
    QCheckBox *cBox_selfSendInfoSN;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QTextEdit *tEdit_calcResult;
    QPushButton *pButton_getResult;

    void setupUi(QDialog *InstallCalcDialog)
    {
        if (InstallCalcDialog->objectName().isEmpty())
            InstallCalcDialog->setObjectName(QString::fromUtf8("InstallCalcDialog"));
        InstallCalcDialog->resize(880, 528);
        gridLayout_2 = new QGridLayout(InstallCalcDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_Ext = new QGroupBox(InstallCalcDialog);
        groupBox_Ext->setObjectName(QString::fromUtf8("groupBox_Ext"));
        gridLayout_5 = new QGridLayout(groupBox_Ext);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(groupBox_Ext);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        lEdit_AngleRange = new QLineEdit(groupBox_Ext);
        lEdit_AngleRange->setObjectName(QString::fromUtf8("lEdit_AngleRange"));

        horizontalLayout->addWidget(lEdit_AngleRange);

        cBox_AngleRange = new QCheckBox(groupBox_Ext);
        cBox_AngleRange->setObjectName(QString::fromUtf8("cBox_AngleRange"));

        horizontalLayout->addWidget(cBox_AngleRange);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(groupBox_Ext);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        cBox_SendInfoResult = new QCheckBox(groupBox_Ext);
        cBox_SendInfoResult->setObjectName(QString::fromUtf8("cBox_SendInfoResult"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        cBox_SendInfoResult->setFont(font);

        horizontalLayout_9->addWidget(cBox_SendInfoResult);

        cBox_SendInfoExtCfg = new QCheckBox(groupBox_Ext);
        cBox_SendInfoExtCfg->setObjectName(QString::fromUtf8("cBox_SendInfoExtCfg"));
        cBox_SendInfoExtCfg->setEnabled(true);
        cBox_SendInfoExtCfg->setFont(font);

        horizontalLayout_9->addWidget(cBox_SendInfoExtCfg);

        cBox_SendInfoSN = new QCheckBox(groupBox_Ext);
        cBox_SendInfoSN->setObjectName(QString::fromUtf8("cBox_SendInfoSN"));
        cBox_SendInfoSN->setFont(font);

        horizontalLayout_9->addWidget(cBox_SendInfoSN);


        horizontalLayout_2->addLayout(horizontalLayout_9);

        cBox_SendInfoEn = new QCheckBox(groupBox_Ext);
        cBox_SendInfoEn->setObjectName(QString::fromUtf8("cBox_SendInfoEn"));

        horizontalLayout_2->addWidget(cBox_SendInfoEn);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(groupBox_Ext);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lEdit_HistAngleThr = new QLineEdit(groupBox_Ext);
        lEdit_HistAngleThr->setObjectName(QString::fromUtf8("lEdit_HistAngleThr"));

        horizontalLayout_3->addWidget(lEdit_HistAngleThr);

        cBox_HistAngleThr = new QCheckBox(groupBox_Ext);
        cBox_HistAngleThr->setObjectName(QString::fromUtf8("cBox_HistAngleThr"));

        horizontalLayout_3->addWidget(cBox_HistAngleThr);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(groupBox_Ext);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        lEdit_HistValidThr = new QLineEdit(groupBox_Ext);
        lEdit_HistValidThr->setObjectName(QString::fromUtf8("lEdit_HistValidThr"));

        horizontalLayout_4->addWidget(lEdit_HistValidThr);

        cBox_HistValidThr = new QCheckBox(groupBox_Ext);
        cBox_HistValidThr->setObjectName(QString::fromUtf8("cBox_HistValidThr"));

        horizontalLayout_4->addWidget(cBox_HistValidThr);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(groupBox_Ext);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        lEdit_NoObjCntThr = new QLineEdit(groupBox_Ext);
        lEdit_NoObjCntThr->setObjectName(QString::fromUtf8("lEdit_NoObjCntThr"));

        horizontalLayout_5->addWidget(lEdit_NoObjCntThr);

        cBox_NoObjCntThr = new QCheckBox(groupBox_Ext);
        cBox_NoObjCntThr->setObjectName(QString::fromUtf8("cBox_NoObjCntThr"));

        horizontalLayout_5->addWidget(cBox_NoObjCntThr);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_12 = new QLabel(groupBox_Ext);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_6->addWidget(label_12);

        lEdit_TimeoutThr = new QLineEdit(groupBox_Ext);
        lEdit_TimeoutThr->setObjectName(QString::fromUtf8("lEdit_TimeoutThr"));

        horizontalLayout_6->addWidget(lEdit_TimeoutThr);

        cBox_TimeoutThr = new QCheckBox(groupBox_Ext);
        cBox_TimeoutThr->setObjectName(QString::fromUtf8("cBox_TimeoutThr"));

        horizontalLayout_6->addWidget(cBox_TimeoutThr);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_13 = new QLabel(groupBox_Ext);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_7->addWidget(label_13);

        lEdit_WaitThr = new QLineEdit(groupBox_Ext);
        lEdit_WaitThr->setObjectName(QString::fromUtf8("lEdit_WaitThr"));

        horizontalLayout_7->addWidget(lEdit_WaitThr);

        cBox_WaitThr = new QCheckBox(groupBox_Ext);
        cBox_WaitThr->setObjectName(QString::fromUtf8("cBox_WaitThr"));

        horizontalLayout_7->addWidget(cBox_WaitThr);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_14 = new QLabel(groupBox_Ext);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_10->addWidget(label_14);

        lEdit_ExtTxSel = new QLineEdit(groupBox_Ext);
        lEdit_ExtTxSel->setObjectName(QString::fromUtf8("lEdit_ExtTxSel"));

        horizontalLayout_10->addWidget(lEdit_ExtTxSel);

        cBox_ExtTxSel = new QCheckBox(groupBox_Ext);
        cBox_ExtTxSel->setObjectName(QString::fromUtf8("cBox_ExtTxSel"));

        horizontalLayout_10->addWidget(cBox_ExtTxSel);

        horizontalLayout_10->setStretch(0, 2);
        horizontalLayout_10->setStretch(1, 2);

        gridLayout_5->addLayout(horizontalLayout_10, 7, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pButton_ExtCfg = new QPushButton(groupBox_Ext);
        pButton_ExtCfg->setObjectName(QString::fromUtf8("pButton_ExtCfg"));

        horizontalLayout_8->addWidget(pButton_ExtCfg);

        pButton_ExtCfgRead = new QPushButton(groupBox_Ext);
        pButton_ExtCfgRead->setObjectName(QString::fromUtf8("pButton_ExtCfgRead"));

        horizontalLayout_8->addWidget(pButton_ExtCfgRead);

        pButton_ExtCfgmean = new QPushButton(groupBox_Ext);
        pButton_ExtCfgmean->setObjectName(QString::fromUtf8("pButton_ExtCfgmean"));

        horizontalLayout_8->addWidget(pButton_ExtCfgmean);


        gridLayout_5->addLayout(horizontalLayout_8, 8, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_Ext, 3, 0, 1, 1);

        groupBox = new QGroupBox(InstallCalcDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pButton_apply = new QPushButton(widget);
        pButton_apply->setObjectName(QString::fromUtf8("pButton_apply"));

        gridLayout->addWidget(pButton_apply, 9, 2, 1, 1);

        pB_close = new QPushButton(widget);
        pB_close->setObjectName(QString::fromUtf8("pB_close"));

        gridLayout->addWidget(pB_close, 9, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 2, 2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 2, 2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 2, 1);

        cBox_installCalcEn = new QCheckBox(widget);
        cBox_installCalcEn->setObjectName(QString::fromUtf8("cBox_installCalcEn"));

        gridLayout->addWidget(cBox_installCalcEn, 0, 2, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        cBox_selfSendInfo = new QCheckBox(widget);
        cBox_selfSendInfo->setObjectName(QString::fromUtf8("cBox_selfSendInfo"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        cBox_selfSendInfo->setFont(font1);

        gridLayout->addWidget(cBox_selfSendInfo, 8, 2, 1, 1);

        pButton_Save = new QPushButton(widget);
        pButton_Save->setObjectName(QString::fromUtf8("pButton_Save"));

        gridLayout->addWidget(pButton_Save, 9, 4, 1, 1);

        lEdit_objRangeThreashold = new QLineEdit(widget);
        lEdit_objRangeThreashold->setObjectName(QString::fromUtf8("lEdit_objRangeThreashold"));

        gridLayout->addWidget(lEdit_objRangeThreashold, 6, 2, 2, 3);

        lEdit_objRange = new QLineEdit(widget);
        lEdit_objRange->setObjectName(QString::fromUtf8("lEdit_objRange"));

        gridLayout->addWidget(lEdit_objRange, 4, 2, 2, 3);

        lEdit_objAngleThreshold = new QLineEdit(widget);
        lEdit_objAngleThreshold->setObjectName(QString::fromUtf8("lEdit_objAngleThreshold"));

        gridLayout->addWidget(lEdit_objAngleThreshold, 2, 2, 2, 3);

        lEdit_objAngle = new QLineEdit(widget);
        lEdit_objAngle->setObjectName(QString::fromUtf8("lEdit_objAngle"));

        gridLayout->addWidget(lEdit_objAngle, 1, 2, 1, 3);

        pButton_SetExtCfg = new QPushButton(widget);
        pButton_SetExtCfg->setObjectName(QString::fromUtf8("pButton_SetExtCfg"));

        gridLayout->addWidget(pButton_SetExtCfg, 9, 0, 1, 1);

        cBox_selfSendInfoSN = new QCheckBox(widget);
        cBox_selfSendInfoSN->setObjectName(QString::fromUtf8("cBox_selfSendInfoSN"));
        cBox_selfSendInfoSN->setFont(font1);

        gridLayout->addWidget(cBox_selfSendInfoSN, 8, 3, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnMinimumWidth(0, 1);
        gridLayout_3->setColumnMinimumWidth(1, 1);

        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(InstallCalcDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tEdit_calcResult = new QTextEdit(groupBox_2);
        tEdit_calcResult->setObjectName(QString::fromUtf8("tEdit_calcResult"));

        gridLayout_4->addWidget(tEdit_calcResult, 0, 1, 2, 1);

        pButton_getResult = new QPushButton(groupBox_2);
        pButton_getResult->setObjectName(QString::fromUtf8("pButton_getResult"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pButton_getResult->sizePolicy().hasHeightForWidth());
        pButton_getResult->setSizePolicy(sizePolicy);
        pButton_getResult->setMaximumSize(QSize(16777215, 100));

        gridLayout_4->addWidget(pButton_getResult, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 2, 1, 2, 1);

        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setRowMinimumHeight(3, 1);

        retranslateUi(InstallCalcDialog);

        QMetaObject::connectSlotsByName(InstallCalcDialog);
    } // setupUi

    void retranslateUi(QDialog *InstallCalcDialog)
    {
        InstallCalcDialog->setWindowTitle(QCoreApplication::translate("InstallCalcDialog", "Dialog", nullptr));
        groupBox_Ext->setTitle(QCoreApplication::translate("InstallCalcDialog", "\346\211\251\345\261\225\351\205\215\347\275\256", nullptr));
        label_7->setText(QCoreApplication::translate("InstallCalcDialog", "AngleCalcRange\357\274\232", nullptr));
        lEdit_AngleRange->setText(QString());
        lEdit_AngleRange->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-10deg", nullptr));
        cBox_AngleRange->setText(QCoreApplication::translate("InstallCalcDialog", "En", nullptr));
        label_8->setText(QCoreApplication::translate("InstallCalcDialog", "SendInfoEn\357\274\232", nullptr));
        cBox_SendInfoResult->setText(QCoreApplication::translate("InstallCalcDialog", "result", nullptr));
        cBox_SendInfoExtCfg->setText(QCoreApplication::translate("InstallCalcDialog", "ExtCfg", nullptr));
        cBox_SendInfoSN->setText(QCoreApplication::translate("InstallCalcDialog", "SN", nullptr));
        cBox_SendInfoEn->setText(QCoreApplication::translate("InstallCalcDialog", "En", nullptr));
        label_9->setText(QCoreApplication::translate("InstallCalcDialog", "HistAngleThr\357\274\232", nullptr));
        lEdit_HistAngleThr->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-1deg", nullptr));
        cBox_HistAngleThr->setText(QCoreApplication::translate("InstallCalcDialog", "En", nullptr));
        label_10->setText(QCoreApplication::translate("InstallCalcDialog", "HistValidThr\357\274\232", nullptr));
        lEdit_HistValidThr->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-10", nullptr));
        cBox_HistValidThr->setText(QCoreApplication::translate("InstallCalcDialog", "En", nullptr));
        label_11->setText(QCoreApplication::translate("InstallCalcDialog", "NoObjCntThr\357\274\232", nullptr));
        lEdit_NoObjCntThr->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-120", nullptr));
        cBox_NoObjCntThr->setText(QCoreApplication::translate("InstallCalcDialog", "En", nullptr));
        label_12->setText(QCoreApplication::translate("InstallCalcDialog", "TimeoutThr\357\274\232", nullptr));
        lEdit_TimeoutThr->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-126", nullptr));
        cBox_TimeoutThr->setText(QCoreApplication::translate("InstallCalcDialog", "En", nullptr));
        label_13->setText(QCoreApplication::translate("InstallCalcDialog", "WaitThr\357\274\232", nullptr));
        lEdit_WaitThr->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-510", nullptr));
        cBox_WaitThr->setText(QCoreApplication::translate("InstallCalcDialog", "En", nullptr));
        label_14->setText(QCoreApplication::translate("InstallCalcDialog", "TxSel:", nullptr));
        lEdit_ExtTxSel->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-Tx1+Tx2 1-Tx1  2-Tx2", nullptr));
        cBox_ExtTxSel->setText(QCoreApplication::translate("InstallCalcDialog", "En", nullptr));
        pButton_ExtCfg->setText(QCoreApplication::translate("InstallCalcDialog", "\351\205\215\347\275\256", nullptr));
        pButton_ExtCfgRead->setText(QCoreApplication::translate("InstallCalcDialog", "\350\257\273\345\217\226", nullptr));
        pButton_ExtCfgmean->setText(QCoreApplication::translate("InstallCalcDialog", "\345\217\202\346\225\260\350\247\243\351\207\212", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InstallCalcDialog", "\351\205\215\347\275\256", nullptr));
        pButton_apply->setText(QCoreApplication::translate("InstallCalcDialog", "\346\240\207\345\256\232", nullptr));
        pB_close->setText(QCoreApplication::translate("InstallCalcDialog", "\345\205\263\351\227\255", nullptr));
        label_2->setText(QCoreApplication::translate("InstallCalcDialog", "ObjAngle Threshold:", nullptr));
        label->setText(QCoreApplication::translate("InstallCalcDialog", "ObjAngle:", nullptr));
        label_3->setText(QCoreApplication::translate("InstallCalcDialog", "calcObjRange:", nullptr));
        label_4->setText(QCoreApplication::translate("InstallCalcDialog", "calcObjRange Threshold:", nullptr));
        cBox_installCalcEn->setText(QString());
        label_5->setText(QCoreApplication::translate("InstallCalcDialog", "Calc Enable:", nullptr));
        label_6->setText(QCoreApplication::translate("InstallCalcDialog", "\346\230\257\345\220\246\350\207\252\345\212\250\345\217\221\351\200\201\347\273\223\346\236\234\357\274\232", nullptr));
        cBox_selfSendInfo->setText(QCoreApplication::translate("InstallCalcDialog", "result", nullptr));
        pButton_Save->setText(QCoreApplication::translate("InstallCalcDialog", "\345\255\230\345\202\250", nullptr));
        lEdit_objRangeThreashold->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-25", nullptr));
        lEdit_objRange->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-200", nullptr));
        lEdit_objAngleThreshold->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "0-20", nullptr));
        lEdit_objAngle->setPlaceholderText(QCoreApplication::translate("InstallCalcDialog", "-10 - +10", nullptr));
        pButton_SetExtCfg->setText(QCoreApplication::translate("InstallCalcDialog", "\346\211\251\345\261\225\351\205\215\347\275\256", nullptr));
        cBox_selfSendInfoSN->setText(QCoreApplication::translate("InstallCalcDialog", "SN", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("InstallCalcDialog", "\346\240\207\345\256\232\347\273\223\346\236\234", nullptr));
        pButton_getResult->setText(QCoreApplication::translate("InstallCalcDialog", "\350\216\267\345\217\226\346\240\241\345\207\206\347\273\223\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstallCalcDialog: public Ui_InstallCalcDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLCALCDIALOG_H
