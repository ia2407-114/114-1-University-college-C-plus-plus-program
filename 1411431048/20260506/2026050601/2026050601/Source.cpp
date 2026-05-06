#include <iostream>
#include "介面.h"
using namespace std;

int main()
{
    int i, j, row, column;
    cout << "輸入矩陣A的列數(row):";
    cin >> row;
    cout << "輸入矩陣A的行數(column):";
    cin >> column;

    Matrix a(row, column);

    cout << "輸入一" << row << 'x' << column << "矩陣A" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }

    
    !a;

    return 0;
}
