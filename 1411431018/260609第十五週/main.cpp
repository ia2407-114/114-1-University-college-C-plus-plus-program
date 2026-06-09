#include <iostream>
#include <fstream>
#include <string>
#include "flight.h"
using namespace std;

int main()
{
    bombplane bomb1;
    bomb1.create_flight_object("轟炸機");
    bomb1.create_bombplane();
    bomb1.display();

  
    ofstream writefile;

    writefile.open("bomb.txt", ios_base::out);

    if (writefile.fail())
    {
        cout << "bomb.txt檔案無法開啟!\n";
        exit(1);
    }

    writefile << "=== 轟炸機輸出資料 ===" << endl;
    writefile << "飛行物名稱: 轟炸機" << endl;
    writefile << "名稱:" << bomb1.name << endl;
    writefile << "編號:" << bomb1.id << endl;
    writefile << "駕駛員人數:" << bomb1.pilot << endl;
    writefile << "煤油量(公升):" << bomb1.kerosene << endl;
    writefile << "乘客人數:" << bomb1.passenger << endl;
    writefile << "武器名稱:" << bomb1.weapon << endl;
    writefile << "製造者:" << bomb1.manufacturer << endl;


    writefile << "[備註] 轟炸機物件資料已成功由 display() 生成並同步存檔。" << endl;


    writefile.clear();
    writefile.close();

    if (writefile.fail())
    {
        cout << "bomb.txt檔案無法關閉!\n";
        exit(1);
    }

    cout << "\n[系統提示] 轟炸機的資料已成功寫入到專案資料夾底下的 bomb.txt 囉！\n";


    return 0;
}
//題目2: 修範例程式8的主程式，將轟炸機的輸出資料，存入bomb.txt檔案中