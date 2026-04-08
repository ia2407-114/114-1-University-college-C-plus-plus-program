#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date(int y, int m, int d) {
    setDate(y, m, d);
}

void Date::setDate(int y, int m, int d) {
    setYear(y);
    setMonth(m);
    setDay(d); 
}

void Date::setYear(int y) {
    if (y >= 0) year = y;
    else throw invalid_argument("年份不能為負數");
}

void Date::setMonth(int m) {
    if (m >= 1 && m <= 12) month = m;
    else throw invalid_argument("月份必須在 1-12 之間");
}

void Date::setDay(int d) {
    
    if (d >= 1 && d <= checkDay(d)) day = d;
    else throw invalid_argument("該月份日期數值錯誤");
}


bool Date::isLeapYear(int y) const {
    return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
}


int Date::checkDay(int testDay) const {
    static const int daysPerMonth[13] =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && isLeapYear(year)) return 29;
    return daysPerMonth[month];
}

void Date::printWestern() const {
    cout << "西元日期: " << year << "/" << month << "/" << day << endl;
}

void Date::printRepublic() const {
    
    cout << "民國日期: " << (year - 1911) << "/" << month << "/" << day << endl;
}