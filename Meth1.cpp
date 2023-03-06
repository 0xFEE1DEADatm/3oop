#include"Class1.h"
#include<iostream>

bool Date::leap(int y) 
{
    return (y % 4 == 0);
}
Date::Date()
{
    year = 0;
    month = 0;
    day = 0;
    leapyear = 0;
    maxday = 31;
}

Date::Date(int year1, int month1, int day1)
{
    year = year1;
    month = month1;
    day = day1;
    leapyear = leap(year1);
    maxday = 31;
}
//увеличить дату на несколько дней
Date& Date::operator+=(int d)
{
    if (day + d > maxday) 
    {
        d -= maxday - day;
        if (++month > 12) 
        { 
           month = 1;
            year++;
        }
        while (d / maxday) {
            if (++month > 12) {
                month = 1;
                year++;
            }
            d -= maxday;
        }
        day = d;
    }
    else day += d;
    return *this;
}
//уменьшить дату на несколько дней
Date& Date::operator-=(int d) 
{
    if (day - d < 1)
    {
        d -= day;
        if (--month == 0) 
        {
            month = 12;
            year--;
        }
        while (d / maxday)
        {
            d -= maxday;
            if (--month == 0)
            {
                month = 12;
                year--;
            }
        }
        day = maxday - d;
    }
    else day -= d;
    return *this;
}
//разница между датами
std::string Date::operator-(Date date)
{
    int d, m, y;
    if (year >= date.year)
    {
        y = year - date.year;
        if (month > date.month) {
            m = month - date.month;
            d = day + date.maxday - date.day;
            if (d > date.maxday)d -= date.maxday;
            else --m;
            --y;
        }
        else 
        {
            m = 12 - month + date.month;
            d = date.day + maxday - day;
            if (d > maxday)d -= maxday;
            else --m;
        }
    }

    else 
    {
        y = date.year - year;
        if (month > date.month)
        {
            m = 12 - month + date.month;
            d = day + date.maxday - date.day;
            if (d > date.maxday)d -= date.maxday;
            else --m;
            --y;
        }

        else 
        {
           m = date.month - month;
            d = maxday - day + date.day;
            if (d > maxday)d -= maxday;
            else --m;
       }
    }
}
//сравнение
bool Date::operator==(Date date) 
{
    if (day == date.day && month == date.month && year == date.year)
        return 1;
    return 0;
}
//сравнение
bool Date::operator<(Date date)
{
    if (year < date.year || month < date.month && year == date.year || day < date.day && month == date.month && year == date.year)
        return 1;
    return 0;
}
std::ostream& operator<<(std::ostream& out, const Date& date)
{
    out << date.year << "." << date.month << "." << date.day;
    return out;
}
std::istream& operator>>(std::istream& in, Date& date)
{
    in >> date.year >> date.month >> date.day;
    return in;
}
