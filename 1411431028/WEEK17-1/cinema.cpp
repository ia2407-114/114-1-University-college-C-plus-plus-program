#include <iostream>
#include <fstream>
#include <string>
#include "cinema.h"

using namespace std;

void writeMovies() {
    struct cinema movie;
    ofstream writebinaryfile("movie.bin", ios::out | ios::binary | ios::app);

    

    while (true) {
        cout << "\n電影名稱: ";
        cin.ignore(); 
        cin.getline(movie.name, 10);

        
        if (movie.name[0] == '\0') break;

        cout << "上映日期: "; cin >> movie.date;
        cout << "上映廳處: "; cin >> movie.place;
        cout << "票價: "; cin >> movie.price;

        writebinaryfile.write((char*)&movie, sizeof(struct cinema));
    }
    writebinaryfile.close();
}

void readMovies() {
    struct cinema movie;
    ifstream readbinaryfile("movie.bin", ios::in | ios::binary);

    if (!readbinaryfile) return;

    cout << "\n--- 目前所有電影資訊 ---" << endl;
    while (readbinaryfile.read((char*)&movie, sizeof(struct cinema))) {
        cout << "名稱:" << movie.name << "\t日期:" << movie.date
            << "\t廳:" << movie.place << "\t價格:" << movie.price << endl;
    }
    readbinaryfile.close();
}