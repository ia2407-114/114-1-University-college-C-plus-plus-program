#include <iostream>
#include "pet.h"
using namespace std;

void print(PET& p) {
	p.petprint();
}

int main()
{
	Date birth(2019,7, 24);
	Date adopt(2021, 12, 21);
	PET pet1("Bob", "Dog", birth, adopt);
	PET pet2("Fat", "Parrot", birth, adopt);
	PET pet3("Strong", "Parrot", birth, adopt);

	cout << endl;
	print(pet1);
	print(pet2);
	print(pet3);
}