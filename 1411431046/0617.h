#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <fstream>
using namespace std;

// 電影結構
struct cinema
{
    char name[10];   // 電影名稱
    char date[9];    // 上映日期
    char place[7];   // 上映廳處
    int price;       // 票價
};

// 函式宣告
void writeMovie();   // 寫入檔案
void readMovie();    // 讀取檔案

#endif