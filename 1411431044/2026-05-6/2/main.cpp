#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    int r, c;
    cout << "===== 程式開始執行 =====" << endl;
    cout << "請輸入列數(row): ";
    if (!(cin >> r)) return 0; // 防止非數字輸入導致當機
    cout << "請輸入行數(column): ";
    if (!(cin >> c)) return 0;

    Matrix a(r, c);

    cout << "\n--- 請輸入矩陣內容 ---" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "A[" << i << "][" << j << "]= ";
            cin >> a.element[i][j];
        }
    }

    cout << "\n[正在測試 !a]..." << endl;
    !a;

    cout << "\n[正在測試 a++]..." << endl;
    a++;

    cout << "\n===== 程式執行完畢 =====" << endl;


    system("pause");
    return 0;
}