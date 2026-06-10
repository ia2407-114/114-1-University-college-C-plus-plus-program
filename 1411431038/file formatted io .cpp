#include "file formatted io.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 1. 寫入檔案的實作
void writeAnimalData() {
    ofstream writefile;
    writefile.open("animal.txt", ios_base::out | ios_base::app);
    if (writefile.fail()) {
        cout << "animal.txt檔案無法開啟!\n";
        exit(1);
    }

    writefile << "動物\t年齡\t身高\n";
    string name;
    int age, height;

    for (int i = 1; i <= 3; i++) {
        cout << "輸入第" << i << "種動物名稱，年齡及身高(以空白鍵作區隔):\n";
        cin >> name >> age >> height;
        writefile << name << '\t' << age << '\t' << height << '\n';
        if (writefile.fail()) {
            cout << "寫入失敗\n";
            break;
        }
    }

    writefile.close();
}

// 2. 讀取檔案的實作
void readAnimalData() {
    ifstream readfile;
    readfile.open("animal.txt", ios_base::in);
    if (readfile.fail()) {
        cout << "animal.txt檔案無法開啟!\n";
        exit(1);
    }

    string header_name, header_age, header_height;
    cout << "animal.txt文字檔內容為:\n";

    if (readfile >> header_name >> header_age >> header_height) {
        cout << header_name << "\t" << header_age << "\t" << header_height << "\n";
        cout << "------------------------\n";
    }

    string name;
    int age, height;
    while (readfile >> name >> age >> height) {
        cout << name << '\t' << age << '\t' << height << '\n';
    }

    readfile.clear();
    readfile.close();
}