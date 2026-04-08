#include "Date.h"

// 父類建構子
Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

// 子類建構子
DateImpl::DateImpl(int y, int m, int d) : Date(y, m, d) {}

void DateImpl::input() {
    cout << "輸入 年 月 日: ";
    cin >> year >> month >> day;
}

void DateImpl::printAD() {
    cout << "西元: " << year << "/" << month << "/" << day << endl;
}

void DateImpl::printROC() {
    if (year < 1912)
        cout << "無民國年" << endl;
    else
        cout << "民國: " << year - 1911 << "/" << month << "/" << day << endl;
}

bool DateImpl::isValid() {
    if (month < 1 || month > 12) return false;
    if (day < 1) return false;

    int days;

    switch (month) {
    case 2:
        days = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    default:
        days = 31;
    }

    return day <= days;
}