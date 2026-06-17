#include <iostream>
#include <fstream>
#include "0617-Cinema2.h"

using namespace std;


void WriteMovieData(const char* filename)
{
    ofstream writeFile(filename, ios::out | ios::binary);

    if (!writeFile)
    {
        cout << "movie.bin檔案無法開啟!" << endl;
        return;
    }

    Cinema movie;

    cout << "請輸入5筆電影資料\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\n第 " << i + 1 << " 筆資料\n";

        cout << "電影名稱:";
        cin >> movie.name;

        cout << "上映日期:";
        cin >> movie.date;

        cout << "上映廳處:";
        cin >> movie.place;

        cout << "票價:";
        cin >> movie.price;

        writeFile.write(
            reinterpret_cast<char*>(&movie),
            sizeof(Cinema));
    }

    writeFile.close();
}


void ShowMovieList(const char* filename)
{
    ifstream readFile(filename, ios::in | ios::binary);

    if (!readFile)
    {
        cout << "movie.bin檔案無法開啟!" << endl;
        return;
    }

    Cinema movie;
    int i = 1;

    cout << "\n電影資訊:\n";

    while (readFile.read(
        reinterpret_cast<char*>(&movie),
        sizeof(Cinema)))
    {
        cout << i << ".電影名稱:"
            << movie.name << endl;

        i++;
    }

    readFile.close();
}


void ShowMovieDetail(const char* filename, int no)
{
    ifstream readFile(filename, ios::in | ios::binary);

    if (!readFile)
    {
        cout << "movie.bin檔案無法開啟!" << endl;
        return;
    }

    Cinema movie;

    readFile.seekg(
        sizeof(Cinema) * (no - 1),
        ios::beg);

    readFile.read(
        reinterpret_cast<char*>(&movie),
        sizeof(Cinema));

    if (readFile)
    {
        cout << "\n電影詳細資料\n";
        cout << "電影名稱:" << movie.name << endl;
        cout << "上映日期:" << movie.date << endl;
        cout << "上映廳處:" << movie.place << endl;
        cout << "票價:" << movie.price << endl;
    }
    else
    {
        cout << "查無電影資料!" << endl;
    }

    readFile.close();
}