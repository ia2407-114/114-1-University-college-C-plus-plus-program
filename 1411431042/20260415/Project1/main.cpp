#include <iostream>
#include "PET.h"
using namespace std;

int main()
{
    int y, m, d;
    string name, type;

    // ===== Pet1 =====
    cout << "輸入 Pet1 名字 和 品種: ";
    cin >> name >> type;

    cout << "輸入生日 (年 月 日): ";
    cin >> y >> m >> d;
    Date birth1(y, m, d);

    cout << "輸入領養日 (年 月 日): ";
    cin >> y >> m >> d;
    Date adopt1(y, m, d);

    PET pet1(name, type, birth1, adopt1);

    // ===== Pet2 =====
    cout << "\n輸入 Pet2 名字 和 品種: ";
    cin >> name >> type;

    cout << "輸入生日 (年 月 日): ";
    cin >> y >> m >> d;
    Date birth2(y, m, d);

    cout << "輸入領養日 (年 月 日): ";
    cin >> y >> m >> d;
    Date adopt2(y, m, d);

    PET pet2(name, type, birth2, adopt2);

    // ===== Pet3 =====
    cout << "\n輸入 Pet3 名字 和 品種: ";
    cin >> name >> type;

    cout << "輸入生日 (年 月 日): ";
    cin >> y >> m >> d;
    Date birth3(y, m, d);

    cout << "輸入領養日 (年 月 日): ";
    cin >> y >> m >> d;
    Date adopt3(y, m, d);

    PET pet3(name, type, birth3, adopt3);

    // ===== 輸出 =====
    cout << "\n=== 所有寵物資料 ===\n";
    pet1.print();
    pet2.print();
    pet3.print();

    return 0;
}