#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "0610.h"

using namespace std;

int main()
{
    ofstream writefile;
    writefile.open("animal.txt", ios_base::out);

    if (writefile.fail())
    {
        cout << "animal.txt檔案無法開啟!\n";
        exit(1);
    }

    writefile << left
        << setw(15) << "動物"
        << setw(10) << "年齡"
        << setw(10) << "身高"
        << endl;

    int i;
    string name;
    int age, height;

    for (i = 1; i <= 3; i++)
    {
        cout << "輸入第" << i
            << "種動物名稱，年齡及身高(以空白鍵作區隔):\n";

        cin >> setw(15) >> name
            >> age
            >> height;

        writeAnimal(writefile, name, age, height);

        if (writefile.fail())
        {
            cout << "寫入失敗\n";
            break;
        }
    }

    writefile.close();

    if (writefile.fail())
    {
        cout << "animal.txt檔案無法關閉!\n";
        exit(1);
    }

    return 0;
}