#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time(int h, int m, int s) { setTime(h, m, s); }

void Time::setTime(int h, int m, int s) {
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}


Time& Time::operator++() {
    helpIncrement();
    return *this;
}


Time Time::operator++(int) {
    Time temp = *this;
    helpIncrement();
    return temp;
}

void Time::helpIncrement() {
    if (++second == 60) {
        second = 0;
        if (++minute == 60) {
            minute = 0;
            if (++hour == 24) hour = 0;
        }
    }
}


ostream& operator<<(ostream& output, const Time& t) {
    output << setfill('0') << setw(2) << t.hour << ":"
        << setw(2) << t.minute << ":" << setw(2) << t.second;
    return output;
}