/********************************************************************************
** Form generated from reading UI file 'analysisdataviewconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISDATAVIEWCONFIGDIALOG_H
#define UI_ANALYSISDATAVIEWCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalysisDataViewConfigDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxFrameType;
    QSpacerItem *horizontalSpacer_2;
    QSplitter *splitter;
    QListWidget *listWidgetTargetAttributes;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidgetTargetAttributeDisplay;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonMoveUp;
    QPushButton *pushButtonMoveDown;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *AnalysisDataViewConfigDialog)
    {
        if (AnalysisDataViewConfigDialog->objectName().isEmpty())
            AnalysisDataViewConfigDialog->setObjectName(QString::fromUtf8("AnalysisDataViewConfigDialog"));
        AnalysisDataViewConfigDialog->resize(1105, 583);
        verticalLayout_2 = new QVBoxLayout(AnalysisDataViewConfigDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBoxFrameType = new QComboBox(AnalysisDataViewConfigDialog);
        comboBoxFrameType->setObjectName(QString::fromUtf8("comboBoxFrameType"));

        horizontalLayout_3->addWidget(comboBoxFrameType);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        splitter = new QSplitter(AnalysisDataViewConfigDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        listWidgetTargetAttributes = new QListWidget(splitter);
        listWidgetTargetAttributes->setObjectName(QString::fromUtf8("listWidgetTargetAttributes"));
        splitter->addWidget(listWidgetTargetAttributes);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidgetTargetAttributeDisplay = new QListWidget(layoutWidget);
        listWidgetTargetAttributeDisplay->setObjectName(QString::fromUtf8("listWidgetTargetAttributeDisplay"));

        verticalLayout->addWidget(listWidgetTargetAttributeDisplay);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonMoveUp = new QPushButton(layoutWidget);
        pushButtonMoveUp->setObjectName(QString::fromUtf8("pushButtonMoveUp"));

        horizontalLayout_2->addWidget(pushButtonMoveUp);

        pushButtonMoveDown = new QPushButton(layoutWidget);
        pushButtonMoveDown->setObjectName(QString::fromUtf8("pushButtonMoveDown"));

        horizontalLayout_2->addWidget(pushButtonMoveDown);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter->addWidget(layoutWidget);

        verticalLayout_2->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(AnalysisDataViewConfigDialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonApply = new QPushButton(AnalysisDataViewConfigDialog);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));

        horizontalLayout->addWidget(pushButtonApply);

        pushButtonCancel = new QPushButton(AnalysisDataViewConfigDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AnalysisDataViewConfigDialog);
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), AnalysisDataViewConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AnalysisDataViewConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *AnalysisDataViewConfigDialog)
    {
        AnalysisDataViewConfigDialog->setWindowTitle(QCoreApplication::translate("AnalysisDataViewConfigDialog", "Analysis Data View Config", nullptr));
        pushButtonMoveUp->setText(QCoreApplication::translate("AnalysisDataViewConfigDialog", "\344\270\212\347\247\273", nullptr));
        pushButtonMoveDown->setText(QCoreApplication::translate("AnalysisDataViewConfigDialog", "\344\270\213\347\247\273", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("AnalysisDataViewConfigDialog", "\347\241\256\345\256\232", nullptr));
        pushButtonApply->setText(QCoreApplication::translate("AnalysisDataViewConfigDialog", "\345\272\224\347\224\250", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("AnalysisDataViewConfigDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalysisDataViewConfigDialog: public Ui_AnalysisDataViewConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISDATAVIEWCONFIGDIALOG_H
