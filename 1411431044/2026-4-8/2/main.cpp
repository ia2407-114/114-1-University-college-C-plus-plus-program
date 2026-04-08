#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

int main() {
    string name;
    int by, bm, bd, ay, am, ad;

    try {
        cout << "請輸入寵物姓名: ";
        cin >> name;

        cout << "請輸入生日 (年 月 日): ";
        cin >> by >> bm >> bd;

        cout << "請輸入領養日 (年 月 日): ";
        cin >> ay >> am >> ad;

    
        Dog myDog;
        myDog.setName(name);
        myDog.setBirthDate(by, bm, bd);
        myDog.setAdoptionDate(ay, am, ad);

        myDog.printInfo();
    }
    catch (const invalid_argument& e) {
        cout << "\n設定失敗: " << e.what() << endl;
    }

    return 0;
}