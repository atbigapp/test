/********************************************************************************
** Form generated from reading UI file 'calibrationform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONFORM_H
#define UI_CALIBRATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalibrationForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxProtocolType;
    QComboBox *comboBoxCalibrationType;
    QLabel *label;
    QComboBox *comboBoxChannelIndex;
    QCheckBox *checkBoxCAN;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditVRange;
    QLabel *label_3;
    QLineEdit *lineEditHRange;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonReadDTC;
    QPushButton *pushButtonClearDTC;
    QPushButton *pushButtonClearText;

    void setupUi(QWidget *CalibrationForm)
    {
        if (CalibrationForm->objectName().isEmpty())
            CalibrationForm->setObjectName(QString::fromUtf8("CalibrationForm"));
        CalibrationForm->resize(431, 475);
        CalibrationForm->setStyleSheet(QString::fromUtf8("QWidget#CalibrationForm { background-color: rgb(29, 29, 29); }\n"
"QWidget { color: rgb(230, 230, 230); background-color: rgb(29, 29, 29); }\n"
"QLabel { background: transparent; color: rgb(230, 230, 230); }\n"
"QLineEdit, QPlainTextEdit, QTextEdit { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; padding: 2px; }\n"
"QComboBox { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; padding: 2px 6px; }\n"
"QComboBox QAbstractItemView { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); selection-background-color: rgb(70, 100, 140); }\n"
"QSpinBox, QDoubleSpinBox { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; }\n"
"QPushButton { background-color: rgb(60, 60, 60); color: rgb(230, 230, 230); border: 1px solid rgb(100, 100, 100); border-radius: 3px; padding: 4px 12px; min-height: 22px; }\n"
"QPushButton:"
                        "hover { background-color: rgb(80, 80, 80); border-color: rgb(140, 140, 140); }\n"
"QPushButton:pressed { background-color: rgb(45, 45, 45); }\n"
"QPushButton:disabled { color: rgb(140, 140, 140); background-color: rgb(50, 50, 50); }\n"
"QCheckBox, QRadioButton { color: rgb(230, 230, 230); background: transparent; }\n"
"QGroupBox { color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; margin-top: 8px; padding-top: 6px; }\n"
"QGroupBox::title { subcontrol-origin: margin; left: 8px; padding: 0 4px; }\n"
"QProgressBar { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); border-radius: 3px; text-align: center; }\n"
"QProgressBar::chunk { background-color: rgb(70, 130, 180); }\n"
"QTableView, QTableWidget, QListView, QTreeView { background-color: rgb(35, 35, 35); color: rgb(230, 230, 230); gridline-color: rgb(70, 70, 70); selection-background-color: rgb(70, 100, 140); }\n"
"QHeaderView::section { background-color: rgb(50, 50, 50); color: rgb(2"
                        "30, 230, 230); border: 1px solid rgb(70, 70, 70); padding: 2px; }\n"
"QScrollBar:vertical, QScrollBar:horizontal { background: rgb(40, 40, 40); border: none; }\n"
"QScrollBar::handle { background: rgb(80, 80, 80); border-radius: 3px; }\n"
"QScrollBar::handle:hover { background: rgb(110, 110, 110); }\n"
"QMenu { background-color: rgb(45, 45, 45); color: rgb(230, 230, 230); border: 1px solid rgb(80, 80, 80); }\n"
"QMenu::item:selected { background-color: rgb(70, 100, 140); }\n"
"QToolTip { background-color: rgb(60, 60, 60); color: rgb(230, 230, 230); border: 1px solid rgb(100, 100, 100); }"));
        verticalLayout = new QVBoxLayout(CalibrationForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBoxProtocolType = new QComboBox(CalibrationForm);
        comboBoxProtocolType->addItem(QString());
        comboBoxProtocolType->addItem(QString());
        comboBoxProtocolType->addItem(QString());
        comboBoxProtocolType->addItem(QString());
        comboBoxProtocolType->setObjectName(QString::fromUtf8("comboBoxProtocolType"));

        horizontalLayout->addWidget(comboBoxProtocolType);

        comboBoxCalibrationType = new QComboBox(CalibrationForm);
        comboBoxCalibrationType->addItem(QString());
        comboBoxCalibrationType->addItem(QString());
        comboBoxCalibrationType->addItem(QString());
        comboBoxCalibrationType->setObjectName(QString::fromUtf8("comboBoxCalibrationType"));

        horizontalLayout->addWidget(comboBoxCalibrationType);

        label = new QLabel(CalibrationForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxChannelIndex = new QComboBox(CalibrationForm);
        comboBoxChannelIndex->addItem(QString());
        comboBoxChannelIndex->addItem(QString());
        comboBoxChannelIndex->setObjectName(QString::fromUtf8("comboBoxChannelIndex"));

        horizontalLayout->addWidget(comboBoxChannelIndex);

        checkBoxCAN = new QCheckBox(CalibrationForm);
        checkBoxCAN->setObjectName(QString::fromUtf8("checkBoxCAN"));

        horizontalLayout->addWidget(checkBoxCAN);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(CalibrationForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        lineEditVRange = new QLineEdit(CalibrationForm);
        lineEditVRange->setObjectName(QString::fromUtf8("lineEditVRange"));

        horizontalLayout_2->addWidget(lineEditVRange);

        label_3 = new QLabel(CalibrationForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_3);

        lineEditHRange = new QLineEdit(CalibrationForm);
        lineEditHRange->setObjectName(QString::fromUtf8("lineEditHRange"));

        horizontalLayout_2->addWidget(lineEditHRange);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(CalibrationForm);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        pushButtonStart = new QPushButton(CalibrationForm);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        verticalLayout->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(CalibrationForm);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));

        verticalLayout->addWidget(pushButtonStop);

        pushButtonReadDTC = new QPushButton(CalibrationForm);
        pushButtonReadDTC->setObjectName(QString::fromUtf8("pushButtonReadDTC"));

        verticalLayout->addWidget(pushButtonReadDTC);

        pushButtonClearDTC = new QPushButton(CalibrationForm);
        pushButtonClearDTC->setObjectName(QString::fromUtf8("pushButtonClearDTC"));

        verticalLayout->addWidget(pushButtonClearDTC);

        pushButtonClearText = new QPushButton(CalibrationForm);
        pushButtonClearText->setObjectName(QString::fromUtf8("pushButtonClearText"));

        verticalLayout->addWidget(pushButtonClearText);


        retranslateUi(CalibrationForm);

        QMetaObject::connectSlotsByName(CalibrationForm);
    } // setupUi

    void retranslateUi(QWidget *CalibrationForm)
    {
        CalibrationForm->setWindowTitle(QCoreApplication::translate("CalibrationForm", "Form", nullptr));
        comboBoxProtocolType->setItemText(0, QCoreApplication::translate("CalibrationForm", "BYD", nullptr));
        comboBoxProtocolType->setItemText(1, QCoreApplication::translate("CalibrationForm", "HASE", nullptr));
        comboBoxProtocolType->setItemText(2, QCoreApplication::translate("CalibrationForm", "GEELY", nullptr));
        comboBoxProtocolType->setItemText(3, QCoreApplication::translate("CalibrationForm", "BYD Business ", nullptr));

        comboBoxCalibrationType->setItemText(0, QCoreApplication::translate("CalibrationForm", "\345\224\256\345\220\216\346\240\207\345\256\232", nullptr));
        comboBoxCalibrationType->setItemText(1, QCoreApplication::translate("CalibrationForm", "\344\270\213\347\272\277\346\240\207\345\256\232", nullptr));
        comboBoxCalibrationType->setItemText(2, QCoreApplication::translate("CalibrationForm", "\351\200\200\345\207\272\345\267\245\345\216\202\346\250\241\345\274\217", nullptr));

        label->setText(QCoreApplication::translate("CalibrationForm", "VCAN \351\200\232\351\201\223\357\274\232", nullptr));
        comboBoxChannelIndex->setItemText(0, QCoreApplication::translate("CalibrationForm", "CAN 0", nullptr));
        comboBoxChannelIndex->setItemText(1, QCoreApplication::translate("CalibrationForm", "CAN 1", nullptr));

        checkBoxCAN->setText(QCoreApplication::translate("CalibrationForm", "CAN", nullptr));
        label_2->setText(QCoreApplication::translate("CalibrationForm", "\344\270\213\347\272\277\346\240\207\345\256\232\345\236\202\347\233\264\350\267\235\347\246\273", nullptr));
        label_3->setText(QCoreApplication::translate("CalibrationForm", "\344\270\213\347\272\277\346\240\207\345\256\232\346\260\264\345\271\263\350\267\235\347\246\273", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("CalibrationForm", "\345\274\200\345\247\213SDA", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("CalibrationForm", "Stop", nullptr));
        pushButtonReadDTC->setText(QCoreApplication::translate("CalibrationForm", "\350\257\273\345\217\226\346\225\205\351\232\234", nullptr));
        pushButtonClearDTC->setText(QCoreApplication::translate("CalibrationForm", "\346\270\205\351\231\244\346\225\205\351\232\234", nullptr));
        pushButtonClearText->setText(QCoreApplication::translate("CalibrationForm", "\346\270\205\351\231\244\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrationForm: public Ui_CalibrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONFORM_H
