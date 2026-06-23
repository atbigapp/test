/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QGridLayout *gridLayout;
    QLabel *cameraUI;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxRotationAngle;
    QComboBox *comboBoxRotationAngle;
    QLabel *label;
    QComboBox *cBoxCamera;
    QPushButton *pButtonRefresh;

    void setupUi(QWidget *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName(QString::fromUtf8("camera"));
        camera->resize(558, 361);
        gridLayout = new QGridLayout(camera);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, -1);
        cameraUI = new QLabel(camera);
        cameraUI->setObjectName(QString::fromUtf8("cameraUI"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cameraUI->sizePolicy().hasHeightForWidth());
        cameraUI->setSizePolicy(sizePolicy);
        cameraUI->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);\n"
"color: rgb(238, 238, 238);\n"
"\n"
"\n"
""));

        gridLayout->addWidget(cameraUI, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxRotationAngle = new QCheckBox(camera);
        checkBoxRotationAngle->setObjectName(QString::fromUtf8("checkBoxRotationAngle"));

        horizontalLayout->addWidget(checkBoxRotationAngle);

        comboBoxRotationAngle = new QComboBox(camera);
        comboBoxRotationAngle->addItem(QString());
        comboBoxRotationAngle->addItem(QString());
        comboBoxRotationAngle->addItem(QString());
        comboBoxRotationAngle->setObjectName(QString::fromUtf8("comboBoxRotationAngle"));

        horizontalLayout->addWidget(comboBoxRotationAngle);

        label = new QLabel(camera);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cBoxCamera = new QComboBox(camera);
        cBoxCamera->setObjectName(QString::fromUtf8("cBoxCamera"));

        horizontalLayout->addWidget(cBoxCamera);

        pButtonRefresh = new QPushButton(camera);
        pButtonRefresh->setObjectName(QString::fromUtf8("pButtonRefresh"));

        horizontalLayout->addWidget(pButtonRefresh);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(4, 1);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowMinimumHeight(0, 1);

        retranslateUi(camera);

        QMetaObject::connectSlotsByName(camera);
    } // setupUi

    void retranslateUi(QWidget *camera)
    {
        camera->setWindowTitle(QCoreApplication::translate("camera", "Form", nullptr));
        cameraUI->setText(QString());
        checkBoxRotationAngle->setText(QCoreApplication::translate("camera", "\346\227\213\350\275\254", nullptr));
        comboBoxRotationAngle->setItemText(0, QCoreApplication::translate("camera", "90\302\260", nullptr));
        comboBoxRotationAngle->setItemText(1, QCoreApplication::translate("camera", "180\302\260", nullptr));
        comboBoxRotationAngle->setItemText(2, QCoreApplication::translate("camera", "270\302\260", nullptr));

        label->setText(QCoreApplication::translate("camera", "\351\200\211\346\213\251\347\233\270\346\234\272\357\274\232", nullptr));
        pButtonRefresh->setText(QCoreApplication::translate("camera", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
