#ifndef twobitsfileinout_H
#define twobitsfileinout_H

// 定義 cinema 結構型態
struct cinema
{
    char name[10];  // 電影名稱
    char date[9];   // 上映日期
    char place[7];  // 上映廳處 
    int price;      // 票價
    char food[3];   // 有無加購餐點
};

// 宣告功能函式原型
void writeMoviesToFile(const char* filename);
void readMoviesFromFile(const char* filename);

#endif
