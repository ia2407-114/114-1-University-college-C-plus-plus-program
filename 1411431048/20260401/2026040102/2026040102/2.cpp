#include <iostream>
#include "pet.h"
using namespace std;


Dog::Dog(string n, int a) {
    if (n.length() > 2 && n.length() < 5) {
        name = n;
    }
    else {
        name = "未知";
        cout << "姓名長度錯誤！\n";
    }

    if (a <= 20) {
        age = a;
    }
    else {
        age = 0;
        cout << "年齡錯誤！\n";
    }
}


Dog::~Dog() {
    cout << name << "，再見了！" << endl;
}


void Dog::getInfo() {
    cout << "寵物姓名: " << name << endl;
    cout << "寵物年齡: " << age << endl;
}
