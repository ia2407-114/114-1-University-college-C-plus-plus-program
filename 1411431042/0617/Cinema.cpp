#include "Cinema.h"

void writeMovie()
{
    ofstream writeFile("movie.bin", ios::binary);

    if (writeFile.fail())
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

        cout << "播放地點：";
        cin >> movie.place;

        cout << "票價：";
        cin >> movie.price;

        writeFile.write((char*)&movie, sizeof(Cinema));
    }

    writeFile.close();
}

void readMovie()
{
    ifstream readFile("movie.bin", ios::binary);

    if (readFile.fail())
    {
        cout << "檔案開啟失敗！" << endl;
        return;
    }

    Cinema movie;

    cout << "\n=== 電影資料 ===" << endl;

    while (readFile.read((char*)&movie, sizeof(Cinema)))
    {
        cout << "電影名稱：" << movie.name << endl;
        cout << "上映日期：" << movie.date << endl;
        cout << "播放地點：" << movie.place << endl;
        cout << "票價：" << movie.price << endl;
        cout << "---------------------" << endl;
    }

    readFile.close();
}