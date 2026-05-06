#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix
{
private:
    int row, column;

public:
    double** element;

    Matrix(int m, int n);
    Matrix(char name, int m, int n);

    // 複製建構子（避免記憶體錯誤）
    Matrix(const Matrix& x);

    ~Matrix();

    Matrix operator-(Matrix x);

    void display();
};

#endif