#include <iostream>
#include "0506-3.h"
using namespace std;

int main()
{
    int row, column;

    cout << "矩陣減法運算子多載\n";

    cout << "輸入矩陣A及B的列數(row): ";
    cin >> row;

    cout << "輸入矩陣A及B的行數(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    Matrix c = a - b;

    cout << "\n矩陣A - 矩陣B = \n";
    c.display();

    return 0;
}