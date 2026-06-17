#include <iostream>
#include <fstream>
#include "Cinema.h"

using namespace std;

void saveMovies(const char* filename, int count) {
    ofstream outFile(filename, ios::binary);
    cinema movie;
    for (int i = 0; i < count; ++i) {
        cout << "\n--- 輸入第 " << i + 1 << " 筆資料 ---" << endl;
        cout << "電影名稱: "; cin >> movie.name;
        cout << "上映日期: "; cin >> movie.date;
        cout << "上映廳處: "; cin >> movie.place;
        cout << "票價: "; cin >> movie.price;
        outFile.write((char*)&movie, sizeof(cinema));
    }
    outFile.close();
}

void displayAllMovies(const char* filename) {
    ifstream inFile(filename, ios::binary);
    cinema movie;
    int i = 1;
    cout << "\n--- 電影列表 ---" << endl;
    while (inFile.read((char*)&movie, sizeof(cinema))) {
        cout << i << ". 電影名稱: " << movie.name << endl;
        i++;
    }
    inFile.close();
}

void displaySpecificMovie(const char* filename, int no) {
    ifstream inFile(filename, ios::binary);
    cinema movie;
    inFile.seekg(sizeof(cinema) * (no - 1), ios::beg);
    if (inFile.read((char*)&movie, sizeof(cinema))) {
        cout << "\n[詳細內容]" << endl;
        cout << "電影名稱: " << movie.name << "\t上映日期: " << movie.date << endl;
        cout << "上映廳處: " << movie.place << "\t票價: " << movie.price << endl;
    }
    else {
        cout << "查無此筆資料!" << endl;
    }
    inFile.close();
}