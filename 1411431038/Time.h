
#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time(); // constructor
	void setTime(int, int, int); // set hour, minute and second
	void	CE_Year() const; // print time in universal-time format
	void ROC_Year() const; // print time in standard-time format
private:
	unsigned int Year;
	unsigned int Month;
	unsigned int Day;
}; // end class Time

#endif


#pragma once
