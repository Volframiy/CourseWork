#include "forecast.h"
#include "ui_forecast.h"

#include "date.h"
#include "weather.h"

extern int ColumnSize;

Forecast::Forecast(MainWindow *parent) :
    QDialog(),
    ui(new Ui::Forecast)
{
    ui->setupUi(this);

    mw = parent;
    setWindowTitle("Forecast weather");

    QStringList list;
    list << "Year" << "Mounth" << "Day" << "Temperature,C" <<
            "Pressure,mm" << "Humidity,%" << "WindDirection";

    ui->WeatherTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->WeatherTable->setSelectionMode(QAbstractItemView::NoSelection);
    ui->WeatherTable->setColumnCount(ColumnSize);
    ui->WeatherTable->setRowCount(0);
    ui->WeatherTable->setHorizontalHeaderLabels(list);
}

Forecast::~Forecast()
{
    delete ui;
}

void Forecast::on_ButClose_clicked()
{
    for (int i = 0 ; i  < ui->WeatherTable->rowCount() ; i++)
        for(int j = 0 ; j < ColumnSize ; j++)
            delete ui->WeatherTable->item(i , j);

    close();
}

void Forecast::on_ButForecast_clicked()
{
    if(!mw->ui->WeatherTable->rowCount())
    {
        ui->ErrorLabel->setText("Error : table is empty");
        return;
    }

    for (int i = 0 ; i  < ui->WeatherTable->rowCount() ; i++)
        for(int j = 0 ; j < ColumnSize ; j++)
            delete ui->WeatherTable->item(i , j);

    ui->WeatherTable->setRowCount(0);

    int TableYear = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 0)->text().toInt();
    int TableMounth = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 1)->text().toInt();
    int TableDay = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 2)->text().toInt();
    double TableTemp = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 3)->text().toDouble();
    int TablePress = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 4)->text().toInt();
    int TableHum = mw->ui->WeatherTable->item(mw->ui->WeatherTable->rowCount() - 1 , 5)->text().toInt();
    int TemperatureState = 1;
    QString wind = "";

    Date date(TableYear , TableMounth , TableDay);
    ++date;

    if(TableMounth == 12 || TableMounth == 1 || TableMounth == 6 || TableMounth == 7)
        TemperatureState = 0;
    if(TableMounth == 9 || TableMounth == 10 || TableMounth == 11 || TableMounth == 8)
        TemperatureState= -1;
    else
        TemperatureState = 1;

    for (int i = 0 ; i < 30 ; i++)
    {
        switch(TemperatureState)
        {
        case (1) :
            TableTemp += generator.bounded(0.75);
            TableTemp -= generator.bounded(0.55);
            break;

        case (0) :
            TableTemp += generator.bounded(2);
            TableTemp -= generator.bounded(2);
            break;

        case (-1) :
            TableTemp += generator.bounded(0.25);
            TableTemp -= generator.bounded(0.55);
            break;
        }

        switch (generator.bounded(1, 4))
        {
        case 1 :
            wind = "West";
            break;
        case 2 :
            wind = "Est";
            break;
        case 3 :
            wind = "Northern";
            break;
        case 4 :
            wind = "Southern";
            break;
        }

        if(i % 2)
            TableTemp += 1.5;
        else
            TableTemp -= 1.5;

        if(TablePress > 800)
            TablePress -= 13;
        if(TablePress < 695)
            TablePress += 7;
        if(TableHum < 30)
            TableHum += 7;
        if(TableHum > 96)
            TableHum -= 5;

        TablePress += (generator.bounded(0 , 8) + generator.bounded(-5 , 0));
        TableHum += (generator.bounded(0 , 4) + generator.bounded(-3 , 0));

        Weather weather(date , TableTemp , TableHum , TablePress , wind);
        ui->WeatherTable << weather;

        ++date;
    }

    ui->ErrorLabel->setText("");
}
