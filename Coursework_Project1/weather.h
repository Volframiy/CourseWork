#ifndef WEATHER_H
#define WEATHER_H

#include "date.h"

#include <QTextStream>
#include <QTableWidget>

class Weather
{
public:
    Weather(const Date& date = Date(2021 , 9 , 6) , double temp = 28 , int humidity = 85 , int pressure = 745 ,  QString wind = "West");
    Weather(Weather& other);

    const Date& GetDate();
    QString GetWind();
    double GetTemperature();
    int GetHumidity();
    int GetPressure();

    friend QTextStream& operator<<(QTextStream& stream , Weather& weather);
    friend QTextStream& operator>>(QTextStream& stream , Weather& weather);
    friend QTableWidget* operator <<(QTableWidget* table , Weather& weather);

protected:
    Date date;
    QString wind;
    double temperature;
    int humidity;
    int pressure;

};

#endif // WEATHER_H
