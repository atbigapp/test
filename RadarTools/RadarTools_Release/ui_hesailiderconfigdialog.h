/********************************************************************************
** Form generated from reading UI file 'hesailiderconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HESAILIDERCONFIGDIALOG_H
#define UI_HESAILIDERCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HeSaiLiderConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *lineEditCalibrationAngle;
    QLineEdit *lineEditMountingHeight;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEditLowerFilterZ;
    QLineEdit *lineEditLateralDistanceCompensation;
    QLineEdit *lineEditUpperFilterZ;
    QLineEdit *lineEditLongitudinalDistanceCompensation;
    QLabel *label_8;
    QLineEdit *lineEditLowerFilterX;
    QLineEdit *lineEditLowerFilterY;
    QLineEdit *lineEditUpperFilterX;
    QLineEdit *lineEditUpperFilterY;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *HeSaiLiderConfigDialog)
    {
        if (HeSaiLiderConfigDialog->objectName().isEmpty())
            HeSaiLiderConfigDialog->setObjectName(QString::fromUtf8("HeSaiLiderConfigDialog"));
        HeSaiLiderConfigDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(HeSaiLiderConfigDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(HeSaiLiderConfigDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label_2 = new QLabel(HeSaiLiderConfigDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        lineEditCalibrationAngle = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditCalibrationAngle->setObjectName(QString::fromUtf8("lineEditCalibrationAngle"));

        gridLayout->addWidget(lineEditCalibrationAngle, 6, 1, 1, 3);

        lineEditMountingHeight = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditMountingHeight->setObjectName(QString::fromUtf8("lineEditMountingHeight"));

        gridLayout->addWidget(lineEditMountingHeight, 0, 1, 1, 3);

        label_5 = new QLabel(HeSaiLiderConfigDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_7 = new QLabel(HeSaiLiderConfigDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 2, 1, 1);

        label = new QLabel(HeSaiLiderConfigDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(HeSaiLiderConfigDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_6 = new QLabel(HeSaiLiderConfigDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        lineEditLowerFilterZ = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditLowerFilterZ->setObjectName(QString::fromUtf8("lineEditLowerFilterZ"));

        gridLayout->addWidget(lineEditLowerFilterZ, 5, 1, 1, 1);

        lineEditLateralDistanceCompensation = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditLateralDistanceCompensation->setObjectName(QString::fromUtf8("lineEditLateralDistanceCompensation"));

        gridLayout->addWidget(lineEditLateralDistanceCompensation, 2, 1, 1, 3);

        lineEditUpperFilterZ = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditUpperFilterZ->setObjectName(QString::fromUtf8("lineEditUpperFilterZ"));

        gridLayout->addWidget(lineEditUpperFilterZ, 5, 3, 1, 1);

        lineEditLongitudinalDistanceCompensation = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditLongitudinalDistanceCompensation->setObjectName(QString::fromUtf8("lineEditLongitudinalDistanceCompensation"));

        gridLayout->addWidget(lineEditLongitudinalDistanceCompensation, 1, 1, 1, 3);

        label_8 = new QLabel(HeSaiLiderConfigDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        lineEditLowerFilterX = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditLowerFilterX->setObjectName(QString::fromUtf8("lineEditLowerFilterX"));

        gridLayout->addWidget(lineEditLowerFilterX, 3, 1, 1, 1);

        lineEditLowerFilterY = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditLowerFilterY->setObjectName(QString::fromUtf8("lineEditLowerFilterY"));

        gridLayout->addWidget(lineEditLowerFilterY, 4, 1, 1, 1);

        lineEditUpperFilterX = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditUpperFilterX->setObjectName(QString::fromUtf8("lineEditUpperFilterX"));

        gridLayout->addWidget(lineEditUpperFilterX, 3, 3, 1, 1);

        lineEditUpperFilterY = new QLineEdit(HeSaiLiderConfigDialog);
        lineEditUpperFilterY->setObjectName(QString::fromUtf8("lineEditUpperFilterY"));

        gridLayout->addWidget(lineEditUpperFilterY, 4, 3, 1, 1);

        label_9 = new QLabel(HeSaiLiderConfigDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 2, 1, 1);

        label_10 = new QLabel(HeSaiLiderConfigDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 5, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 165, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(HeSaiLiderConfigDialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonApply = new QPushButton(HeSaiLiderConfigDialog);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));

        horizontalLayout->addWidget(pushButtonApply);

        pushButtonCancel = new QPushButton(HeSaiLiderConfigDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HeSaiLiderConfigDialog);

        QMetaObject::connectSlotsByName(HeSaiLiderConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *HeSaiLiderConfigDialog)
    {
        HeSaiLiderConfigDialog->setWindowTitle(QCoreApplication::translate("HeSaiLiderConfigDialog", "\347\246\276\350\265\233", nullptr));
        label_4->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "\346\240\241\345\207\206\350\247\222\345\272\246(\345\272\246)", nullptr));
        label_2->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "\351\253\230\345\272\246\350\277\207\346\273\244\351\231\220\345\210\266(m)", nullptr));
        lineEditCalibrationAngle->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "0.00", nullptr));
        lineEditMountingHeight->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "2.00", nullptr));
        label_5->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "\347\272\265\350\267\235\350\241\245\345\201\277(m)", nullptr));
        label_7->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "-", nullptr));
        label->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "\345\256\211\350\243\205\351\253\230\345\272\246(m)", nullptr));
        label_3->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "\347\272\265\345\220\221\350\277\207\346\273\244\351\231\220\345\210\266(m)", nullptr));
        label_6->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "\346\250\252\350\267\235\350\241\245\345\201\277(m)", nullptr));
        lineEditLowerFilterZ->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "-1.60", nullptr));
        lineEditLateralDistanceCompensation->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "0.00", nullptr));
        lineEditUpperFilterZ->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "0.00", nullptr));
        lineEditLongitudinalDistanceCompensation->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "2.50", nullptr));
        label_8->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "\346\250\252\345\220\221\350\277\207\346\273\244\351\231\220\345\210\266(m)", nullptr));
        label_9->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "-", nullptr));
        label_10->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "-", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "OK", nullptr));
        pushButtonApply->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "Apply", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("HeSaiLiderConfigDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HeSaiLiderConfigDialog: public Ui_HeSaiLiderConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HESAILIDERCONFIGDIALOG_H
