#include <iostream>
#include <fstream>
#include "cinema.h"
using namespace std;

void CinemaManager::saveData(const char* filename, int count) {
    ofstream outFile(filename, ios::binary);
    Cinema movie;
    for (int i = 0; i < count; i++) {
        cout << "\n第 " << i + 1 << " 筆資料:" << endl;
        cout << "電影名稱: "; cin >> movie.name;
        cout << "上映日期: "; cin >> movie.date;
        cout << "上映廳處: "; cin >> movie.place;
        cout << "票價: "; cin >> movie.price;
        outFile.write((char*)&movie, sizeof(Cinema));
    }
    outFile.close();
}

void CinemaManager::displayTitles(const char* filename) {
    ifstream inFile(filename, ios::binary);
    Cinema movie;
    int i = 1;
    cout << "\n--- 電影列表 ---" << endl;
    while (inFile.read((char*)&movie, sizeof(Cinema))) {
        cout << i++ << ". 電影名稱: " << movie.name << endl;
    }
    inFile.close();
}

void CinemaManager::displayFullData(const char* filename, int no) {
    ifstream inFile(filename, ios::binary);
    Cinema movie;
    // 移動指標至指定位置
    inFile.seekg(sizeof(Cinema) * (no - 1), ios::beg);
    if (inFile.read((char*)&movie, sizeof(Cinema))) {
        cout << "\n--- 詳細資訊 ---" << endl;
        cout << "電影名稱: " << movie.name << "\t上映日期: " << movie.date << endl;
        cout << "上映廳處: " << movie.place << "\t票價: " << movie.price << endl;
    }
    else {
        cout << "查無此筆資料。" << endl;
    }
    inFile.close();
}