#include "AnimalManager.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> // 加入這個以進行格式化 (setw)
using namespace std;

void AnimalManager::runAnimalInput() {
    ofstream writefile;
    writefile.open("animal.txt", ios_base::out);

    if (writefile.fail()) {
        cout << "animal.txt檔案無法開啟!\n";
        return; // 改用 return 代替 exit(1) 較安全
    }

    // 使用 setw 進行格式化，取代原本的 \t
    writefile << left << setw(10) << "動物"
        << setw(10) << "年齡"
        << setw(10) << "身高" << "\n";

    int i;
    string name;
    int age, height;
    for (i = 1; i <= 3; i++) {
        cout << "輸入第" << i << "種動物名稱，年齡及身高(以空白鍵作區隔):\n";
        cin >> name >> age >> height;

        // 同樣使用格式化寫入
        writefile << left << setw(10) << name
            << setw(10) << age
            << setw(10) << height << "\n";

        if (writefile.fail()) {
            cout << "寫入失敗\n";
            break;
        }
    }

    writefile.close();
}