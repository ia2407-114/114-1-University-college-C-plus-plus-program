#ifndef operatoroverloading_H
#define operatoroverloading_H
#include <iostream>


class Matrix
{
public:
    int row, column;
    double** element;
    Matrix(int m, int n);
    Matrix operator!();
    Matrix operator++(int);

};
#endif
