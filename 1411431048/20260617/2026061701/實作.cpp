#include "c.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


void writeMovieData(const char* filename, int count)
{
    struct cinema movie;
    ofstream writebinaryfile;

    
    writebinaryfile.open(filename, ios_base::out | ios_base::binary);
    if (writebinaryfile.fail())
    {
        cout << filename << " 檔案無法開啟!\n";
        exit(1);
    }

    cout << "建立電影資訊 (共 " << count << " 筆):\n";
    for (int i = 0; i < count; i++)
    {
        cout << "\n第 " << (i + 1) << " 筆電影名稱: ";
        cin >> movie.name;
        cout << "上映日期: ";
        cin >> movie.date;
        cout << "上映廳處: ";
        cin >> movie.place;
        cout << "票價: ";
        cin >> movie.price;

        
        writebinaryfile.write((char*)&movie, sizeof(struct cinema));
    }

    writebinaryfile.close();
    if (writebinaryfile.fail())
    {
        cout << filename << " 檔案無法關閉!\n";
        exit(1);
    }
}


void readAndPrintMovieData(const char* filename)
{
    struct cinema movie;
    ifstream readbinaryfile;

    
    readbinaryfile.open(filename, ios_base::in | ios_base::binary);
    if (readbinaryfile.fail())
    {
        cout << filename << " 檔案無法開啟!\n";
        exit(1);
    }

    cout << "\n電影資訊:\n";
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
    if (readbinaryfile.fail())
    {
        cout << filename << " 檔案無法關閉!\n";
        exit(1);
    }
}
