#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    int r, c;
    cout << "題目 3：二元運算子多載 (矩陣減法)\n";
    cout << "請輸入列數(row): ";
    cin >> r;
    cout << "請輸入行數(column): ";
    cin >> c;

 
    Matrix a('A', r, c);
    Matrix b('B', r, c);

 
    a - b;

    cout << "\n運算完成。" << endl;
    system("pause");
    return 0;
}