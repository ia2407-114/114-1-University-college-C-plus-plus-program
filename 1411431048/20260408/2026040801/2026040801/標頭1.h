#ifndef DATE_H
#define DATE_H

using namespace std;

class DateBase {
protected:
    int y, m, d;

public:
    DateBase();                 
    DateBase(int y, int m, int d);

    virtual void show() = 0;    

protected:
    bool check(int y, int m, int d);
};

class MyDate : public DateBase {
public:
    MyDate(int y, int m, int d);
    void show();
};

#endif