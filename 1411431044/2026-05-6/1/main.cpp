#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    Matrix a(r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    }

    cout << "\nResult of !a (Square Root):\n";
    !a;

    return 0;
}