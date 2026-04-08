#ifndef DATE_H
#define DATE_H

class Date {
public:
	
	explicit Date(int = 1990, int = 1, int = 1);

	
	void setDate(int, int, int);
	void setYear(int);
	void setMonth(int);
	void setDay(int);

	
	void printWestern() const; 
	void printRepublic() const; 

private:
	int year;
	int month;
	int day;

	
	int checkDay(int) const;
	bool isLeapYear(int) const;
};

#endif#pragma once
