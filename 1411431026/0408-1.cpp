#include <iostream>
#include <stdexcept>
#include "0408-Date.h" // include definition of class Date from Date.h
using namespace std;

int main()
{
    int y, m, d;

    cout << "請輸入西元 年 月 日 : ";
    cin >> y >> m >> d;

    try
    {
        Date t(y, m, d);

        cout << "\n西元日期: ";
        t.printUniversal();

        cout << "\n民國日期: ";
        t.printStandard();
        cout << endl;
    }
    catch (invalid_argument& e)
    {
        cout << "日期錯誤: " << e.what() << endl;
        cout << "使用預設日期 1990/1/1\n";

        Date t; // 預設
        cout << "西元日期: ";
        t.printUniversal();

        cout << "\n民國日期: ";
        t.printStandard();
    }

    return 0;
}