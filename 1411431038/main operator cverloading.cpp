#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
#include "operatoroverloading.h"

int main()
{
    int i, j, row, column;
    cout << "重新定義「~」前置運算子的多載，求A矩陣的開更號矩陣(~A)：\n";
    cout << "輸入矩陣A的列數(row):";
    cin >> row;
    cout << "輸入矩陣A的行數(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "輸入一" << row << 'x' << column << "矩陣A" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    b = !a;

    cout << "矩陣A各個元素開根號後的結果 (~A):\n";

    cout << fixed << setprecision(2);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << b.element[i][j] << '\t';
        }
        cout << endl;
    }

    Matrix c = a++;
    cout << "\n矩陣A各個元素平方後的結果 (a++):\n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << c.element[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}
