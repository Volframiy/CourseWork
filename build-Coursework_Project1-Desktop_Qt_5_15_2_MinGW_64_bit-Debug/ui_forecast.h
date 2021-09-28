/********************************************************************************
** Form generated from reading UI file 'forecast.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORECAST_H
#define UI_FORECAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Forecast
{
public:
    QTableWidget *WeatherTable;
    QPushButton *ButClose;
    QPushButton *ButForecast;
    QLabel *ErrorLabel;

    void setupUi(QDialog *Forecast)
    {
        if (Forecast->objectName().isEmpty())
            Forecast->setObjectName(QString::fromUtf8("Forecast"));
        Forecast->resize(948, 600);
        Forecast->setStyleSheet(QString::fromUtf8("background : rgb(197, 255, 187)\n"
""));
        WeatherTable = new QTableWidget(Forecast);
        WeatherTable->setObjectName(QString::fromUtf8("WeatherTable"));
        WeatherTable->setGeometry(QRect(10, 10, 931, 511));
        WeatherTable->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        ButClose = new QPushButton(Forecast);
        ButClose->setObjectName(QString::fromUtf8("ButClose"));
        ButClose->setGeometry(QRect(840, 540, 101, 41));
        ButClose->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;\n"
""));
        ButForecast = new QPushButton(Forecast);
        ButForecast->setObjectName(QString::fromUtf8("ButForecast"));
        ButForecast->setGeometry(QRect(720, 540, 101, 41));
        ButForecast->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;\n"
""));
        ErrorLabel = new QLabel(Forecast);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(20, 540, 691, 41));
        ErrorLabel->setStyleSheet(QString::fromUtf8("color : rgb(0, 0, 0)"));

        retranslateUi(Forecast);

        QMetaObject::connectSlotsByName(Forecast);
    } // setupUi

    void retranslateUi(QDialog *Forecast)
    {
        Forecast->setWindowTitle(QCoreApplication::translate("Forecast", "Dialog", nullptr));
        ButClose->setText(QCoreApplication::translate("Forecast", "Close", nullptr));
        ButForecast->setText(QCoreApplication::translate("Forecast", "Forecast", nullptr));
        ErrorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Forecast: public Ui_Forecast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORECAST_H
