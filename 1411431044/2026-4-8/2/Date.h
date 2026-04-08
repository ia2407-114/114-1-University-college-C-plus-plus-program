#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(int = 2000, int = 1, int = 1);
    void setDate(int, int, int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    bool isLeapYear() const;
    int getDaysInMonth() const;
    void print() const;
private:
    int year;
    int month;
    int day;
};

#endif