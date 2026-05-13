#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "0513-1.h"
using namespace std;

// 建構子
Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

// 設定時間
void Time::setTime(int h, int m, int s)
{
    if (h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("Hour must be 0-23");

    if (m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("Minute must be 0-59");

    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("Second must be 0-59");
}

// 前置 ++
Time& Time::operator++()
{
    helpIncrement();
    return *this;
}

// 後置 ++
Time Time::operator++(int)
{
    Time temp = *this; // 保留原本時間
    helpIncrement();
    return temp;
}

// += 秒數
Time& Time::operator+=(unsigned int additionalSeconds)
{
    for (unsigned int i = 0; i < additionalSeconds; i++)
        helpIncrement();

    return *this;
}

// 增加 1 秒
void Time::helpIncrement()
{
    ++second;

    // 秒滿 60
    if (second >= 60)
    {
        second = 0;
        ++minute;
    }

    // 分滿 60
    if (minute >= 60)
    {
        minute = 0;
        ++hour;
    }

    // 小時滿 24
    if (hour >= 24)
    {
        hour = 0;
    }
}

// 輸出運算子 <<
ostream& operator<<(ostream& output, const Time& t)
{
    output << setw(2) << setfill('0') << t.hour << ":"
        << setw(2) << setfill('0') << t.minute << ":"
        << setw(2) << setfill('0') << t.second;

    return output;
}