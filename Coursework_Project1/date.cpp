#include "date.h"

Date::Date(int year , int mounth , int day) : year(year) , mounth(mounth) , day(day)
{
}

Date::Date(const Date& other) : year(other.year) , mounth(other.mounth) , day(other.day)
{
}

int Date::GetDay() { return this->day; }

int Date::GetMounth() { return this->mounth; }

int Date::GetYear() { return this->year; }

Date &Date::operator++()
{
    if(mounth == 12 && day == 31)
    {
        year++;
        mounth = 1;
        day = 1;

        return *this;
    }

    if((day == 28 && mounth == 2) ||
            (day == 30 && (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11)))
    {
        mounth++;
        day = 1;

        return *this;
    }

    if(day == 31)
    {
        mounth++;
        day = 1;

        return *this;
    }

    day++;
    return *this;
}


