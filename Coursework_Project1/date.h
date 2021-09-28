#ifndef DATE_H
#define DATE_H

#include <QDataStream>
#include <QTableWidget>

class Weather;

class Date
{
public:
    Date(int year = 2021 , int mounth = 9 , int day = 6);
    Date(const Date& other);

    int GetDay();
    int GetMounth();
    int GetYear();

    Date& operator++();
    friend QTextStream& operator>>(QTextStream& stream , Weather& weather);

protected:
    int year;
    int mounth;
    int day;
};

#endif // DATE_H
