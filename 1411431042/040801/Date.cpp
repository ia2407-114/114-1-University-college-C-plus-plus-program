#include "Date.h"

Date::Date(int y, int m, int d)
    : year(y), month(m), day(d) {
}

bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int Date::daysInMonth(int y, int m) const {
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (m == 2 && isLeapYear(y)) return 29;
    return days[m - 1];
}

bool Date::isValid() const {
    if (year < 1912) return false;  // 民國元年以前不合理
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > daysInMonth(year, month)) return false;
    return true;
}