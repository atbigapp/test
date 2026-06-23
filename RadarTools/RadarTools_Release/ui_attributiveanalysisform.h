/********************************************************************************
** Form generated from reading UI file 'attributiveanalysisform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRIBUTIVEANALYSISFORM_H
#define UI_ATTRIBUTIVEANALYSISFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_AttributiveAnalysisForm
{
public:
    QVBoxLayout *verticalLayout;
    QCustomPlot *customPlot;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_x_y;
    QLineEdit *lineEdit_x_y2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *AttributiveAnalysisForm)
    {
        if (AttributiveAnalysisForm->objectName().isEmpty())
            AttributiveAnalysisForm->setObjectName(QString::fromUtf8("AttributiveAnalysisForm"));
        AttributiveAnalysisForm->resize(396, 263);
        AttributiveAnalysisForm->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(40, 40, 40);"));
        verticalLayout = new QVBoxLayout(AttributiveAnalysisForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        customPlot = new QCustomPlot(AttributiveAnalysisForm);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(customPlot);

        widget = new QWidget(AttributiveAnalysisForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_x_y = new QLineEdit(widget);
        lineEdit_x_y->setObjectName(QString::fromUtf8("lineEdit_x_y"));

        horizontalLayout_5->addWidget(lineEdit_x_y);

        lineEdit_x_y2 = new QLineEdit(widget);
        lineEdit_x_y2->setObjectName(QString::fromUtf8("lineEdit_x_y2"));

        horizontalLayout_5->addWidget(lineEdit_x_y2);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(widget);


        retranslateUi(AttributiveAnalysisForm);

        QMetaObject::connectSlotsByName(AttributiveAnalysisForm);
    } // setupUi

    void retranslateUi(QWidget *AttributiveAnalysisForm)
    {
        AttributiveAnalysisForm->setWindowTitle(QCoreApplication::translate("AttributiveAnalysisForm", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("AttributiveAnalysisForm", "\347\272\265\350\275\264\350\214\203\345\233\264\357\274\232", nullptr));
        lineEdit_x_y->setText(QCoreApplication::translate("AttributiveAnalysisForm", "-1", nullptr));
        lineEdit_x_y2->setText(QCoreApplication::translate("AttributiveAnalysisForm", "130", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttributiveAnalysisForm: public Ui_AttributiveAnalysisForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRIBUTIVEANALYSISFORM_H
