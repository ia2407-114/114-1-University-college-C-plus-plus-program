#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int i, j, row, column;
    cout << "重新定義「-」(減號)運算子多載，使其能應用在矩陣減法上\n";
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;
    Matrix a('A', row, column);
    Matrix b('B', row, column);
    Matrix c(row, column);

    c = a - b;  // 矩陣A - 矩陣B

    cout << "矩陣A - 矩陣B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
//題目3.利用範例3.cpp的類別中，建立一個二元運算子多載，
//a - b可以將矩陣a的元素減去矩陣b的內容之後印出，
//矩陣元素的形態要使用float或double。請分成以介面檔與實作檔的方式撰寫