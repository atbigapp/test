/********************************************************************************
** Form generated from reading UI file 'ars410settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARS410SETTINGSDIALOG_H
#define UI_ARS410SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ARS410SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxVehicle;
    QCheckBox *checkBoxMovingPoint;
    QCheckBox *checkBoxShowID;
    QCheckBox *checkBoxNotVehicle;
    QCheckBox *checkBoxRestPoint;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEditLateralCompensation;
    QLineEdit *lineEditLongitudinalCompensation;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *ARS410SettingsDialog)
    {
        if (ARS410SettingsDialog->objectName().isEmpty())
            ARS410SettingsDialog->setObjectName(QString::fromUtf8("ARS410SettingsDialog"));
        ARS410SettingsDialog->resize(400, 193);
        verticalLayout = new QVBoxLayout(ARS410SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBoxVehicle = new QCheckBox(ARS410SettingsDialog);
        checkBoxVehicle->setObjectName(QString::fromUtf8("checkBoxVehicle"));

        gridLayout->addWidget(checkBoxVehicle, 2, 0, 1, 1);

        checkBoxMovingPoint = new QCheckBox(ARS410SettingsDialog);
        checkBoxMovingPoint->setObjectName(QString::fromUtf8("checkBoxMovingPoint"));

        gridLayout->addWidget(checkBoxMovingPoint, 1, 0, 1, 1);

        checkBoxShowID = new QCheckBox(ARS410SettingsDialog);
        checkBoxShowID->setObjectName(QString::fromUtf8("checkBoxShowID"));

        gridLayout->addWidget(checkBoxShowID, 0, 0, 1, 1);

        checkBoxNotVehicle = new QCheckBox(ARS410SettingsDialog);
        checkBoxNotVehicle->setObjectName(QString::fromUtf8("checkBoxNotVehicle"));

        gridLayout->addWidget(checkBoxNotVehicle, 2, 1, 1, 1);

        checkBoxRestPoint = new QCheckBox(ARS410SettingsDialog);
        checkBoxRestPoint->setObjectName(QString::fromUtf8("checkBoxRestPoint"));

        gridLayout->addWidget(checkBoxRestPoint, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(ARS410SettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(ARS410SettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        lineEditLateralCompensation = new QLineEdit(ARS410SettingsDialog);
        lineEditLateralCompensation->setObjectName(QString::fromUtf8("lineEditLateralCompensation"));

        gridLayout_2->addWidget(lineEditLateralCompensation, 0, 1, 1, 1);

        lineEditLongitudinalCompensation = new QLineEdit(ARS410SettingsDialog);
        lineEditLongitudinalCompensation->setObjectName(QString::fromUtf8("lineEditLongitudinalCompensation"));

        gridLayout_2->addWidget(lineEditLongitudinalCompensation, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonOK = new QPushButton(ARS410SettingsDialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonApply = new QPushButton(ARS410SettingsDialog);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));

        horizontalLayout->addWidget(pushButtonApply);

        pushButtonCancel = new QPushButton(ARS410SettingsDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ARS410SettingsDialog);
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), ARS410SettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ARS410SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ARS410SettingsDialog)
    {
        ARS410SettingsDialog->setWindowTitle(QCoreApplication::translate("ARS410SettingsDialog", "ARS410\350\256\276\347\275\256", nullptr));
        checkBoxVehicle->setText(QCoreApplication::translate("ARS410SettingsDialog", "\346\230\276\347\244\272\350\275\246\350\276\206", nullptr));
        checkBoxMovingPoint->setText(QCoreApplication::translate("ARS410SettingsDialog", "\346\230\276\347\244\272\350\277\220\345\212\250\347\202\271", nullptr));
        checkBoxShowID->setText(QCoreApplication::translate("ARS410SettingsDialog", "\346\230\276\347\244\272ID", nullptr));
        checkBoxNotVehicle->setText(QCoreApplication::translate("ARS410SettingsDialog", "\346\230\276\347\244\272\351\235\236\350\275\246\350\276\206", nullptr));
        checkBoxRestPoint->setText(QCoreApplication::translate("ARS410SettingsDialog", "\346\230\276\347\244\272\351\235\231\346\200\201\347\202\271", nullptr));
        label_2->setText(QCoreApplication::translate("ARS410SettingsDialog", "\346\250\252\345\220\221\350\241\245\345\201\277(m)\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("ARS410SettingsDialog", "\347\272\265\345\220\221\350\241\245\345\201\277(m)\357\274\232", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("ARS410SettingsDialog", "\347\241\256\345\256\232", nullptr));
        pushButtonApply->setText(QCoreApplication::translate("ARS410SettingsDialog", "\345\272\224\347\224\250", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ARS410SettingsDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ARS410SettingsDialog: public Ui_ARS410SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARS410SETTINGSDIALOG_H
