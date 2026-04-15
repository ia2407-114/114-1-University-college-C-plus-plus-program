// Fig. 9.6: fig19_16.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Date.h" // include definition of class Date from Date.h
#include "Pet.h"
using namespace std;

int main()
{
    int year = 1,month = 1,day =1;
    int year1 =1, month1 =1, day1 =1;

    cout << "輸入西元年生日" << endl;
	cin >> year >> month >> day;
    Date birthday(year, month, day);

    cout << "輸入西元年領養" << endl;
    cin >> year1 >> month1 >> day1;
    Date adoptday(year1, month1, day1);

    Pet pet1("bob", "dog", birthday, adoptday);
    pet1.print();

    cout << "輸入西元年生日" << endl;
    cin >> year >> month >> day;
    Date birthday1(year, month, day);

    cout << "輸入西元年領養" << endl;
    cin >> year1 >> month1 >> day1;
    Date adoptday1(year1, month1, day1);

    Pet pet2("john", "dog", birthday1, adoptday1);
    pet2.print();

    cout << "輸入西元年生日" << endl;
    cin >> year >> month >> day;
    Date birthday2(year, month, day);

    cout << "輸入西元年領養" << endl;
    cin >> year1 >> month1 >> day1;
    Date adoptday2(year1, month1, day1);

    Pet pet3("kenny", "parrot", birthday2, adoptday2);
    pet3.print();
} // end main
