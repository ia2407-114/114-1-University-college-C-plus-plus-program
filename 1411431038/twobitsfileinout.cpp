#include "twobitsfileinout.h"
#include <iostream>
#include <fstream>
#include <cctype>
#include <conio.h>

using namespace std;

// 寫入電影資料的實作
void writeMoviesToFile(const char* filename)
{
    struct cinema movie;
    ofstream writebinaryfile;

    writebinaryfile.open(filename, ios_base::out | ios_base::binary);
    if (writebinaryfile.fail())
    {
        cout << filename << "檔案無法開啟!\n";
        exit(1);
    }

    cout << "建立電影資訊:";
    do
    {
        cout << "\n電影名稱:";
        cin >> movie.name;
        cout << "上映日期:";
        cin >> movie.date;
        cout << "上映廳處:";
        cin >> movie.place;
        cout << "票價:";
        cin >> movie.price;
        cout << "有無加購餐點:";
        cin >> movie.food;

        // 寫入一筆資料
        writebinaryfile.write((char*)&movie, sizeof(struct cinema));

        cout << "是否繼續輸入? (y/n):";
    } while (toupper(_getche()) == 'Y');

    cout << '\n';
    writebinaryfile.close();
}

// 讀取並顯示電影資料的實作
void readMoviesFromFile(const char* filename)
{
    struct cinema movie;
    ifstream readbinaryfile;

    readbinaryfile.open(filename, ios_base::in | ios_base::binary);
    if (readbinaryfile.fail())
    {
        cout << filename << "檔案無法開啟!\n";
        exit(1);
    }

    cout << "電影資訊:\n";
    while (1)
    {
        readbinaryfile.read((char*)&movie, sizeof(struct cinema));

        if (!readbinaryfile.eof())
        {
            cout << "電影名稱:" << movie.name << '\t'
                << "上映日期:" << movie.date << '\n'
                << "上映廳處:" << movie.place << '\t'
                << "票價:" << movie.price << "\n"
                << "餐點:" << movie.food << "\n\n";
        }
        else
        {
            break;
        }
    }

    readbinaryfile.clear();
    readbinaryfile.close();
}