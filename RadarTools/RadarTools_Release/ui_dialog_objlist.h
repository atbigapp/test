/********************************************************************************
** Form generated from reading UI file 'dialog_objlist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_OBJLIST_H
#define UI_DIALOG_OBJLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_Dialog_ObjList
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QPlainTextEdit *pEdit_TraobjList;
    QPlainTextEdit *pEdit_RawObjList;

    void setupUi(QDialog *Dialog_ObjList)
    {
        if (Dialog_ObjList->objectName().isEmpty())
            Dialog_ObjList->setObjectName(QString::fromUtf8("Dialog_ObjList"));
        Dialog_ObjList->resize(1564, 787);
        Dialog_ObjList->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(29, 29, 29);"));
        gridLayout = new QGridLayout(Dialog_ObjList);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(Dialog_ObjList);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pEdit_TraobjList = new QPlainTextEdit(splitter);
        pEdit_TraobjList->setObjectName(QString::fromUtf8("pEdit_TraobjList"));
        pEdit_TraobjList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        pEdit_TraobjList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pEdit_TraobjList->setLineWrapMode(QPlainTextEdit::NoWrap);
        splitter->addWidget(pEdit_TraobjList);
        pEdit_RawObjList = new QPlainTextEdit(splitter);
        pEdit_RawObjList->setObjectName(QString::fromUtf8("pEdit_RawObjList"));
        pEdit_RawObjList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        pEdit_RawObjList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pEdit_RawObjList->setLineWrapMode(QPlainTextEdit::NoWrap);
        splitter->addWidget(pEdit_RawObjList);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(Dialog_ObjList);

        QMetaObject::connectSlotsByName(Dialog_ObjList);
    } // setupUi

    void retranslateUi(QDialog *Dialog_ObjList)
    {
        Dialog_ObjList->setWindowTitle(QCoreApplication::translate("Dialog_ObjList", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_ObjList: public Ui_Dialog_ObjList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_OBJLIST_H
