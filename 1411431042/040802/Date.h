#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

// 抽象類別
class Date {
protected:
    int year, month, day;

public:
    Date(int y = 1990, int m = 1, int d = 1);

    virtual void input() = 0;
    virtual void printAD() = 0;
    virtual void printROC() = 0;
    virtual bool isValid() = 0;

    virtual ~Date() {}
};

// 👉 把實作類別放這裡
class DateImpl : public Date {
public:
    DateImpl(int y = 1990, int m = 1, int d = 1);

    void input() override;
    void printAD() override;
    void printROC() override;
    bool isValid() override;
};

#endif