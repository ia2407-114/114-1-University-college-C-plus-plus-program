#ifndef DATE_H
#define DATE_H

class Date {
protected:
    int year;
    int month;
    int day;

public:
    // 建構子，預設值為 1990/1/1
    Date(int y = 1990, int m = 1, int d = 1);

    // 純虛函式（抽象方法）→ 介面與實作分離
    virtual void print() const = 0;

    // 日期驗證
    bool isValid() const;

    virtual ~Date() {}

private:
    bool isLeapYear(int y) const;
    int daysInMonth(int y, int m) const;
};

#endif#pragma once
