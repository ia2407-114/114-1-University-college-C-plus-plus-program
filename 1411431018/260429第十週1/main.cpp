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

	/*cout << endl;
	pet1.print();
	pet2.print();
	pet3.print();*/

	cout << "---執行友誼函數---" << endl;

	printDate(pet1);

	return 0;
} // end main

void printDate(PET &p)
{
	cout << "生日";
	p.birthDate.printUniversal();
	cout << endl;
	cout << "領養日";
	p.adoptDate.printUniversal();
	cout << endl;
}

/*題目1.修改上述檔案中的類別(介面與實作檔)，將一個獨立函數printDate()設定為friend function，
再呼叫此函數印出物件的生日與領養日*/