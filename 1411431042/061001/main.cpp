#include "Animal.h"

int main()
{
    ofstream writefile("animal.txt");

    if (!writefile)
    {
        cout << "animal.txt檔案無法開啟！" << endl;
        return 1;
    }

    Animal a[3];

    cout << "請輸入3筆動物資料\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\n第 " << i + 1 << " 種動物\n";
        a[i].input();
    }

    writefile << left
        << setw(15) << "動物"
        << setw(10) << "年齡"
        << setw(10) << "身高"
        << endl;

    writefile << setfill('-')
        << setw(35) << "-"
        << endl;

    writefile << setfill(' ');

    for (int i = 0; i < 3; i++)
    {
        a[i].output(writefile);
    }

    writefile.close();

    cout << "\n資料已寫入 animal.txt" << endl;

    return 0;
}