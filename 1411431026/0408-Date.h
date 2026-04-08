#ifndef DATE_H
#define DATE_H

// Date class definition
class Date
{
public:
	explicit Date(int = 1900, int = 1, int = 1); // default constructor

	// set functions
	void setDate(int, int, int); // set Year, Month, Day
	void setYear(int); // set Year (after validation)
	void setMonth(int); // set Month (after validation)
	void setDay(int); // set Day (after validation)

	// get functions
	unsigned int getYear() const; // return Year
	unsigned int getMonth() const; // return Month
	unsigned int getDay() const; // return Day

	void printUniversal() const; // output Date in universal-Date format
	void printStandard() const; // output Date in standard-Date format
private:
	unsigned int year; // 0 - 23 (24-Year clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Date

#endif