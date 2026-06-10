#include <iostream>
#include <fstream>
#include <iomanip>
#include "0610-Animal.h"

using namespace std;

int main()
{
    ofstream writefile;

    writefile.open("animal.txt", ios::out);

    if (!writefile)
    {
        cout << "animal.txt檔案無法開啟!" << endl;
        return 1;
    }

    // 格式化輸出標題列
    writefile << left
        << setw(12) << "動物"
        << setw(8) << "年齡"
        << setw(8) << "身高"
        << endl;

    Animal animal[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "\n請輸入第 " << i + 1
            << " 種動物資料：" << endl;

        animal[i].input();
        animal[i].writeToFile(writefile);
    }

    writefile.close();

    cout << "\n資料已成功寫入 animal.txt" << endl;

    return 0;
}