#include <iostream>
#include <string>
#include <iomanip>
#include "date timedate.h"
using namespace std;


// Date constructor
Time::Time(int h, int m, int s) {
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) {
    if (h >= 0 && h < 24) hour = h;
    else throw invalid_argument("Hour must be 0-23");

    if (m >= 0 && m < 60) minute = m;
    else throw invalid_argument("Minute must be 0-59");

    if (s >= 0 && s < 60) second = s;
    else throw invalid_argument("Second must be 0-59");
}

// 前置遞增：先加再傳回
Time& Time::operator++() {
    helpIncrement();
    return *this;
}

// 後置遞增：先備份，加完後傳回備份
Time Time::operator++(int) {
    Time temp = *this;
    helpIncrement();
    return temp;
}

// 累加秒數
Time& Time::operator+=(unsigned int s) {
    for (unsigned int i = 0; i < s; ++i)
        helpIncrement();
    return *this;
}

// 核心進位邏輯
void Time::helpIncrement() {
    second++;
    if (second >= 60) {
        second = 0;
        minute++;
        if (minute >= 60) {
            minute = 0;
            hour++;
            if (hour >= 24) {
                hour = 0; // 過了午夜 12 點歸零
            }
        }
    }
}

// 輸出格式化 (例如 13:05:09)
ostream& operator<<(ostream& output, const Time& t) {
    output << setfill('0') << setw(2) << t.hour << ":"
        << setw(2) << t.minute << ":"
        << setw(2) << t.second;
    return output;
}