#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date(int year, int month, int day) { setDate(year, month, day); }

void Date::setDate(int y, int m, int d) {
    setYear(y); setMonth(m); setDay(d);
}

void Date::setYear(int y) { year = (y >= 1 && y < 9999) ? y : 1900; }
void Date::setMonth(int m) { month = (m > 0 && m < 13) ? m : 1; }
void Date::setDay(int d) { day = (d > 0 && d < 32) ? d : 1; }

unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

void Date::printUniversal() const {
    cout << "西元" << setfill('0') << setw(4) << getYear() << "/"
        << setw(2) << getMonth() << "/" << setw(2) << getDay();
}

void Date::printStandard() const {
    cout << (year < 1911 ? "民國前 " : "民國 ")
        << (year >= 1911 ? year - 1911 : 1911 - year)
        << "/" << setfill('0') << setw(2) << getMonth()
        << "/" << setw(2) << getDay();
}