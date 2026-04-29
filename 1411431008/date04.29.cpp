#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "date.h" 
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
    if (y >= 1 && y < 9999)
        year = y;
    else
        cout << "year must be 0-9999";
}


void Date::setMonth(int m)
{
    if (m > 0 && m < 13)
        month = m;
    else
        cout << "month must be 1-12";
} 

void Date::setDay(int d)
{
    if (d > 0 && d < 32)
        day = d;
    else
        cout << "day must be 1-31";
} 

unsigned int Date::getYear() const
{
    return year;
}

unsigned int Date::getMonth() const
{
    return month;
}

unsigned int Date::getDay() const
{
    return day;
} 

void printDate(const Date& d) {
    std::cout << d.year << "/" << d.month << "/" << d.day << endl;
}