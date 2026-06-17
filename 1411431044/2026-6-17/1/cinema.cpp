#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "cinema.h"
using namespace std;

void writeData() {
    struct cinema movies[100];
    int count = 0;
    char choice;
    
    cout << "建立電影資訊:" << endl;
    do {
        cout << "電影名稱: "; cin >> movies[count].name;
        cout << "上映日期: "; cin >> movies[count].date;
        cout << "上映廳處: "; cin >> movies[count].place;
        cout << "票價: "; cin >> movies[count].price;
        count++;
        cout << "是否繼續輸入? (y/n): ";
        cin >> choice;
    } while (toupper(choice) == 'Y' && count < 100);

    ofstream writebinaryfile("movie.bin", ios_base::out | ios_base::binary);
    for (int i = 0; i < count; i++) {
        writebinaryfile.write((char *)&movies[i], sizeof(struct cinema));
    }
    writebinaryfile.close();
}

void readData() {
    struct cinema movie;
    ifstream readbinaryfile("movie.bin", ios_base::in | ios_base::binary);
    
    cout << "\n" << left << setw(12) << "電影名稱" << setw(12) << "上映日期" 
         << setw(10) << "上映廳處" << "票價" << endl;
    cout << "------------------------------------------" << endl;
    while (readbinaryfile.read((char *)&movie, sizeof(struct cinema))) {
        cout << left << setw(12) << movie.name << setw(12) << movie.date 
             << setw(10) << movie.place << movie.price << endl;
    }
    readbinaryfile.clear();
    readbinaryfile.close();
}