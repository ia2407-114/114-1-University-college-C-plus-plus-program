#include <iostream>
#include <string>
#include "her.h"
using namespace std;

int main()
{
    cube cube1;
    cube1.data_input();
    cube1.display();

    return 0;
}

/*題目1:（多層繼承）寫一程式，定義一shape類別，且其成員變數為name 與shape_area，及成員函式為area()，
分別表示圖形的名稱與圖形的面積，及顯示圖形的面積。接著定義shape類別的衍生類別rectangle，
且其成員變數為length與width，及成員函式為data_input()，分別表示長方形的長與寬，及輸入長方形的長與寬。
接著定義rectangle類別的衍生類別cube，且其成員變數為height及成員函式為data_input()，
分別表示長方體的高及輸入長方體的高並計算體積。
程式執行時，輸入長方體形的長、寬及高，輸出長方體的體積。*/