#include "filesearch.h"
#include <iostream>
#include <fstream>
#include <cctype>
#include <conio.h>

using namespace std;

// 1. 建立並寫入電影資訊
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
        cout << "餐點:";
        cin >> movie.food;

        writebinaryfile.write((char*)&movie, sizeof(struct cinema));

        cout << "是否繼續輸入? (y/n):";
    } while (toupper(_getche()) == 'Y');

    cout << '\n';
    writebinaryfile.close();
}

// 2. 顯示所有電影的名稱與序號
void showAllMovieNames(const char* filename)
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
    int i = 1;
    while (1)
    {
        readbinaryfile.read((char*)&movie, sizeof(struct cinema));

        if (!readbinaryfile.eof())
            cout << i << ".電影名稱:" << movie.name << '\n';
        else
            break;
        i++;
    }

    readbinaryfile.clear();
    readbinaryfile.close();
}

// 3. 輸入序號，查詢並顯示該電影的詳細資料
void searchMovieByNo(const char* filename)
{
    struct cinema movie;
    ifstream readbinaryfile;

    readbinaryfile.open(filename, ios_base::in | ios_base::binary);
    if (readbinaryfile.fail())
    {
        cout << filename << "檔案無法開啟!\n";
        exit(1);
    }

    cout << "輸入要看的電影名稱之序號:";
    int no;
    cin >> no;

    // 移動檔案指標到指定位置
    readbinaryfile.seekg(sizeof(struct cinema) * (no - 1), ios::beg);
    readbinaryfile.read((char*)&movie, sizeof(struct cinema));

    if (!readbinaryfile.eof())
    {
        cout << "電影名稱:" << movie.name << '\t'
            << "上映日期:" << movie.date << '\n'
            << "上映廳處:" << movie.place << '\t'
            << "票價:" << movie.price << '\n'
            << "餐點:" << movie.food << '\n';
    }
    else
    {
        cout << "查無電影資料:\n";
    }

    readbinaryfile.clear();
    readbinaryfile.close();
}