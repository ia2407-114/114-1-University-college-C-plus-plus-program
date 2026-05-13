#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

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
Time& Time::operator++()
{
    helpIncrement();
    return *this;
}

Time Time::operator++(int)
{
    Time temp = *this;

    helpIncrement();

    return temp;
}

Time& Time::operator+=(unsigned int additionalSeconds)
{
    for (unsigned int i = 0; i < additionalSeconds; ++i)
        helpIncrement();

    return *this;
}

void Time::helpIncrement()
{
    ++second;

    if (second >= 60)
    {
        second = 0;
        ++minute;

        if (minute >= 60)
        {
            minute = 0;
            ++hour;

            if (hour >= 24)
            {
                hour = 0;
            }
        }
    }
}

ostream& operator<<(ostream& output, const Time& t)
{
    output << t.hour << ":"                      
           << setw(2) << setfill('0') << t.minute << ":"
           << setw(2) << t.second;

    return output;
}