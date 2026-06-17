#include <iostream>
#include <fstream>
#include "0617-Cinema.h"

using namespace std;


void WriteMovieData(const char* filename)
{
    ofstream writeFile(filename, ios::out | ios::binary);

    if (!writeFile)
    {
        cout << "檔案開啟失敗！" << endl;
        return;
    }

    Cinema movie;

    cout << "請輸入 5 筆電影資料：" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\n第 " << i + 1 << " 筆資料" << endl;

        cout << "電影名稱：";
        cin >> movie.name;

        cout << "上映日期：";
        cin >> movie.date;

        cout << "上映廳處：";
        cin >> movie.place;

        cout << "票價：";
        cin >> movie.price;

        writeFile.write(
            reinterpret_cast<char*>(&movie),
            sizeof(Cinema));
    }

    writeFile.close();
}


void ReadMovieData(const char* filename)
{
    ifstream readFile(filename, ios::in | ios::binary);

    if (!readFile)
    {
        cout << "檔案開啟失敗！" << endl;
        return;
    }

    Cinema movie;

    cout << "\n===== 電影資訊 =====\n";

    while (readFile.read(
        reinterpret_cast<char*>(&movie),
        sizeof(Cinema)))
    {
        cout << "電影名稱：" << movie.name << endl;
        cout << "上映日期：" << movie.date << endl;
        cout << "上映廳處：" << movie.place << endl;
        cout << "票價：" << movie.price << endl;
        cout << "---------------------" << endl;
    }

    readFile.close();
}