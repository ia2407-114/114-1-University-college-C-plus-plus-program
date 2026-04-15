#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "date.h"
using namespace std;

Date::Date(int year, int month, int day) { setDate(year, month, day); }

void Date::setDate(int y, int m, int d) {
    setYear(y);
    setMonth(m);
    setDay(d);
}

void Date::setYear(int y) {
    if (y >= 1 && y <= 9999) year = y;
    else throw invalid_argument("Year must be 1-9999");
}

void Date::setMonth(int m) {
    if (m >= 1 && m <= 12) month = m;
    else throw invalid_argument("Month must be 1-12");
}

void Date::setDay(int d) {
    if (d >= 1 && d <= 31) day = d;
    else throw invalid_argument("Day must be 1-31");
}

unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

void Date::printUniversal() const {
    // Label in Chinese: 西元
    cout << "西元 " << year << "/" << setfill('0') << setw(2) << month << "/" << setw(2) << day;
}

void Date::printStandard() const {
    // Label in Chinese: 民國/民國前
    cout << (year <= 1911 ? "民國前 " : "民國 ")
        << (year > 1911 ? year - 1911 : 1912 - year)
        << " 年 " << month << " 月 " << day << " 日";
}