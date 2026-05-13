#ifndef date timedate_h
#define date timedate_h

#include <array>
#include <iostream>

#include <iostream>

class Time {
    // 多載輸出運算子
    friend std::ostream& operator<<(std::ostream&, const Time&);

public:
    Time(int h = 0, int m = 0, int s = 0); // 建構子
    void setTime(int, int, int);           // 設定時間

    Time& operator++();    // 前置遞增 (++t)
    Time operator++(int);  // 後置遞增 (t++)
    Time& operator+=(unsigned int seconds); // 增加秒數

private:
    unsigned int hour;   // 0-23
    unsigned int minute; // 0-59
    unsigned int second; // 0-59
    void helpIncrement(); // 核心：處理進位邏輯
};

#endif
