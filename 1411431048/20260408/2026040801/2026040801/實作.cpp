#include <iostream>
#include "標頭1.h"
using namespace std;

DateBase::DateBase() {
    y = 1990; m = 1; d = 1;
}

DateBase::DateBase(int y_, int m_, int d_) {
    if (check(y_, m_, d_)) {
        y = y_; m = m_; d = d_;
    }
    else {
        cout << "錯誤日期，改用1990/1/1\n";
        y = 1990; m = 1; d = 1;
    }
}

bool DateBase::check(int y, int m, int d) {
    if (m < 1 || m > 12) return false;

    int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        day[1] = 29;

    return d >= 1 && d <= day[m - 1];
}

MyDate::MyDate(int y, int m, int d) : DateBase(y, m, d) {}

void MyDate::show() {
    cout << "西元: " << y << "/" << m << "/" << d << endl;
    cout << "民國: " << y - 1911 << "/" << m << "/" << d << endl;
}