#include "cinema.h"


void writeMovie()
{
    ofstream file("movie.bin", ios::binary);

    if (!file)
    {
        cout << "檔案開啟失敗！\n";
        return;
    }

    cinema movie;

    cout << "請輸入5筆電影資料\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\n第 " << i + 1 << " 筆資料\n";

        cout << "電影名稱：";
        cin >> movie.name;

        cout << "上映日期：";
        cin >> movie.date;

        cout << "上映廳處：";
        cin >> movie.place;

        cout << "票價：";
        cin >> movie.price;

        file.write((char*)&movie, sizeof(cinema));
    }

    file.close();
}


void showMovieList()
{
    ifstream file("movie.bin", ios::binary);

    if (!file)
    {
        cout << "檔案開啟失敗！\n";
        return;
    }

    cinema movie;
    int no = 1;

    cout << "\n電影清單\n";
    cout << "------------------\n";

    while (file.read((char*)&movie, sizeof(cinema)))
    {
        cout << no << ". "
            << movie.name << endl;
        no++;
    }

    file.close();
}


void showMovieDetail(int no)
{
    ifstream file("movie.bin", ios::binary);

    if (!file)
    {
        cout << "檔案開啟失敗！\n";
        return;
    }

    cinema movie;

    file.seekg(sizeof(cinema) * (no - 1), ios::beg);

    file.read((char*)&movie, sizeof(cinema));

    if (!file.eof())
    {
        cout << "\n電影詳細資料\n";
        cout << "------------------\n";
        cout << "電影名稱：" << movie.name << endl;
        cout << "上映日期：" << movie.date << endl;
        cout << "上映廳處：" << movie.place << endl;
        cout << "票價：" << movie.price << endl;
    }
    else
    {
        cout << "查無資料！\n";
    }

    file.close();
}