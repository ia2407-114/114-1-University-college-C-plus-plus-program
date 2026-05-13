// Fig. 10.7: time.cpp
// Time class member- and friend-function definitions.
#include <iostream>
#include <iomanip> 
#include <stdexcept>
#include "date.h"  
using namespace std;

// Date constructor
Time::Time(int h, int m, int s)
{
    setDate(h, m, s); 
} // end Date constructor

// set month, day and year
void Time::setDate(int h, int m, int s)
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
} // end function setDate

// overloaded prefix increment operator
Time& Time::operator++()
{
    helpIncrement(); // increment date
    return *this;    // reference return to create an lvalue
} // end function operator++

// overloaded postfix increment operator; note that the  
// dummy integer parameter does not have a parameter name
Time Time::operator++(int)
{
    Time temp = *this; // hold current state of object
    helpIncrement();   

    return temp;  // value return; not a reference return
} // end function operator++

// add specified number of days to date
Time& Time::operator+=(unsigned int additionalSeconds)
{
    for (unsigned int i = 0; i < additionalSeconds; ++i)
        helpIncrement();

    return *this; 
} 


bool Time::leapYear(int h)
{
    return (h >= 0 && h < 24);
} // end function leapYear


bool Time::endOfMonth(int secToAdd) const
{
    unsigned int totalSeconds = (hour * 3600) + (minute * 60) + second;
    totalSeconds += secToAdd;
    return (totalSeconds % 86400) == 86399;
} // end function endOfMonth


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
} // end function helpIncrement


ostream& operator<<(ostream& output, const Time& t)
{
    output << setfill('0') << setw(2) << t.hour << ":"
        << setw(2) << t.minute << ":"
        << setw(2) << t.second;
    return output;
} // end function operator<<
