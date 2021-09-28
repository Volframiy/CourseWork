/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "QtCharts"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *WeatherTable;
    QChartView *Diagram;
    QLabel *label;
    QPushButton *FillButton;
    QPushButton *AddDayButton;
    QPushButton *AverageHumButton;
    QPushButton *pushButton_4;
    QPushButton *MinPressureButton;
    QPushButton *WindChangeButton;
    QLineEdit *AverageHumidity;
    QListWidget *WindChanges;
    QListWidget *MinPressure;
    QListWidget *MaxTemperature;
    QPushButton *SaveButton;
    QLabel *ErrorLabel;
    QPushButton *PeriodButton;
    QListWidget *InfoPeriod;
    QLineEdit *Last;
    QLineEdit *First;
    QPushButton *ChangePeriodButton;
    QListWidget *ChangePeriod;
    QPushButton *DiagramButton;
    QPushButton *ClearButton;
    QPushButton *ForecastButton;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *Info;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1105, 893);
        MainWindow->setStyleSheet(QString::fromUtf8("background : rgb(197, 255, 187)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        WeatherTable = new QTableWidget(centralwidget);
        WeatherTable->setObjectName(QString::fromUtf8("WeatherTable"));
        WeatherTable->setGeometry(QRect(130, 10, 961, 391));
        WeatherTable->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        Diagram = new QChartView(centralwidget);
        Diagram->setObjectName(QString::fromUtf8("Diagram"));
        Diagram->setGeometry(QRect(500, 420, 591, 421));
        Diagram->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -20, 121, 941));
        label->setStyleSheet(QString::fromUtf8("\n"
"background  :  rgb(249, 255, 183)\n"
"\n"
""));
        FillButton = new QPushButton(centralwidget);
        FillButton->setObjectName(QString::fromUtf8("FillButton"));
        FillButton->setGeometry(QRect(10, 10, 101, 41));
        FillButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        AddDayButton = new QPushButton(centralwidget);
        AddDayButton->setObjectName(QString::fromUtf8("AddDayButton"));
        AddDayButton->setGeometry(QRect(10, 70, 101, 41));
        AddDayButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        AverageHumButton = new QPushButton(centralwidget);
        AverageHumButton->setObjectName(QString::fromUtf8("AverageHumButton"));
        AverageHumButton->setGeometry(QRect(10, 430, 101, 41));
        AverageHumButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 500, 101, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        MinPressureButton = new QPushButton(centralwidget);
        MinPressureButton->setObjectName(QString::fromUtf8("MinPressureButton"));
        MinPressureButton->setGeometry(QRect(10, 570, 101, 41));
        MinPressureButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        WindChangeButton = new QPushButton(centralwidget);
        WindChangeButton->setObjectName(QString::fromUtf8("WindChangeButton"));
        WindChangeButton->setGeometry(QRect(10, 640, 101, 41));
        WindChangeButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        AverageHumidity = new QLineEdit(centralwidget);
        AverageHumidity->setObjectName(QString::fromUtf8("AverageHumidity"));
        AverageHumidity->setGeometry(QRect(130, 420, 361, 51));
        AverageHumidity->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        WindChanges = new QListWidget(centralwidget);
        WindChanges->setObjectName(QString::fromUtf8("WindChanges"));
        WindChanges->setGeometry(QRect(130, 630, 361, 51));
        WindChanges->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        MinPressure = new QListWidget(centralwidget);
        MinPressure->setObjectName(QString::fromUtf8("MinPressure"));
        MinPressure->setGeometry(QRect(130, 560, 361, 51));
        MinPressure->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        MaxTemperature = new QListWidget(centralwidget);
        MaxTemperature->setObjectName(QString::fromUtf8("MaxTemperature"));
        MaxTemperature->setGeometry(QRect(130, 490, 361, 51));
        MaxTemperature->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        SaveButton = new QPushButton(centralwidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setGeometry(QRect(10, 190, 101, 41));
        SaveButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        ErrorLabel = new QLabel(centralwidget);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(130, 860, 921, 21));
        QFont font;
        font.setPointSize(9);
        ErrorLabel->setFont(font);
        ErrorLabel->setStyleSheet(QString::fromUtf8("color : rgb(0, 0, 0)"));
        ErrorLabel->setAlignment(Qt::AlignCenter);
        PeriodButton = new QPushButton(centralwidget);
        PeriodButton->setObjectName(QString::fromUtf8("PeriodButton"));
        PeriodButton->setGeometry(QRect(10, 780, 101, 41));
        PeriodButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        InfoPeriod = new QListWidget(centralwidget);
        InfoPeriod->setObjectName(QString::fromUtf8("InfoPeriod"));
        InfoPeriod->setGeometry(QRect(130, 770, 241, 71));
        InfoPeriod->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        Last = new QLineEdit(centralwidget);
        Last->setObjectName(QString::fromUtf8("Last"));
        Last->setGeometry(QRect(380, 810, 31, 31));
        Last->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        First = new QLineEdit(centralwidget);
        First->setObjectName(QString::fromUtf8("First"));
        First->setGeometry(QRect(380, 770, 31, 31));
        First->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        ChangePeriodButton = new QPushButton(centralwidget);
        ChangePeriodButton->setObjectName(QString::fromUtf8("ChangePeriodButton"));
        ChangePeriodButton->setGeometry(QRect(10, 710, 101, 41));
        ChangePeriodButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        ChangePeriod = new QListWidget(centralwidget);
        ChangePeriod->setObjectName(QString::fromUtf8("ChangePeriod"));
        ChangePeriod->setGeometry(QRect(130, 700, 361, 51));
        ChangePeriod->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255)"));
        DiagramButton = new QPushButton(centralwidget);
        DiagramButton->setObjectName(QString::fromUtf8("DiagramButton"));
        DiagramButton->setGeometry(QRect(10, 370, 101, 41));
        DiagramButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        ClearButton->setGeometry(QRect(10, 130, 101, 41));
        ClearButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        ForecastButton = new QPushButton(centralwidget);
        ForecastButton->setObjectName(QString::fromUtf8("ForecastButton"));
        ForecastButton->setGeometry(QRect(10, 250, 101, 41));
        ForecastButton->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(420, 770, 71, 31));
        label_12->setStyleSheet(QString::fromUtf8("color : rgb(0, 0, 0)"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(420, 810, 71, 31));
        label_13->setStyleSheet(QString::fromUtf8("color : rgb(0, 0, 0)"));
        Info = new QPushButton(centralwidget);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setGeometry(QRect(10, 310, 101, 41));
        Info->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255) ; \n"
"color : rgb(26, 26, 25);\n"
"border-radius : 15;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        FillButton->setText(QCoreApplication::translate("MainWindow", "Fill table", nullptr));
        AddDayButton->setText(QCoreApplication::translate("MainWindow", "Add new day", nullptr));
        AverageHumButton->setText(QCoreApplication::translate("MainWindow", "Average\n"
"humidity", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Max \n"
"temperature", nullptr));
        MinPressureButton->setText(QCoreApplication::translate("MainWindow", "Min pressure", nullptr));
        WindChangeButton->setText(QCoreApplication::translate("MainWindow", "Wind no \n"
"changes", nullptr));
        SaveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        ErrorLabel->setText(QString());
        PeriodButton->setText(QCoreApplication::translate("MainWindow", "Temperature\n"
" by period", nullptr));
        ChangePeriodButton->setText(QCoreApplication::translate("MainWindow", "Period of \n"
"change", nullptr));
        DiagramButton->setText(QCoreApplication::translate("MainWindow", "Diagram", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "Clear table", nullptr));
        ForecastButton->setText(QCoreApplication::translate("MainWindow", "Weather\n"
"forecast", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", " - first index", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", " - last index", nullptr));
        Info->setText(QCoreApplication::translate("MainWindow", "Informations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
