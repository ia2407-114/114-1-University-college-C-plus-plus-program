#include <iostream>
#include "0506-Matrix2.h"
using namespace std;

int main() {
    int row, column;

    cout << "¿é¤J row: ";
    cin >> row;

    cout << "¿é¤J column: ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    Matrix c = a - b;

    cout << "\nA - B = \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            cout << c.element[i][j] << "\t";
        cout << endl;
    }

    return 0;
}