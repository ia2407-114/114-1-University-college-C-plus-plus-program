#include "0603-Flight2.h"
#include <fstream>
#include <cstdlib>

int main()
{
    bombplane bomb1;

    // 建立轟炸機資料
    bomb1.create_flight_object("轟炸機");
    bomb1.create();

    // 顯示在螢幕
    bomb1.display();

    // 建立輸出串流物件
    ofstream writefile;

    // 開啟 bomb.txt
    writefile.open("bomb.txt", ios::out);

    if (writefile.fail())
    {
        cout << "bomb.txt檔案無法開啟!\n";
        exit(1);
    }

    // 寫入檔案
    bomb1.saveToFile(writefile);

    writefile.close();

    if (writefile.fail())
    {
        cout << "bomb.txt檔案無法關閉!\n";
        exit(1);
    }

    cout << "\n轟炸機資料已成功存入 bomb.txt\n";

    return 0;
}