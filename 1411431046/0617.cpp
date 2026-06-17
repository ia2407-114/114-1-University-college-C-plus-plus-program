#include "0617.h"

void writeMovie()
{
    cinema movie;
    ofstream writebinaryfile("movie.bin",
        ios::out | ios::binary);

    if (writebinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟！" << endl;
        exit(1);
    }

    cout << "建立電影資訊：" << endl;

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

        writebinaryfile.write((char*)&movie,
            sizeof(cinema));
    }

    writebinaryfile.close();
}

void readMovie()
{
    cinema movie;
    ifstream readbinaryfile("movie.bin",
        ios::in | ios::binary);

    if (readbinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟！" << endl;
        exit(1);
    }
    cout << "\n電影資訊：" << endl;

    while (readbinaryfile.read((char*)&movie,
        sizeof(cinema)))
    {
        cout << "電影名稱：" << movie.name << endl;
        cout << "上映日期：" << movie.date << endl;
        cout << "上映廳處：" << movie.place << endl;
        cout << "票價：" << movie.price << endl;
        cout << endl;
    }
    readbinaryfile.close();
}