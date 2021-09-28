#ifndef FORECAST_H
#define FORECAST_H

#include <QDialog>
#include <QRandomGenerator>

#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace Ui {
class Forecast;
}

class Forecast : public QDialog
{
    Q_OBJECT

public:
    explicit Forecast(MainWindow *parent);
    ~Forecast();

private slots:
    void on_ButClose_clicked();

    void on_ButForecast_clicked();

private:
    Ui::Forecast *ui;
    MainWindow* mw;
    QRandomGenerator generator;
};

#endif // FORECAST_H
