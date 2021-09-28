/********************************************************************************
** Form generated from reading UI file 'addday.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDAY_H
#define UI_ADDDAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddDay
{
public:
    QSpinBox *Year;
    QSpinBox *Mounth;
    QSpinBox *Day;
    QSpinBox *Humid;
    QSpinBox *Press;
    QDoubleSpinBox *Temp;
    QLineEdit *Wind;
    QLabel *label;
    QPushButton *ButAdd;
    QPushButton *ButClose;
    QLabel *ErrorLabel;

    void setupUi(QDialog *AddDay)
    {
        if (AddDay->objectName().isEmpty())
            AddDay->setObjectName(QString::fromUtf8("AddDay"));
        AddDay->resize(943, 194);
        AddDay->setStyleSheet(QString::fromUtf8("background : rgb(197, 255, 187);\n"
"color : rgb(0, 0, 0);\n"
""));
        Year = new QSpinBox(AddDay);
        Year->setObjectName(QString::fromUtf8("Year"));
        Year->setGeometry(QRect(20, 30, 111, 41));
        Year->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255);"));
        Year->setMinimum(2021);
        Year->setMaximum(2048);
        Mounth = new QSpinBox(AddDay);
        Mounth->setObjectName(QString::fromUtf8("Mounth"));
        Mounth->setGeometry(QRect(160, 30, 101, 41));
        Mounth->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255);"));
        Mounth->setMinimum(1);
        Mounth->setMaximum(12);
        Day = new QSpinBox(AddDay);
        Day->setObjectName(QString::fromUtf8("Day"));
        Day->setGeometry(QRect(290, 30, 101, 41));
        Day->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255);"));
        Day->setMinimum(1);
        Day->setMaximum(31);
        Humid = new QSpinBox(AddDay);
        Humid->setObjectName(QString::fromUtf8("Humid"));
        Humid->setGeometry(QRect(680, 30, 101, 41));
        Humid->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255);"));
        Humid->setMinimum(20);
        Humid->setMaximum(99);
        Press = new QSpinBox(AddDay);
        Press->setObjectName(QString::fromUtf8("Press"));
        Press->setGeometry(QRect(550, 30, 101, 41));
        Press->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255);"));
        Press->setMinimum(684);
        Press->setMaximum(809);
        Temp = new QDoubleSpinBox(AddDay);
        Temp->setObjectName(QString::fromUtf8("Temp"));
        Temp->setGeometry(QRect(420, 30, 101, 41));
        Temp->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255);\n"
""));
        Temp->setMinimum(-50.000000000000000);
        Temp->setMaximum(45.000000000000000);
        Temp->setSingleStep(0.500000000000000);
        Wind = new QLineEdit(AddDay);
        Wind->setObjectName(QString::fromUtf8("Wind"));
        Wind->setGeometry(QRect(810, 30, 113, 41));
        Wind->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255);"));
        label = new QLabel(AddDay);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 901, 31));
        ButAdd = new QPushButton(AddDay);
        ButAdd->setObjectName(QString::fromUtf8("ButAdd"));
        ButAdd->setGeometry(QRect(700, 130, 101, 41));
        ButAdd->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;\n"
""));
        ButClose = new QPushButton(AddDay);
        ButClose->setObjectName(QString::fromUtf8("ButClose"));
        ButClose->setGeometry(QRect(820, 130, 101, 41));
        ButClose->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;\n"
""));
        ErrorLabel = new QLabel(AddDay);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(20, 130, 631, 41));

        retranslateUi(AddDay);

        QMetaObject::connectSlotsByName(AddDay);
    } // setupUi

    void retranslateUi(QDialog *AddDay)
    {
        AddDay->setWindowTitle(QCoreApplication::translate("AddDay", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddDay", "         Year                          Mounth                         Day                   Temperature,C            Pressure,mm               Humidity,%                WindDirection", nullptr));
        ButAdd->setText(QCoreApplication::translate("AddDay", "Add", nullptr));
        ButClose->setText(QCoreApplication::translate("AddDay", "Close", nullptr));
        ErrorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddDay: public Ui_AddDay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDAY_H
