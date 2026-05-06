#include "0506-Matrix2.h"

Matrix::Matrix(int m, int n) {
    row = m;
    column = n;

    element = new double* [m];
    for (int i = 0; i < m; i++)
        element[i] = new double[n];
}

Matrix::Matrix(char name, int m, int n) {
    row = m;
    column = n;

    element = new double* [m];
    for (int i = 0; i < m; i++)
        element[i] = new double[n];

    cout << "¿é¤J¤@ " << m << "x" << n << " ¯x°} " << name << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << name << "[" << i << "][" << j << "] = ";
            cin >> element[i][j];
        }
    }
}


Matrix::Matrix(const Matrix& other) {
    row = other.row;
    column = other.column;

    element = new double* [row];
    for (int i = 0; i < row; i++) {
        element[i] = new double[column];
        for (int j = 0; j < column; j++) {
            element[i][j] = other.element[i][j];
        }
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < row; i++)
        delete[] element[i];
    delete[] element;
}



Matrix Matrix::operator-(const Matrix& x) {
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = element[i][j] - x.element[i][j];

    return temp;
}