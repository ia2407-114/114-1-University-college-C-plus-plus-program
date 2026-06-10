#include "Header.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

void AnimalManager::inputAndSave(const string& filename) {
    ofstream file(filename, ios::out);
    file << left << setw(10) << "動物" << setw(10) << "年齡" << setw(10) << "身高" << endl;

    string name;
    int age, height;
    for (int i = 1; i <= 3; ++i) {
        cout << "輸入第" << i << "種動物名稱，年齡及身高: ";
        cin >> name >> age >> height;
        file << left << setw(10) << name << setw(10) << age << setw(10) << height << endl;
    }
    file.close();
}

void AnimalManager::processAndAppend(const string& filename) {
    ifstream inFile(filename);
    string header1, header2, header3;
    inFile >> header1 >> header2 >> header3; 

    vector<Animal> animals;
    int totalAge = 0, totalHeight = 0;
    string n; int a, h;

    while (inFile >> n >> a >> h) {
        animals.push_back({ n, a, h });
        totalAge += a;
        totalHeight += h;
    }
    inFile.close();

    ofstream outFile(filename, ios::app); 
    outFile << "平均年齡: " << (double)totalAge / animals.size() << endl;
    outFile << "平均身高: " << (double)totalHeight / animals.size() << endl;
    outFile.close();
}

void AnimalManager::displayFile(const string& filename) {
    ifstream file(filename);
    string line;
    cout << "\n--- 檔案內容 ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}