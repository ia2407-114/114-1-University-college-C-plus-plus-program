
#include <iostream>
#include <stdexcept>
#include "Date.h"

using namespace std;


Date::Date(int y, int m, int d)
{
    setDate(y, m, d);
}

void Date::setDate(int y, int m, int d)
{
    setYear(y);
    setMonth(m);
    setDay(d);
}

void Date::setYear(int y)
{
    if (y >= 1)
        year = y;
    else
        throw invalid_argument("Year mist > 0");
}

void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("month must be 1-12 ");
}

void Date::setDay(int d)
{
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) daysInMonth[2] = 29;

    if (d >= 1 && d <= daysInMonth[month])
        day = d;
    else
        throw invalid_argument("month not correct");
}

unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

bool Date::isLeapYear(int y) const
{
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

void Date::printUniversal() const
{
    cout << "西元日期: " << getYear() << "/" << getMonth() << "/" << getDay() << endl;
}

void Date::printTaiwan() const
{
    
    cout << "民國日期: " << (getYear() - 1911) << "/" << getMonth() << "/" << getDay() << endl;
}