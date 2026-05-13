#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;


Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}


void Time::setTime(int h, int m, int s)
{
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
    {
        hour = h;
        minute = m;
        second = s;
    }
    else
        throw invalid_argument("Hour, minute or second was out of range");
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
    if (++second >= 60)
    {
        second = 0;
        if (++minute >= 60)
        {
            minute = 0;
            if (++hour >= 24)
            {
                hour = 0; 
            }
        }
    }
}


ostream& operator<<(ostream& output, const Time& t)
{
    output << setfill('0') << setw(2) << t.hour << ":"
        << setw(2) << t.minute << ":"
        << setw(2) << t.second;
    return output;
}