#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
public:
    int row, column;
    double** element;

    Matrix(int m, int n);
    ~Matrix();
    Matrix operator-();
    Matrix operator!();
};
#endif