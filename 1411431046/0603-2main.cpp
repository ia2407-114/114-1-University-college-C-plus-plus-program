#include <iostream>
#include <fstream>
#include "0603-2.h"
using namespace std;

int main()
{
    bombplane bomb1;

    bomb1.create_flight_object("轟炸機");
    bomb1.create_bombplane();

    ofstream fout("bomb.txt");

    if (!fout)
    {
        cout << "檔案開啟失敗！" << endl;
        return 1;
    }

    streambuf* old = cout.rdbuf(fout.rdbuf());

    bomb1.display();

    cout.rdbuf(old);

    fout.close();

    cout << "資料已成功存入 bomb.txt" << endl;

    return 0;
}