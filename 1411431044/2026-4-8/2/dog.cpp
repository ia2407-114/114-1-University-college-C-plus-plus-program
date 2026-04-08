#include <iostream>
#include "Dog.h"
using namespace std;

Dog::Dog(string n, int by, int bm, int bd, int ay, int am, int ad)
    : name(n), birthDate(by, bm, bd), adoptionDate(ay, am, ad) {}

void Dog::setName(string n) { name = n; }

void Dog::setBirthDate(int y, int m, int d) { birthDate.setDate(y, m, d); }

void Dog::setAdoptionDate(int y, int m, int d) { adoptionDate.setDate(y, m, d); }

void Dog::printInfo() const {
    cout << "\n--- 寵物資料 ---" << endl;
    cout << "姓名: " << name << endl;
    cout << "生日: "; birthDate.print();
    cout << "\n領養日: "; adoptionDate.print();
    cout << endl;
}