#include <iostream>
#include <cmath>
#include <iomanip>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int m, int n) {
    row = m; column = n;
    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];
}

Matrix::~Matrix() {
    for (int i = 0; i < row; i++) delete[] element[i];
    delete[] element;
}

void Matrix::operator!() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (element[i][j] >= 0)
                cout << fixed << setprecision(2) << sqrt(element[i][j]) << "\t";
            else
                cout << "Error\t";
        }
        cout << endl;
    }
}

void Matrix::operator++(int dummy) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << fixed << setprecision(2) << pow(element[i][j], 2) << "\t";
        }
        cout << endl;
    }
}