/********************************************************************************
** Form generated from reading UI file 'selfcalibrateionform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFCALIBRATEIONFORM_H
#define UI_SELFCALIBRATEIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelfCalibrateionForm
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTableWidget *tableWidget0x01;
    QTableWidget *tableWidget0x02;

    void setupUi(QWidget *SelfCalibrateionForm)
    {
        if (SelfCalibrateionForm->objectName().isEmpty())
            SelfCalibrateionForm->setObjectName(QString::fromUtf8("SelfCalibrateionForm"));
        SelfCalibrateionForm->resize(688, 740);
        verticalLayout = new QVBoxLayout(SelfCalibrateionForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(SelfCalibrateionForm);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableWidget0x01 = new QTableWidget(splitter);
        if (tableWidget0x01->columnCount() < 2)
            tableWidget0x01->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget0x01->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget0x01->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget0x01->setObjectName(QString::fromUtf8("tableWidget0x01"));
        QFont font;
        font.setPointSize(12);
        tableWidget0x01->setFont(font);
        splitter->addWidget(tableWidget0x01);
        tableWidget0x01->horizontalHeader()->setStretchLastSection(true);
        tableWidget0x01->verticalHeader()->setStretchLastSection(false);
        tableWidget0x02 = new QTableWidget(splitter);
        if (tableWidget0x02->columnCount() < 2)
            tableWidget0x02->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget0x02->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget0x02->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget0x02->setObjectName(QString::fromUtf8("tableWidget0x02"));
        tableWidget0x02->setFont(font);
        splitter->addWidget(tableWidget0x02);
        tableWidget0x02->horizontalHeader()->setStretchLastSection(true);
        tableWidget0x02->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(splitter);


        retranslateUi(SelfCalibrateionForm);

        QMetaObject::connectSlotsByName(SelfCalibrateionForm);
    } // setupUi

    void retranslateUi(QWidget *SelfCalibrateionForm)
    {
        SelfCalibrateionForm->setWindowTitle(QCoreApplication::translate("SelfCalibrateionForm", "\350\207\252\346\240\207\345\256\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget0x01->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SelfCalibrateionForm", "\345\217\230\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget0x01->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SelfCalibrateionForm", "\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget0x02->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SelfCalibrateionForm", "\345\217\230\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget0x02->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SelfCalibrateionForm", "\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelfCalibrateionForm: public Ui_SelfCalibrateionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFCALIBRATEIONFORM_H
