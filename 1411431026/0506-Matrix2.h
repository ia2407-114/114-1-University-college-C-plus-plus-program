#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    double** element;

    Matrix(int m, int n);
    Matrix(char name, int m, int n);

    Matrix(const Matrix& other);

    ~Matrix();


    Matrix operator-(const Matrix& x);
};

#endif