#include <iostream>
class Date
{
    bool leapyear;
    int day;
    int month;
    int year;
    int maxday = 31;
    bool leap(int year1);
public:
    Date();
    Date(int year1, int month1, int day1);
    Date& operator+=(int);
    Date& operator-=(int);
    std::string operator-(Date date);
    bool operator==(Date date);
    bool operator<(Date date);
    friend std::ostream& operator<<(std::ostream& out, const Date& date);
    friend std::istream& operator>>(std::istream& in, Date& date);

};
