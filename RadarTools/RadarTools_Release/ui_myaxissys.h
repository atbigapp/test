/********************************************************************************
** Form generated from reading UI file 'myaxissys.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYAXISSYS_H
#define UI_MYAXISSYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyAxisSys
{
public:

    void setupUi(QWidget *MyAxisSys)
    {
        if (MyAxisSys->objectName().isEmpty())
            MyAxisSys->setObjectName(QString::fromUtf8("MyAxisSys"));
        MyAxisSys->resize(314, 635);

        retranslateUi(MyAxisSys);

        QMetaObject::connectSlotsByName(MyAxisSys);
    } // setupUi

    void retranslateUi(QWidget *MyAxisSys)
    {
        MyAxisSys->setWindowTitle(QCoreApplication::translate("MyAxisSys", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyAxisSys: public Ui_MyAxisSys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYAXISSYS_H
