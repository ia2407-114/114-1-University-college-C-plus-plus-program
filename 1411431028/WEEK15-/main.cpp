#include <iostream>   
#include <fstream>  
#include "flight.h" 
using namespace std;

int main()
{
    bombplane bomb1;
    bomb1.create_flight_object("轟炸機");
    bomb1.create_bombplane();

    
    bomb1.display();

    
    ofstream outFile;

   
    outFile.open("bomb.txt");

    
    if (outFile) {
        outFile << "顯示轟炸機的資料" << endl;
        outFile << "名稱:" << bomb1.name << endl;
        outFile << "編號:" << bomb1.id << endl;
        outFile << "駕駛員人數:" << bomb1.pilot << endl;
        outFile << "煤油量(公升):" << bomb1.kerosene << endl;

       
        outFile.close();
        cout << "\n【系統提示】已使用 open() 成功將資料存入 bomb.txt 檔案中！" << endl;
    }
    else {
        cout << "檔案開啟失敗！" << endl;
    }

    return 0;
}