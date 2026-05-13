// Fig. 10.7: Time.cpp
// Time class member- and friend-function definitions.
#include <iostream>
#include <string>
#include <iomanip>     // setw setfill
#include <stdexcept>
#include "Time.h"
using namespace std;

// initialize static member; one classwide copy
//const array< unsigned int, 13 > Time::days =
//{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Time constructor
Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

// set time
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

// prefix ++
Time& Time::operator++()
{
    helpIncrement();
    return *this;
}

// postfix ++
Time Time::operator++(int)
{
    Time temp = *this;

    helpIncrement();

    return temp;
}

// add seconds
Time& Time::operator+=(unsigned int additionalSeconds)
{
    for (unsigned int i = 0; i < additionalSeconds; ++i)
        helpIncrement();

    return *this;
}

// increment one second
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

// output operator
ostream& operator<<(ostream& output, const Time& t)
{
    output << t.hour << ":"
        << setw(2) << setfill('0') << t.minute << ":"
        << setw(2) << setfill('0') << t.second;

    return output;
}// end function operator<<
