/********************************************************************************
** Form generated from reading UI file 'objlistselect.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJLISTSELECT_H
#define UI_OBJLISTSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ObjListSelect
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pButton;
    QComboBox *cBox_2row;
    QComboBox *cBox_1row;
    QLabel *label_2;
    QPushButton *pButtonExplain;

    void setupUi(QDialog *ObjListSelect)
    {
        if (ObjListSelect->objectName().isEmpty())
            ObjListSelect->setObjectName(QString::fromUtf8("ObjListSelect"));
        ObjListSelect->resize(262, 132);
        ObjListSelect->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(29, 29, 29);"));
        gridLayout = new QGridLayout(ObjListSelect);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ObjListSelect);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pButton = new QPushButton(ObjListSelect);
        pButton->setObjectName(QString::fromUtf8("pButton"));
        pButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pButton, 3, 0, 1, 2);

        cBox_2row = new QComboBox(ObjListSelect);
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->addItem(QString());
        cBox_2row->setObjectName(QString::fromUtf8("cBox_2row"));
        cBox_2row->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(cBox_2row, 1, 1, 1, 1);

        cBox_1row = new QComboBox(ObjListSelect);
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->addItem(QString());
        cBox_1row->setObjectName(QString::fromUtf8("cBox_1row"));
        cBox_1row->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(cBox_1row, 0, 1, 1, 1);

        label_2 = new QLabel(ObjListSelect);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pButtonExplain = new QPushButton(ObjListSelect);
        pButtonExplain->setObjectName(QString::fromUtf8("pButtonExplain"));
        pButtonExplain->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pButtonExplain, 2, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(ObjListSelect);
        QObject::connect(pButton, SIGNAL(clicked()), ObjListSelect, SLOT(close()));

        QMetaObject::connectSlotsByName(ObjListSelect);
    } // setupUi

    void retranslateUi(QDialog *ObjListSelect)
    {
        ObjListSelect->setWindowTitle(QCoreApplication::translate("ObjListSelect", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ObjListSelect", "\347\254\254\344\270\200\345\210\227\357\274\232", nullptr));
        pButton->setText(QCoreApplication::translate("ObjListSelect", "close", nullptr));
        cBox_2row->setItemText(0, QCoreApplication::translate("ObjListSelect", "Null", nullptr));
        cBox_2row->setItemText(1, QCoreApplication::translate("ObjListSelect", "Prob", nullptr));
        cBox_2row->setItemText(2, QCoreApplication::translate("ObjListSelect", "SNR", nullptr));
        cBox_2row->setItemText(3, QCoreApplication::translate("ObjListSelect", "KS", nullptr));
        cBox_2row->setItemText(4, QCoreApplication::translate("ObjListSelect", "Width", nullptr));
        cBox_2row->setItemText(5, QCoreApplication::translate("ObjListSelect", "Length", nullptr));
        cBox_2row->setItemText(6, QCoreApplication::translate("ObjListSelect", "X", nullptr));
        cBox_2row->setItemText(7, QCoreApplication::translate("ObjListSelect", "Y", nullptr));
        cBox_2row->setItemText(8, QCoreApplication::translate("ObjListSelect", "VX", nullptr));
        cBox_2row->setItemText(9, QCoreApplication::translate("ObjListSelect", "VY", nullptr));
        cBox_2row->setItemText(10, QCoreApplication::translate("ObjListSelect", "Xacc", nullptr));
        cBox_2row->setItemText(11, QCoreApplication::translate("ObjListSelect", "Yacc", nullptr));
        cBox_2row->setItemText(12, QCoreApplication::translate("ObjListSelect", "F", nullptr));
        cBox_2row->setItemText(13, QCoreApplication::translate("ObjListSelect", "detR", nullptr));
        cBox_2row->setItemText(14, QCoreApplication::translate("ObjListSelect", "detV", nullptr));
        cBox_2row->setItemText(15, QCoreApplication::translate("ObjListSelect", "thr3", nullptr));
        cBox_2row->setItemText(16, QCoreApplication::translate("ObjListSelect", "AxR", nullptr));
        cBox_2row->setItemText(17, QCoreApplication::translate("ObjListSelect", "AyR", nullptr));
        cBox_2row->setItemText(18, QCoreApplication::translate("ObjListSelect", "AR", nullptr));
        cBox_2row->setItemText(19, QCoreApplication::translate("ObjListSelect", "Sort", nullptr));
        cBox_2row->setItemText(20, QCoreApplication::translate("ObjListSelect", "MAtr", nullptr));
        cBox_2row->setItemText(21, QCoreApplication::translate("ObjListSelect", "Ax", nullptr));
        cBox_2row->setItemText(22, QCoreApplication::translate("ObjListSelect", "Ay", nullptr));
        cBox_2row->setItemText(23, QCoreApplication::translate("ObjListSelect", "heightAngle", nullptr));
        cBox_2row->setItemText(24, QCoreApplication::translate("ObjListSelect", "TxCH", nullptr));
        cBox_2row->setItemText(25, QCoreApplication::translate("ObjListSelect", "IsCandi", nullptr));
        cBox_2row->setItemText(26, QCoreApplication::translate("ObjListSelect", "RCS", nullptr));
        cBox_2row->setItemText(27, QCoreApplication::translate("ObjListSelect", "updateFlag", nullptr));
        cBox_2row->setItemText(28, QCoreApplication::translate("ObjListSelect", "ObjMotionPatten", nullptr));
        cBox_2row->setItemText(29, QCoreApplication::translate("ObjListSelect", "ObjType", nullptr));
        cBox_2row->setItemText(30, QCoreApplication::translate("ObjListSelect", "ObjMeasFlag", nullptr));
        cBox_2row->setItemText(31, QCoreApplication::translate("ObjListSelect", "ObstacleProb", nullptr));
        cBox_2row->setItemText(32, QCoreApplication::translate("ObjListSelect", "matchFlag", nullptr));
        cBox_2row->setItemText(33, QCoreApplication::translate("ObjListSelect", "tag", nullptr));
        cBox_2row->setItemText(34, QCoreApplication::translate("ObjListSelect", "deltaRange", nullptr));
        cBox_2row->setItemText(35, QCoreApplication::translate("ObjListSelect", "clusterID", nullptr));
        cBox_2row->setItemText(36, QCoreApplication::translate("ObjListSelect", "use", nullptr));
        cBox_2row->setItemText(37, QCoreApplication::translate("ObjListSelect", "idx", nullptr));

        cBox_1row->setItemText(0, QCoreApplication::translate("ObjListSelect", "Null", nullptr));
        cBox_1row->setItemText(1, QCoreApplication::translate("ObjListSelect", "Prob", nullptr));
        cBox_1row->setItemText(2, QCoreApplication::translate("ObjListSelect", "SNR", nullptr));
        cBox_1row->setItemText(3, QCoreApplication::translate("ObjListSelect", "KS", nullptr));
        cBox_1row->setItemText(4, QCoreApplication::translate("ObjListSelect", "Width", nullptr));
        cBox_1row->setItemText(5, QCoreApplication::translate("ObjListSelect", "Length", nullptr));
        cBox_1row->setItemText(6, QCoreApplication::translate("ObjListSelect", "X", nullptr));
        cBox_1row->setItemText(7, QCoreApplication::translate("ObjListSelect", "Y", nullptr));
        cBox_1row->setItemText(8, QCoreApplication::translate("ObjListSelect", "VX", nullptr));
        cBox_1row->setItemText(9, QCoreApplication::translate("ObjListSelect", "VY", nullptr));
        cBox_1row->setItemText(10, QCoreApplication::translate("ObjListSelect", "Xacc", nullptr));
        cBox_1row->setItemText(11, QCoreApplication::translate("ObjListSelect", "Yacc", nullptr));
        cBox_1row->setItemText(12, QCoreApplication::translate("ObjListSelect", "F", nullptr));
        cBox_1row->setItemText(13, QCoreApplication::translate("ObjListSelect", "detR", nullptr));
        cBox_1row->setItemText(14, QCoreApplication::translate("ObjListSelect", "detV", nullptr));
        cBox_1row->setItemText(15, QCoreApplication::translate("ObjListSelect", "thr3", nullptr));
        cBox_1row->setItemText(16, QCoreApplication::translate("ObjListSelect", "AxR", nullptr));
        cBox_1row->setItemText(17, QCoreApplication::translate("ObjListSelect", "AyR", nullptr));
        cBox_1row->setItemText(18, QCoreApplication::translate("ObjListSelect", "AR", nullptr));
        cBox_1row->setItemText(19, QCoreApplication::translate("ObjListSelect", "Sort", nullptr));
        cBox_1row->setItemText(20, QCoreApplication::translate("ObjListSelect", "MAtr", nullptr));
        cBox_1row->setItemText(21, QCoreApplication::translate("ObjListSelect", "Ax", nullptr));
        cBox_1row->setItemText(22, QCoreApplication::translate("ObjListSelect", "Ay", nullptr));
        cBox_1row->setItemText(23, QCoreApplication::translate("ObjListSelect", "heightAngle", nullptr));
        cBox_1row->setItemText(24, QCoreApplication::translate("ObjListSelect", "TxCH", nullptr));
        cBox_1row->setItemText(25, QCoreApplication::translate("ObjListSelect", "IsCandi", nullptr));
        cBox_1row->setItemText(26, QCoreApplication::translate("ObjListSelect", "RCS", nullptr));
        cBox_1row->setItemText(27, QCoreApplication::translate("ObjListSelect", "updateFlag", nullptr));
        cBox_1row->setItemText(28, QCoreApplication::translate("ObjListSelect", "ObjMotionPatten", nullptr));
        cBox_1row->setItemText(29, QCoreApplication::translate("ObjListSelect", "ObjType", nullptr));
        cBox_1row->setItemText(30, QCoreApplication::translate("ObjListSelect", "ObjMeasFlag", nullptr));
        cBox_1row->setItemText(31, QCoreApplication::translate("ObjListSelect", "ObstacleProb", nullptr));
        cBox_1row->setItemText(32, QCoreApplication::translate("ObjListSelect", "matchFlag", nullptr));
        cBox_1row->setItemText(33, QCoreApplication::translate("ObjListSelect", "tag", nullptr));
        cBox_1row->setItemText(34, QCoreApplication::translate("ObjListSelect", "deltaRang", nullptr));
        cBox_1row->setItemText(35, QCoreApplication::translate("ObjListSelect", "clusterID", nullptr));
        cBox_1row->setItemText(36, QCoreApplication::translate("ObjListSelect", "use", nullptr));
        cBox_1row->setItemText(37, QCoreApplication::translate("ObjListSelect", "idx", nullptr));

        label_2->setText(QCoreApplication::translate("ObjListSelect", "\347\254\254\344\272\214\345\210\227\357\274\232", nullptr));
        pButtonExplain->setText(QCoreApplication::translate("ObjListSelect", "\345\217\202\346\225\260\350\247\243\351\207\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjListSelect: public Ui_ObjListSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJLISTSELECT_H
