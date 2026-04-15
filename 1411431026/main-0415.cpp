#include <iostream>
#include "pet-0415.h" // Employee class definition
using namespace std;

int main() {
    string name, type;
    int y, m, d;

    PET* pets[3];

    for (int i = 0; i < 3; i++) {
        cout << "\n第 " << i + 1 << " 隻寵物\n";

        cout << "名字: ";
        cin >> name;

        cout << "品種: ";
        cin >> type;

        cout << "生日(年 月 日): ";
        cin >> y >> m >> d;
        Date birth(y, m, d);

        cout << "領養日(年 月 日): ";
        cin >> y >> m >> d;
        Date adopt(y, m, d);

        pets[i] = new PET(name, type, birth, adopt);
    }
        cout << "\n=== 所有資料 ===\n";

        for (int i = 0; i < 3; i++) {
            pets[i]->check_birth();
            pets[i]->check_adopt();
            pets[i]->print_all_data();
        }

        for (int i = 0; i < 3; i++) {
            delete pets[i];
        }
        return 0;
    }
