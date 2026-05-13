#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    // friend 函數可直接存取 private 成員
    friend ostream& operator<<(ostream&, const Time&);

public:
    // 建構子
    Time(int h = 0, int m = 0, int s = 0);

    // 設定時間
    void setTime(int, int, int);

    // 前置
    Time& operator++();

    // 後置
    Time operator++(int);

    Time& operator+=(unsigned int);

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

    // 工具函式：時間增加 1 秒
    void helpIncrement();
};

#endif