#include "Matrix.h"
#include <iostream>
#include <iomanip>
using namespace std;


Matrix::Matrix(int m, int n) {
    row = m; column = n;
    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];
}


Matrix::Matrix(char name, int m, int n) {
    row = m; column = n;
    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];

    cout << "¿é¤J¤@" << m << 'x' << n << "¯x°}" << name << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << name << '[' << i << "][" << j << "]=";
            cin >> element[i][j];
        }
}


Matrix::~Matrix() {
    for (int i = 0; i < row; i++) delete[] element[i];
    delete[] element;
}


void Matrix::operator=(const Matrix& other) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            this->element[i][j] = other.element[i][j];
}


Matrix Matrix::operator-(const Matrix& x) {
    Matrix temp(row, column); 
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            
            temp.element[i][j] = this->element[i][j] - x.element[i][j];
    return temp;
}
