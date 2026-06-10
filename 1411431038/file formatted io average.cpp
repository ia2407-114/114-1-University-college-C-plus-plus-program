#include "file formatted io average.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void writeAnimals() {
    ofstream writefile("animal1.txt");
    writefile << "動物\t年齡\t身高\n";

    string name;
    int age, height;
    for (int i = 1; i <= 3; i++) {
        cout << "輸入第" << i << "種動物名稱，年齡及身高(以空白鍵區隔):\n";
        cin >> name >> age >> height;
        writefile << name << '\t' << age << '\t' << height << '\n';
    }
    writefile.close();
}


void calculateAverage() {

    fstream writefile("animal1.txt", ios::in | ios::out | ios::app);

    string header, name;
    int age, height;
    float total_age = 0, total_height = 0;

    getline(writefile, header);

    for (int j = 1; j <= 3; j++) {
        writefile >> name >> age >> height;
        total_age += age;
        total_height += height;
    }

 
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << "\n平均年齡:" << total_age / 3 << "\t平均身高:" << total_height / 3 << '\n';


    writefile.seekg(0, ios::end);
    writefile << "平均年齡:" << total_age / 3 << "\t平均身高:" << total_height / 3 << '\n';

    writefile.close();
}


void printFileContent() {
    ifstream readfile("animal1.txt");
    string data;

    cout << "\nanimal1.txt 文字檔內容為:\n";
    cout << "---------------------------------\n";

    while (getline(readfile, data)) {
        cout << data << '\n';
    }

    readfile.close();
}