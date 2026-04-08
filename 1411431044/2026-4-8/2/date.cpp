#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date(int y, int m, int d) { setDate(y, m, d); }

void Date::setDate(int y, int m, int d) {
    setYear(y); setMonth(m); setDay(d);
}

void Date::setYear(int y) {
    if (y >= 0) year = y;
    else throw invalid_argument("Year cannot be negative");
}

void Date::setMonth(int m) {
    if (m >= 1 && m <= 12) month = m;
    else throw invalid_argument("Month must be 1-12");
}

void Date::setDay(int d) {
    if (d >= 1 && d <= getDaysInMonth()) day = d;
    else throw invalid_argument("Invalid day for current month");
}

bool Date::isLeapYear() const {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int Date::getDaysInMonth() const {
    static const int daysPerMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear()) return 29;
    return daysPerMonth[month];
}

void Date::print() const {
    cout << year << "/" << setfill('0') << setw(2) << month << "/" << setw(2) << day;
}