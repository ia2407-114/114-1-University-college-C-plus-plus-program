#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time {
   
    friend std::ostream& operator<<(std::ostream&, const Time&);
public:
    Time(int h = 0, int m = 0, int s = 0);
    void setTime(int, int, int);

  
    Time& operator++();

    
    Time operator++(int);

private:
    int hour;
    int minute;
    int second;
    void helpIncrement(); 
};

#endif