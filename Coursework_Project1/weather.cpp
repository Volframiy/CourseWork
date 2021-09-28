#include "weather.h"

extern int ColumnSize;

Weather::Weather(const Date &date , double temp, int humidity, int pressure , QString wind) :
    date(date) , wind(wind) , temperature(temp) , humidity(humidity) , pressure(pressure)
{
}

Weather::Weather(Weather &other) : date(other.date) , wind(other.wind) , temperature(other.temperature),
    humidity(other.humidity) , pressure(other.pressure)
{
}

const Date &Weather::GetDate() {return this->date;}

QString Weather ::GetWind() {return this->wind;}

double Weather ::GetTemperature() {return this->temperature;}

int Weather ::GetHumidity() {return this->humidity;}

int Weather :: GetPressure() {return this->pressure;}

QTextStream& operator>>(QTextStream& stream , Weather& weather)
{
    QString str;
    QStringList list;

    str = stream.readLine();
    list = str.split(' ');

    weather.date.year = list[0].toInt();
    weather.date.mounth = list[1].toInt();
    weather.date.day = list[2].toInt();
    weather.temperature = list[3].toDouble();
    weather.pressure = list[4].toInt();
    weather.humidity = list[5].toInt();
    weather.wind = list[6];

    return stream;
}

QTableWidget* operator <<(QTableWidget* table , Weather& weather)
{
    table->setRowCount(table->rowCount() + 1);

    int IndxRow = table->rowCount() - 1;

    for(int i = 0 ; i < ColumnSize ; i++)
    {
        QTableWidgetItem* temp = new QTableWidgetItem();
        table->setItem(IndxRow , i , temp);
    }

    table->item(IndxRow , 0)->setText(QString :: number(weather.date.GetYear()));
    table->item(IndxRow , 1)->setText(QString :: number(weather.date.GetMounth()));
    table->item(IndxRow , 2)->setText(QString :: number(weather.date.GetDay()));
    table->item(IndxRow , 3)->setText(QString :: number(weather.temperature));
    table->item(IndxRow , 4)->setText(QString :: number(weather.pressure));
    table->item(IndxRow , 5)->setText(QString :: number(weather.humidity));
    table->item(IndxRow , 6)->setText(weather.wind);

    return table;
}

QTextStream& operator<<(QTextStream& stream , Weather& weather)
{
    stream << QString :: number(weather.date.GetYear()) << " ";
    stream << QString :: number(weather.date.GetMounth()) << " ";
    stream << QString :: number(weather.date.GetDay()) << " ";
    stream << QString :: number(weather.temperature) << " ";
    stream << QString :: number(weather.pressure) << " ";
    stream << QString :: number(weather.humidity) << " ";
    stream << weather.wind << "\n";

    return stream;
}



