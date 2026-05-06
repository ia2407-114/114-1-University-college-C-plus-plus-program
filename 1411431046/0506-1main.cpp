#include <iostream>
#include "0506-1matrix.h"
using namespace std;


int main()
{
    int row, column;
    cout << "輸入矩陣A的列數(row):";
    cin >> row;
    cout << "輸入矩陣A的行數(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "輸入矩陣A:\n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    try
    {
        b = !a;

        cout << "\n開平方後矩陣:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
                cout << b.element[i][j] << "\t";
            cout << endl;
        }
    }
    catch (const exception& e)
    {
        cout << "錯誤: " << e.what() << endl;
    }

    return 0;
}