/********************************************************************************
** Form generated from reading UI file 'adcdata.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCDATA_H
#define UI_ADCDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_adcData
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_6;
    QLineEdit *lEditFileName;
    QLabel *label_5;
    QLabel *lbelStatus;
    QComboBox *cBox_MiMo;
    QLineEdit *lEdit_SampleN;
    QLineEdit *lEdit_ChirpN;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pBStart;
    QLabel *label_3;
    QComboBox *comboBoxCH;
    QLabel *label_2;
    QComboBox *comboBoxFrameType;
    QLabel *label;
    QLabel *label_8;
    QPushButton *pButtonImport;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBoxRadar;
    QLabel *label_11;
    QComboBox *comboBoxDataType;
    QPushButton *pushButton_mode;
    QVBoxLayout *verticalLayout;
    QTextEdit *tEditLog;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QProgressBar *pBarAdc;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QGridLayout *gridLayout;
    QCustomPlot *wid_Time;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QCustomPlot *wid_RFFT;

    void setupUi(QWidget *adcData)
    {
        if (adcData->objectName().isEmpty())
            adcData->setObjectName(QString::fromUtf8("adcData"));
        adcData->resize(975, 569);
        adcData->setStyleSheet(QString::fromUtf8("QWidget#adcData { background-color: rgb(29, 29, 29); }\n"
"QWidget { color: rgb(230, 230, 230); background-color: rgb(29, 29, 29); }\n"
"QLabel { background: transparent; color: rgb(230, 230, 230); }\n"
"QLineEdit, QPlainTextEdit, QTextEdit { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; padding: 2px; }\n"
"QComboBox { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; padding: 2px 6px; }\n"
"QComboBox QAbstractItemView { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); selection-background-color: rgb(70, 100, 140); }\n"
"QSpinBox, QDoubleSpinBox { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; }\n"
"QPushButton { background-color: rgb(60, 60, 60); color: rgb(230, 230, 230); border: 1px solid rgb(100, 100, 100); border-radius: 3px; padding: 4px 12px; min-height: 22px; }\n"
"QPushButton:hover { "
                        "background-color: rgb(80, 80, 80); border-color: rgb(140, 140, 140); }\n"
"QPushButton:pressed { background-color: rgb(45, 45, 45); }\n"
"QPushButton:disabled { color: rgb(140, 140, 140); background-color: rgb(50, 50, 50); }\n"
"QCheckBox, QRadioButton { color: rgb(230, 230, 230); background: transparent; }\n"
"QGroupBox { color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; margin-top: 8px; padding-top: 6px; }\n"
"QGroupBox::title { subcontrol-origin: margin; left: 8px; padding: 0 4px; }\n"
"QProgressBar { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; text-align: center; }\n"
"QProgressBar::chunk { background-color: rgb(70, 130, 180); }\n"
"QTableView, QTableWidget, QListView, QTreeView { background-color: rgb(35, 35, 35); color: rgb(230, 230, 230); gridline-color: rgb(70, 70, 70); selection-background-color: rgb(70, 100, 140); }\n"
"QHeaderView::section { background-color: rgb(50, 50, 50); color: rgb(230, 230,"
                        " 230); border: 1px solid rgb(70, 70, 70); padding: 2px; }\n"
"QScrollBar:vertical, QScrollBar:horizontal { background: rgb(40, 40, 40); border: none; }\n"
"QScrollBar::handle { background: rgb(80, 80, 80); border-radius: 3px; }\n"
"QScrollBar::handle:hover { background: rgb(110, 110, 110); }\n"
"QMenu { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); }\n"
"QMenu::item:selected { background-color: rgb(70, 100, 140); }\n"
"QToolTip { background-color: rgb(60, 60, 60); color: rgb(230, 230, 230); border: 1px solid rgb(100, 100, 100); }"));
        verticalLayout_2 = new QVBoxLayout(adcData);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lEditFileName = new QLineEdit(adcData);
        lEditFileName->setObjectName(QString::fromUtf8("lEditFileName"));

        gridLayout_6->addWidget(lEditFileName, 7, 2, 1, 1);

        label_5 = new QLabel(adcData);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        gridLayout_6->addWidget(label_5, 3, 0, 1, 2);

        lbelStatus = new QLabel(adcData);
        lbelStatus->setObjectName(QString::fromUtf8("lbelStatus"));

        gridLayout_6->addWidget(lbelStatus, 6, 2, 1, 1);

        cBox_MiMo = new QComboBox(adcData);
        cBox_MiMo->addItem(QString());
        cBox_MiMo->addItem(QString());
        cBox_MiMo->addItem(QString());
        cBox_MiMo->setObjectName(QString::fromUtf8("cBox_MiMo"));
        cBox_MiMo->setEnabled(false);

        gridLayout_6->addWidget(cBox_MiMo, 5, 2, 1, 1);

        lEdit_SampleN = new QLineEdit(adcData);
        lEdit_SampleN->setObjectName(QString::fromUtf8("lEdit_SampleN"));
        lEdit_SampleN->setEnabled(false);

        gridLayout_6->addWidget(lEdit_SampleN, 3, 2, 1, 1);

        lEdit_ChirpN = new QLineEdit(adcData);
        lEdit_ChirpN->setObjectName(QString::fromUtf8("lEdit_ChirpN"));
        lEdit_ChirpN->setEnabled(false);

        gridLayout_6->addWidget(lEdit_ChirpN, 4, 2, 1, 1);

        label_4 = new QLabel(adcData);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_6->addWidget(label_4, 5, 0, 1, 2);

        label_6 = new QLabel(adcData);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_6->addWidget(label_6, 4, 0, 1, 2);

        pBStart = new QPushButton(adcData);
        pBStart->setObjectName(QString::fromUtf8("pBStart"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pBStart->sizePolicy().hasHeightForWidth());
        pBStart->setSizePolicy(sizePolicy);
        pBStart->setMinimumSize(QSize(0, 70));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setWeight(75);
        pBStart->setFont(font1);

        gridLayout_6->addWidget(pBStart, 0, 0, 1, 3);

        label_3 = new QLabel(adcData);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_6->addWidget(label_3, 2, 0, 1, 2);

        comboBoxCH = new QComboBox(adcData);
        comboBoxCH->addItem(QString());
        comboBoxCH->addItem(QString());
        comboBoxCH->addItem(QString());
        comboBoxCH->addItem(QString());
        comboBoxCH->addItem(QString());
        comboBoxCH->setObjectName(QString::fromUtf8("comboBoxCH"));
        comboBoxCH->setEnabled(true);

        gridLayout_6->addWidget(comboBoxCH, 2, 2, 1, 1);

        label_2 = new QLabel(adcData);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_6->addWidget(label_2, 6, 0, 1, 2);

        comboBoxFrameType = new QComboBox(adcData);
        comboBoxFrameType->addItem(QString());
        comboBoxFrameType->addItem(QString());
        comboBoxFrameType->addItem(QString());
        comboBoxFrameType->addItem(QString());
        comboBoxFrameType->addItem(QString());
        comboBoxFrameType->setObjectName(QString::fromUtf8("comboBoxFrameType"));
        comboBoxFrameType->setEnabled(true);

        gridLayout_6->addWidget(comboBoxFrameType, 1, 2, 1, 1);

        label = new QLabel(adcData);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_6->addWidget(label, 7, 0, 1, 2);

        label_8 = new QLabel(adcData);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_6->addWidget(label_8, 1, 0, 1, 2);

        pButtonImport = new QPushButton(adcData);
        pButtonImport->setObjectName(QString::fromUtf8("pButtonImport"));

        gridLayout_6->addWidget(pButtonImport, 8, 2, 1, 1);

        label_9 = new QLabel(adcData);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setEnabled(true);
        label_9->setFont(font);

        gridLayout_6->addWidget(label_9, 8, 0, 1, 1);

        label_10 = new QLabel(adcData);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_6->addWidget(label_10, 9, 0, 1, 2);

        comboBoxRadar = new QComboBox(adcData);
        comboBoxRadar->addItem(QString());
        comboBoxRadar->addItem(QString());
        comboBoxRadar->addItem(QString());
        comboBoxRadar->addItem(QString());
        comboBoxRadar->addItem(QString());
        comboBoxRadar->setObjectName(QString::fromUtf8("comboBoxRadar"));

        gridLayout_6->addWidget(comboBoxRadar, 9, 2, 1, 1);

        label_11 = new QLabel(adcData);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_6->addWidget(label_11, 10, 0, 1, 2);

        comboBoxDataType = new QComboBox(adcData);
        comboBoxDataType->addItem(QString());
        comboBoxDataType->addItem(QString());
        comboBoxDataType->addItem(QString());
        comboBoxDataType->setObjectName(QString::fromUtf8("comboBoxDataType"));

        gridLayout_6->addWidget(comboBoxDataType, 10, 2, 1, 1);

        pushButton_mode = new QPushButton(adcData);
        pushButton_mode->setObjectName(QString::fromUtf8("pushButton_mode"));
        pushButton_mode->setVisible(false);
        pushButton_mode->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_mode->setFont(font2);

        gridLayout_6->addWidget(pushButton_mode, 11, 0, 1, 3);

        gridLayout_6->setRowStretch(0, 5);
        gridLayout_6->setRowStretch(1, 1);
        gridLayout_6->setRowStretch(2, 1);
        gridLayout_6->setRowStretch(3, 1);
        gridLayout_6->setRowStretch(4, 1);
        gridLayout_6->setRowStretch(5, 1);
        gridLayout_6->setRowStretch(7, 5);
        gridLayout_6->setRowStretch(9, 1);
        gridLayout_6->setRowStretch(10, 1);
        gridLayout_6->setRowStretch(11, 2);
        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(2, 2);
        gridLayout_6->setRowMinimumHeight(0, 5);
        gridLayout_6->setRowMinimumHeight(1, 1);
        gridLayout_6->setRowMinimumHeight(2, 1);
        gridLayout_6->setRowMinimumHeight(3, 1);
        gridLayout_6->setRowMinimumHeight(4, 1);
        gridLayout_6->setRowMinimumHeight(5, 1);
        gridLayout_6->setRowMinimumHeight(7, 5);
        gridLayout_6->setRowMinimumHeight(9, 1);
        gridLayout_6->setRowMinimumHeight(10, 1);
        gridLayout_6->setRowMinimumHeight(11, 2);

        horizontalLayout_2->addLayout(gridLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tEditLog = new QTextEdit(adcData);
        tEditLog->setObjectName(QString::fromUtf8("tEditLog"));

        verticalLayout->addWidget(tEditLog);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(adcData);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        pBarAdc = new QProgressBar(adcData);
        pBarAdc->setObjectName(QString::fromUtf8("pBarAdc"));
        pBarAdc->setValue(24);

        horizontalLayout->addWidget(pBarAdc);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget_2 = new QTabWidget(adcData);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wid_Time = new QCustomPlot(tab);
        wid_Time->setObjectName(QString::fromUtf8("wid_Time"));

        gridLayout->addWidget(wid_Time, 0, 0, 1, 1);

        tabWidget_2->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        wid_RFFT = new QCustomPlot(tab_3);
        wid_RFFT->setObjectName(QString::fromUtf8("wid_RFFT"));

        gridLayout_4->addWidget(wid_RFFT, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);

        retranslateUi(adcData);

        cBox_MiMo->setCurrentIndex(2);
        comboBoxCH->setCurrentIndex(0);
        comboBoxFrameType->setCurrentIndex(4);
        comboBoxRadar->setCurrentIndex(0);
        comboBoxDataType->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(adcData);
    } // setupUi

    void retranslateUi(QWidget *adcData)
    {
        adcData->setWindowTitle(QCoreApplication::translate("adcData", "Form", nullptr));
        lEditFileName->setText(QCoreApplication::translate("adcData", "test", nullptr));
        label_5->setText(QCoreApplication::translate("adcData", "Sample_N:", nullptr));
        lbelStatus->setText(QCoreApplication::translate("adcData", "---------", nullptr));
        cBox_MiMo->setItemText(0, QString());
        cBox_MiMo->setItemText(1, QCoreApplication::translate("adcData", "SISO", nullptr));
        cBox_MiMo->setItemText(2, QCoreApplication::translate("adcData", "MIMO", nullptr));

        label_4->setText(QCoreApplication::translate("adcData", "MIMO:", nullptr));
        label_6->setText(QCoreApplication::translate("adcData", "Chirp_N:", nullptr));
        pBStart->setText(QCoreApplication::translate("adcData", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
        label_3->setText(QCoreApplication::translate("adcData", "RxCH:", nullptr));
        comboBoxCH->setItemText(0, QCoreApplication::translate("adcData", "0", nullptr));
        comboBoxCH->setItemText(1, QCoreApplication::translate("adcData", "1", nullptr));
        comboBoxCH->setItemText(2, QCoreApplication::translate("adcData", "2", nullptr));
        comboBoxCH->setItemText(3, QCoreApplication::translate("adcData", "3", nullptr));
        comboBoxCH->setItemText(4, QCoreApplication::translate("adcData", "ALL", nullptr));

        comboBoxCH->setCurrentText(QCoreApplication::translate("adcData", "0", nullptr));
        label_2->setText(QCoreApplication::translate("adcData", "\347\212\266\346\200\201\357\274\232", nullptr));
        comboBoxFrameType->setItemText(0, QCoreApplication::translate("adcData", "0", nullptr));
        comboBoxFrameType->setItemText(1, QCoreApplication::translate("adcData", "1", nullptr));
        comboBoxFrameType->setItemText(2, QCoreApplication::translate("adcData", "2", nullptr));
        comboBoxFrameType->setItemText(3, QCoreApplication::translate("adcData", "3", nullptr));
        comboBoxFrameType->setItemText(4, QCoreApplication::translate("adcData", "ALL", nullptr));

        label->setText(QCoreApplication::translate("adcData", "\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("adcData", "FrameType", nullptr));
        pButtonImport->setText(QCoreApplication::translate("adcData", "\347\202\271\345\207\273\351\200\211\346\213\251\345\233\236\346\224\276\346\226\207\344\273\266", nullptr));
        label_9->setText(QCoreApplication::translate("adcData", "\346\225\260\346\215\256\345\233\236\346\224\276\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("adcData", "Radar(dbgId):", nullptr));
        comboBoxRadar->setItemText(0, QCoreApplication::translate("adcData", "0x145", nullptr));
        comboBoxRadar->setItemText(1, QCoreApplication::translate("adcData", "0x144", nullptr));
        comboBoxRadar->setItemText(2, QCoreApplication::translate("adcData", "0x146", nullptr));
        comboBoxRadar->setItemText(3, QCoreApplication::translate("adcData", "0x147", nullptr));
        comboBoxRadar->setItemText(4, QCoreApplication::translate("adcData", "0x7A0", nullptr));

        label_11->setText(QCoreApplication::translate("adcData", "DataType:", nullptr));
        comboBoxDataType->setItemText(0, QCoreApplication::translate("adcData", "ADCData", nullptr));
        comboBoxDataType->setItemText(1, QCoreApplication::translate("adcData", "1DFFTData", nullptr));
        comboBoxDataType->setItemText(2, QCoreApplication::translate("adcData", "2DFFTData", nullptr));

        pushButton_mode->setText(QCoreApplication::translate("adcData", "\350\277\233\345\205\245ADC\346\250\241\345\274\217", nullptr));
        label_7->setText(QCoreApplication::translate("adcData", "\351\207\207\351\233\206\350\277\233\345\272\246\357\274\232", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("adcData", "Time", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("adcData", "RFFT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adcData: public Ui_adcData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCDATA_H
