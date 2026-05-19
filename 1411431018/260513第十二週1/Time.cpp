// Fig. 10.7: Time.cpp
// Time class member- and friend-function definitions.
#include <iostream>
#include <string>
#include <iomanip>
#include "Time.h"
using namespace std;

// Time constructor
Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
} // end Time constructor

// set month, day and year
void Time::setTime(int h, int m, int s)
{
    if (m >= 0 && m <= 59)
        minute = m;
    else
        cout << "Minute must be 1-59" << endl;

    if (h >= 0 && h <= 24)
        hour = h;
    else
        cout << "Hour must be >= 0 and <= 24" << endl;

    if (s >= 0 && s <= 59)
        second = s;
    else
        cout << "Second must be >= 0 and <= 59" << endl;

} // end function setTime

// overloaded prefix increment operator 
Time& Time::operator++()
{
    helpIncrement(); 
    return *this; 
} // end function operator++


Time Time::operator++(int)
{
    Time temp = *this; 
    helpIncrement();
    return temp; 
} // end function operator++

Time& Time::operator+=(unsigned int additionalSeconds)
{
    for (int i = 0; i < additionalSeconds; ++i)
        helpIncrement();

    return *this; // enables cascading
} // end function operator+=


void Time::helpIncrement()
{
    second++; // ¬í¼Æ¥[ 1

    if (second >= 60) {
        second = 0;
        minute++;

        if (minute >= 60) {
            minute = 0;
            hour++;

            if (hour >= 24) {
                hour = 0; // ¶W¹L 23:59:59 Âk¹s
            }
        }
    }
}

//overloaded output operator
ostream& operator<<(ostream& output, const Time& t)
{
    output << t.hour << ":"
        << setfill('0') << setw(2) << t.minute << ":"
        << setw(2) << t.second;
    return output; // enables cascading
} // end function operator<<