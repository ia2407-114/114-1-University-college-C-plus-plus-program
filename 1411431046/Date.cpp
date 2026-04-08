#include "Date.h"

// 🔸建構子
Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}


void Date::inputDate() {
    cout << "請輸入 西元 年 月 日：";
    cin >> year >> month >> day;
}


bool Date::isValid() {
    if (month < 1 || month > 12)
        return false;

    int days;

    // 閏年判斷
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        days = 29;
    else
        days = 28;

    if (month == 2)
        days = days;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    if (day < 1 || day > days)
        return false;

    return true;
}


void Date::showAD() {
    cout << "西元日期：" << year << "/" << month << "/" << day << endl;
}


void Date::showROC() {
    int rocYear = year - 1911;

    if (rocYear <= 0)
        cout << "民國前："
        << month << "/" << day << endl;
    else
        cout << "民國日期："
        << rocYear << "/" << month << "/" << day << endl;
}