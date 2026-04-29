#include <iostream>
#include "pet.h" // Employee class definition
using namespace std;

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
	
	
	printDate(pet1);
	printDate(pet2);
	printDate(pet3);

	return 0; 

} // end main