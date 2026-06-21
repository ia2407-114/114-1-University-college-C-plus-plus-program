#pragma once

struct cinema
{
    char name[10];  // 電影名稱
    char date[9];   // 上映日期
    char place[7];  // 上映廳處 
    int price;      // 票價 
};

void writeFiveMovies();
void readAndDisplayMovies();