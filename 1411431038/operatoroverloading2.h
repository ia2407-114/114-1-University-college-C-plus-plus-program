#ifndef operatoroverloading2_H
#define operatoroverloading2_H
#include <iostream>

class Matrix
{
public:
    int row, column;
    int** element;
    Matrix(int m, int n);
    Matrix(char name, int m, int n);
    Matrix operator-(Matrix x);

}; 
#endif
