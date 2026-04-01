#include <iostream>
#include "pet.h" 
using namespace std;

int main() {
    string name;
    int age;

    cout << "請輸入寵物姓名: ";
    cin >> name;
    cout << "請輸入寵物年齡: ";
    cin >> age;

    
    Dog d(name, age);
    d.getInfo();

    return 0;
}
