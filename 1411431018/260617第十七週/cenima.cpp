#include <iostream>
#include <fstream>
#include "cinema.h" 
using namespace std;

void writeFiveMovies()
{
    struct cinema movie;
    ofstream writebinaryfile;

    writebinaryfile.open("movie.bin", ios_base::out | ios_base::binary);
    if (writebinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟!\n";
        exit(1);
    }

    cout << "=== 建立 5 筆電影資訊 ===\n";
    for (int i = 1; i <= 5; i++)
    {
        cout << "\n第 " << i << " 筆電影：\n";
        cout << "電影名稱:";
        cin >> movie.name;
        cout << "上映日期:";
        cin >> movie.date;
        cout << "上映廳處:";
        cin >> movie.place;
        cout << "票價:";
        cin >> movie.price;

        writebinaryfile.write((char*)&movie, sizeof(struct cinema));
    }
    writebinaryfile.close();
}

void readAndDisplayMovies()
{
    struct cinema movie;
    ifstream readbinaryfile;

    readbinaryfile.open("movie.bin", ios_base::in | ios_base::binary);
    if (readbinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟!\n";
        exit(1);
    }

    cout << "\n=== 從檔案讀取的電影資訊結果 ===\n";
    while (1)
    {
        readbinaryfile.read((char*)&movie, sizeof(struct cinema));

        if (!readbinaryfile.eof())
        {
            cout << "電影名稱:" << movie.name << '\t'
                << "上映日期:" << movie.date << '\n'
                << "上映廳處:" << movie.place << '\t'
                << "票價:" << movie.price << "\n\n";
        }
        else
        {
            break;
        }
    }
    readbinaryfile.clear();
    readbinaryfile.close();
}