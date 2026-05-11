#pragma once
class Matrix
{
public:
    double row, column;
    double** element;
    Matrix(double m, double n);
    Matrix(char name, double m, double n);
    Matrix operator-(Matrix x);
};
