#include "Header.h" 
#include <iostream>
#include <string>
using namespace std;

Pet::Pet(string name, int age) {
    petName = name;
    petAge = age;
}

Pet::~Pet() {
    cout << "掰掰，" << petName << "！下次見！" << endl;
}

void Pet::displayPetInfo() const {
    cout << "寵物姓名: " << petName << endl;
    cout << "寵物年齡: " << petAge << endl;
}