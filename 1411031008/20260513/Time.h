// Fig. 10.6: Time.h
// Time class definition with overloaded increment operators.
#ifndef TIME_H
#define TIME_H

#include <array>
#include <iostream>

class Time
{
	friend std::ostream& operator<<(std::ostream&, const Time&);
public:
	Time(int h = 24, int m = 60, int s = 60); // default constructor
	void setTime(int, int, int); // set month, day, year
	Time& operator++(); // prefix increment operator
	Time operator++(int); // postfix increment operator
	Time& operator+=(unsigned int); // add days, modify object
	//static bool leapYear(int); // is Time in a leap year?
	//bool endOfMonth(int) const; // is Time at the end of month?
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;

	//static const std::array< unsigned int, 13 > days; // days per month
	void helpIncrement(); // utility function for incrementing Time
}; // end class Time

#endif
