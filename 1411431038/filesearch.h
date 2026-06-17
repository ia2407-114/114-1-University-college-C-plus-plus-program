#ifndef filesearch_H
#define filesearch_H

// 定義 cinema 結構資料型態
struct cinema
{
    char name[10];  // 電影名稱
    char date[9];   // 上映日期
    char place[7];  // 上映廳處 
    int price;      // 票價
    char food[3];   // 餐點
};

// 宣告三個最基本的功能函式
void writeMoviesToFile(const char* filename);
void showAllMovieNames(const char* filename);
void searchMovieByNo(const char* filename);

#endif
