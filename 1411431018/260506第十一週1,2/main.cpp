#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int i, j, row, column;
    cout << "輸入矩陣A的列數(row):";
    cin >> row;
    cout << "輸入矩陣A的行數(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "輸入---" << row << 'x' << column << "矩陣A" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }

    cout << "矩陣A的原本內容:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    b = !a;
    cout << "矩陣A的開根號矩陣(!A):\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }
   
    b = a++;
    cout << "矩陣A的平方矩陣(A++):\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
/*題目1.利用範例1.cpp的類別中，建立一個前序一元運算子多載，
!a可以將矩陣a的元素開平方根之後印出，矩陣元素的形態要使用float或double。
請分成以介面檔與實作檔的方式撰寫*/
/*題目2.呈上題，類別中，建立在Matrix中再加入一個後序一元運算子多載，
a++可以計算出矩陣a的每個元素的2次方之後印出，矩陣元素的形態要使用float或double。
請分成以介面檔與實作檔的方式撰寫*/