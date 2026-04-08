#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "0408-Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor initializes each data member 
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // validate and set Date
} // end Date constructor

// set new Date value using universal Date
void Date::setDate(int y, int m, int d)
{
    setYear(y); // set private field Year
    setMonth(m); // set private field Month
    setDay(d); // set private field Day
} // end function setDate

// set Year value
void Date::setYear(int y)
{
    if (y > 0 && y < 9999)
        year = y;
    else
        throw invalid_argument("Year must be 0-9999");
} // end function setYear

// set Month value
void Date::setMonth(int m)
{
    if (m >0 && m < 13)
        month = m;
    else
        throw invalid_argument("Month must be 1-12");
} // end function setMonth

// set Day value
void Date::setDay(int d)
{
    if (d >= 0 && d < 32)
        day = d;
    else
        throw invalid_argument("Day must be 1-31");
} // end function setDay

// return Year value
unsigned int Date::getYear() const
{
    return year;
} // end function getYear

// return Month value
unsigned int Date::getMonth() const
{
    return month;
} // end function getMonth

// return Day value
unsigned int Date::getDay() const
{
    return day;
} // end function getDay

// print Date in universal-Date format (HH:MM:SS)
void Date::printUniversal() const
{
    cout << setfill('0') << setw(2) << getYear() << "/"
        << setw(2) << getMonth() << "/" << setw(2) << getDay();
} // end function printUniversal

// print Date in standard-Date format (HH:MM:SS AM or PM)
void Date::printStandard() const
{
    cout << ( year < 1911 ? "民國前" : "民國") << ((getYear() >1911 ? year-1911 : 1911-year))
        << "/" << setfill('0') << setw(2) << getMonth()
        << "/" << setw(2) << getDay() ;
} // end function printStandard