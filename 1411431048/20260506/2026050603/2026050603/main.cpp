#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    int row, column;
    cout << "二元運算子多載：執行矩陣 A - B\n";
    cout << "輸入矩陣列數(row): "; cin >> row;
    cout << "輸入矩陣行數(column): "; cin >> column;

    Matrix a('A', row, column); 
    Matrix b('B', row, column); 
    Matrix c(row, column);     

    c = a - b; 

    cout << "\n矩陣 A - B 的結果為：\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
