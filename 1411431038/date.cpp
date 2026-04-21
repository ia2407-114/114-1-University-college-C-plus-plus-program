#include <iostream>
#include <iomanip>
#include "Date.h" 
using namespace std;

Date::Date(int year, int month, int day)
{
    setDate(year, month, day);
}

void Date::setDate(int y, int m, int d)
{
    setYear(y);
    setMonth(m);
    setDay(d);
}

void Date::setYear(int y) { year = y; }
void Date::setMonth(int m) { month = m; }
void Date::setDay(int d) { day = d; }

unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << getYear() << "/"
        << setw(2) << getMonth() << "/" << setw(2) << getDay();
}

void Date::printStandard() const
{
    if (year >= 1912) cout << "民國 " << year - 1911;
    else cout << "民國前 " << 1912 - year;

    cout << " 年 " << setfill('0') << setw(2) << getMonth()
        << " 月 " << setw(2) << getDay() << " 日";
}