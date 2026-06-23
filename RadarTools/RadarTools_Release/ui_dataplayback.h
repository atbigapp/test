/********************************************************************************
** Form generated from reading UI file 'dataplayback.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAPLAYBACK_H
#define UI_DATAPLAYBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataPlayback
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEditFile;
    QPushButton *pButtonRead;
    QGridLayout *gridLayout;
    QLineEdit *lEditStartFrame;
    QLabel *label;
    QLineEdit *lEditframeTime;
    QLabel *lbTrkFrameCnt;
    QLabel *label_4;
    QPushButton *pButtonNext;
    QLabel *label_2;
    QPushButton *pushButtonPlayerEn;
    QLabel *lbSchedule;
    QLabel *label_3;
    QPushButton *pushButtonPlayControl;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLabel *labelEndFrameTime;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *dataPlayback)
    {
        if (dataPlayback->objectName().isEmpty())
            dataPlayback->setObjectName(QString::fromUtf8("dataPlayback"));
        dataPlayback->resize(294, 198);
        dataPlayback->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(dataPlayback);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(dataPlayback);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        horizontalLayout_4->addWidget(label_5);

        lineEditFile = new QLineEdit(dataPlayback);
        lineEditFile->setObjectName(QString::fromUtf8("lineEditFile"));

        horizontalLayout_4->addWidget(lineEditFile);

        pButtonRead = new QPushButton(dataPlayback);
        pButtonRead->setObjectName(QString::fromUtf8("pButtonRead"));

        horizontalLayout_4->addWidget(pButtonRead);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lEditStartFrame = new QLineEdit(dataPlayback);
        lEditStartFrame->setObjectName(QString::fromUtf8("lEditStartFrame"));

        gridLayout->addWidget(lEditStartFrame, 1, 2, 1, 1);

        label = new QLabel(dataPlayback);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lEditframeTime = new QLineEdit(dataPlayback);
        lEditframeTime->setObjectName(QString::fromUtf8("lEditframeTime"));

        gridLayout->addWidget(lEditframeTime, 2, 2, 1, 1);

        lbTrkFrameCnt = new QLabel(dataPlayback);
        lbTrkFrameCnt->setObjectName(QString::fromUtf8("lbTrkFrameCnt"));
        lbTrkFrameCnt->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        gridLayout->addWidget(lbTrkFrameCnt, 4, 2, 1, 1);

        label_4 = new QLabel(dataPlayback);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        pButtonNext = new QPushButton(dataPlayback);
        pButtonNext->setObjectName(QString::fromUtf8("pButtonNext"));

        gridLayout->addWidget(pButtonNext, 0, 2, 1, 1);

        label_2 = new QLabel(dataPlayback);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pushButtonPlayerEn = new QPushButton(dataPlayback);
        pushButtonPlayerEn->setObjectName(QString::fromUtf8("pushButtonPlayerEn"));

        gridLayout->addWidget(pushButtonPlayerEn, 0, 0, 1, 1);

        lbSchedule = new QLabel(dataPlayback);
        lbSchedule->setObjectName(QString::fromUtf8("lbSchedule"));
        lbSchedule->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        gridLayout->addWidget(lbSchedule, 3, 2, 1, 1);

        label_3 = new QLabel(dataPlayback);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        pushButtonPlayControl = new QPushButton(dataPlayback);
        pushButtonPlayControl->setObjectName(QString::fromUtf8("pushButtonPlayControl"));

        gridLayout->addWidget(pushButtonPlayControl, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label_6 = new QLabel(dataPlayback);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        labelEndFrameTime = new QLabel(dataPlayback);
        labelEndFrameTime->setObjectName(QString::fromUtf8("labelEndFrameTime"));
        labelEndFrameTime->setStyleSheet(QString::fromUtf8("color: rgb(184, 182, 203);"));

        gridLayout->addWidget(labelEndFrameTime, 5, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(17, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(dataPlayback);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(dataPlayback);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), dataPlayback, SLOT(hide()));

        QMetaObject::connectSlotsByName(dataPlayback);
    } // setupUi

    void retranslateUi(QWidget *dataPlayback)
    {
        dataPlayback->setWindowTitle(QCoreApplication::translate("dataPlayback", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("dataPlayback", "\346\226\207\344\273\266:", nullptr));
        pButtonRead->setText(QCoreApplication::translate("dataPlayback", "\345\212\240\350\275\275\346\226\207\344\273\266", nullptr));
        lEditStartFrame->setText(QCoreApplication::translate("dataPlayback", "0", nullptr));
        label->setText(QCoreApplication::translate("dataPlayback", "\350\265\267\345\247\213\345\270\247\345\217\267\357\274\232", nullptr));
        lEditframeTime->setText(QCoreApplication::translate("dataPlayback", "30", nullptr));
        lbTrkFrameCnt->setText(QCoreApplication::translate("dataPlayback", "0", nullptr));
        label_4->setText(QCoreApplication::translate("dataPlayback", "\350\267\237\350\270\252\345\270\247\345\217\267\357\274\232", nullptr));
        pButtonNext->setText(QCoreApplication::translate("dataPlayback", "\344\270\213\344\270\200\345\270\247", nullptr));
        label_2->setText(QCoreApplication::translate("dataPlayback", "\345\233\236\346\224\276\345\270\247\345\273\266\346\227\266[ms]\357\274\232", nullptr));
        pushButtonPlayerEn->setText(QCoreApplication::translate("dataPlayback", "\345\220\257\345\212\250", nullptr));
        lbSchedule->setText(QCoreApplication::translate("dataPlayback", "0/0", nullptr));
        label_3->setText(QCoreApplication::translate("dataPlayback", "\346\212\245\346\226\207\350\277\233\345\272\246\357\274\232", nullptr));
        pushButtonPlayControl->setText(QCoreApplication::translate("dataPlayback", "\346\232\202\345\201\234", nullptr));
        label_6->setText(QCoreApplication::translate("dataPlayback", "\347\273\223\346\235\237\345\270\247\346\212\245\346\226\207\346\227\266\351\227\264:", nullptr));
        labelEndFrameTime->setText(QCoreApplication::translate("dataPlayback", "0.000000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataPlayback: public Ui_dataPlayback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPLAYBACK_H
