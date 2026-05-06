#include "0506-Matrix.h"
#include <math.h>   
using namespace std;


Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];
}


Matrix Matrix::operator!()
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = sqrt(this->element[i][j]);

    return temp;
}

Matrix Matrix::operator++(int)
{
   
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = element[i][j];

 
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            element[i][j] = element[i][j] * element[i][j];

    return temp; 
}
