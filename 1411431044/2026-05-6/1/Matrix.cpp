#include <iostream>
#include <cmath>
#include <iomanip>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int m, int n) {
    row = m;
    column = n;
    element = new double* [row];
    for (int i = 0; i < row; i++) {
        element[i] = new double[column];
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < row; i++) {
        delete[] element[i];
    }
    delete[] element;
}

Matrix Matrix::operator-() {
    Matrix temp(row, column);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            temp.element[i][j] = -element[i][j];
        }
    }
    return temp;
}

void Matrix::operator!() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (element[i][j] >= 0) {
                cout << fixed << setprecision(2) << sqrt(element[i][j]) << "\t";
            }
            else {
                cout << "NaN\t";
            }
        }
        cout << endl;
    }
}   