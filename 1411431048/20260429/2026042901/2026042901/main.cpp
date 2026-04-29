#include <iostream>
#include <iomanip>
#include "pet.h"   // Employee class definition
#include "Date.h"
using namespace std;


void printfDate(PET);

int main()
{
	Date birth(2019, 7, 24);
	Date adopt(2021, 12, 21);

	PET pet1("Bob", "Dog", birth, adopt);
	PET pet2("Fat", "Parrot", birth, adopt);
	PET pet3("Strong", "Parrot", birth, adopt);

	cout << endl;
	pet1.print();
	pet2.print();
	pet3.print();

	printfDate(pet1);

	return 0;
} // end main

void printfDate(PET p) {
	
	cout << "生日：民國 "
		<< (p.birthDate.getYear() > 1911 ? p.birthDate.getYear() - 1911 : 1911 - p.birthDate.getYear())
		<< "/" << setfill('0') << setw(2) << p.birthDate.getMonth()
		<< "/" << setw(2) << p.birthDate.getDay() << endl;

	
	cout << "領養日：民國 "
		<< (p.adoptDate.getYear() > 1911 ? p.adoptDate.getYear() - 1911 : 1911 - p.adoptDate.getYear())
		<< "/" << setfill('0') << setw(2) << p.adoptDate.getMonth()
		<< "/" << setw(2) << p.adoptDate.getDay() << endl;
}
