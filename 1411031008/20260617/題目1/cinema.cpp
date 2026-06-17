#include "cinema.h"


void writeMovie()
{
    cinema movie;

    ofstream writeFile("movie.bin",
        ios::out | ios::binary);

    if (!writeFile)
    {
        cout << "movie.bin檔案無法開啟！" << endl;
        return;
    }

    cout << "===== 輸入5筆電影資料 =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\n第" << i + 1 << "筆資料" << endl;

        cout << "電影名稱：";
        cin >> movie.name;

        cout << "上映日期：";
        cin >> movie.date;

        cout << "上映廳處：";
        cin >> movie.place;

        cout << "票價：";
        cin >> movie.price;

        writeFile.write((char*)&movie,
            sizeof(cinema));
    }

    writeFile.close();
}


void readMovie()
{
    cinema movie;

    ifstream readFile("movie.bin",
        ios::in | ios::binary);

    if (!readFile)
    {
        cout << "movie.bin檔案無法開啟！" << endl;
        return;
    }

    cout << "\n===== 電影資訊 =====" << endl;

    while (readFile.read((char*)&movie,
        sizeof(cinema)))
    {
        cout << "電影名稱：" << movie.name << '\t'
            << "上映日期：" << movie.date << endl;

        cout << "上映廳處：" << movie.place << '\t'
            << "票價：" << movie.price << endl;

        cout << "----------------------"
            << endl;
    }

    readFile.close();
}