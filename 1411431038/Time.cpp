
#include <iostream>
#include <iomanip>
#include <stdexcept> 
#include "Time.h" 

using namespace std;


Time::Time()
    : Year(1990), Month(1), Day(1)
{
}


void Time::setTime(int y, int m, int d)
{
    if (y >= 1911 && m >= 1 && m <= 12)
    {
        int maxDays = 31;

        if (m == 2)
        {
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
                maxDays = 29;
            }
            else {
                maxDays = 28;
            }
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            maxDays = 30;
        }
        if (d >= 1 && d <= maxDays)
        {
            Year = y;
            Month = m;
            Day = d;
            return;
        }
    }
    throw invalid_argument("Year, Month and/or Day was out of range");
}

void Time::CE_Year() const
{
    cout << setfill('0') << setw(4) << Year << "/"
        << setw(2) << Month << "/" << setw(2) << Day;
}

void Time::ROC_Year() const
{
    cout << ((Year >= 1911) ? "民國" : "民國前") << ((Year >= 1911) ? Year - 1911 : Year - 1911) << "/"
        << setfill('0') << setw(2) << Month << "/" << setw(2)
        << Day;
}


