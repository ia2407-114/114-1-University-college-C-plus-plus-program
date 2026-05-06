#include "operatoroverloading.h"
#include <cmath>

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new double* [m];
    int i;
    for (i = 0; i < m; i++)
        element[i] = new double[n];
}

// 實作運算子多載
Matrix Matrix::operator!()
{
    Matrix temp(row, column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            temp.element[i][j] = sqrt(this->element[i][j]);
        }
    }
    return temp;
}

Matrix Matrix::operator++(int)
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            temp.element[i][j] = this->element[i][j];
            this->element[i][j] = pow(this->element[i][j], 2);
        }
    }
    return *this;
}