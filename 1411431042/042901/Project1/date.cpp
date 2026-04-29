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

void Date::setYear(int y)
{
    if (y >= 1 && y <= 9999)
        year = y;
    else
    {
        cout << "Invalid year, set to 1900\n";
        year = 1900;
    }
}

void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
    {
        cout << "Invalid month, set to 1\n";
        month = 1;
    }
}

void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
    {
        cout << "Invalid day, set to 1\n";
        day = 1;
    }
}

unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << year << "-"
        << setw(2) << month << "-"
        << setw(2) << day;
}

void Date::printStandard() const
{
    cout << (year < 1911 ? "民國前 " : "民國 ");

    if (year >= 1912)
        cout << year - 1911;
    else
        cout << 1911 - year;

    cout << "/" << setfill('0') << setw(2) << month
        << "/" << setw(2) << day;
}

void printDate(const Date& d)
{
    cout << "西元 "
        << setfill('0') << setw(4) << d.year << "/"
        << setw(2) << d.month << "/"
        << setw(2) << d.day;

    cout << " (民國 ";
    if (d.year >= 1912)
        cout << d.year - 1911;
    else
        cout << "前 " << 1911 - d.year;

    cout << "/" << setw(2) << d.month
        << "/" << setw(2) << d.day << ")";
}