#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <math.h>
#include <QMainWindow>
#include <QTextStream>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QListWidget>
#include <QtCharts/QtCharts>

#include "weather.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Diagram
{
    QLineSeries ** series;
    QChart *chart = nullptr;

    void DeleteGraphic()
    {
        for(int i = 0 ; i < 3 ; i++)
            delete series[i];
        delete[] series;
        delete chart;
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool Check();
    bool Check(QListWidget * list);
    bool Check(QListWidget * list , int first , int last);

private slots:
    void on_FillButton_clicked();

    void on_SaveButton_clicked();

    void on_AddDayButton_clicked();

    void on_AverageHumButton_clicked();

    void on_pushButton_4_clicked();

    void on_MinPressureButton_clicked();

    void on_WindChangeButton_clicked();

    void on_PeriodButton_clicked();

    void on_ChangePeriodButton_clicked();

    void on_DiagramButton_clicked();

    void on_ClearButton_clicked();

    void on_ForecastButton_clicked();

    void on_Info_clicked();

private:
    Ui::MainWindow *ui;
    Diagram diagram;

    friend class AddDay;
    friend class Forecast;
};
#endif // MAINWINDOW_H
