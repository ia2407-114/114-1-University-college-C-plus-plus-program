#include <iostream>
#include "pet.h" // PET class definition
using namespace std;

int main()
{
	/*Date birth(1949, 7, 24);
	Date adopt(1988, 3, 12);
	PET myPet1("Bob", "Dog", birth, adopt);
	PET myPet2("PJ", "Cat", birth, adopt);
	PET myPet3("Sam", "Fish", birth, adopt);

	cout << endl;
	myPet1.print();
	myPet2.print();
	myPet3.print();*/

    for (int i = 1; i <= 3; ++i) {
        string name, petCategory;
        int by, bm, bd, ay, am, ad;

        cout << "--- 請輸入第 " << i << " 隻寵物資料 ---" << endl;
        cout << "名稱："; cin >> name;
        cout << "品種："; cin >> petCategory;
        cout << "生日 (年 月 日)："; cin >> by >> bm >> bd;
        cout << "領養日 (年 月 日)："; cin >> ay >> am >> ad;

        Date bDate(by, bm, bd);
        Date aDate(ay, am, ad);

        PET myPet(name, petCategory, bDate, aDate);
        myPet.print(); 
    }

    return 0; 
}
// end main
