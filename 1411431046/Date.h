#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

// 🔸抽象類別
class DateBase {
public:
    virtual void inputDate() = 0;
    virtual void showAD() = 0;
    virtual void showROC() = 0;
    virtual bool isValid() = 0;
};

// 🔸實作類別宣告
class Date : public DateBase {
private:
    int year, month, day;

public:
    // 建構子（預設值）
    Date(int y = 1990, int m = 1, int d = 1);

    void inputDate();
    void showAD();
    void showROC();
    bool isValid();
};

#endif