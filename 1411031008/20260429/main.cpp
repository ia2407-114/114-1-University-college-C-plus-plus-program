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
} // end main

void printDate(PET p)
{
	cout << "  ¥Í¤é";  p.birthDate.printUniversal(); cout << endl;
	cout << "  »â¾i¤é"; p.adoptDate.printUniversal(); cout << endl;
}