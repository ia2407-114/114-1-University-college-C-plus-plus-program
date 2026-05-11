#include "Matrix.h"
#include <math.h>

Matrix::Matrix(double m, double n)
{
    row = m;
    column = n;

    // 配置mxn的二維陣列element之動態記憶體
    element = new double* [m];
    int i, j;
    for (i = 0; i < m; i++)
        element[i] = new double[n];
}

// 定義矩陣的「!」(開根號)前序運算子的多載
Matrix Matrix::operator!()
{
    Matrix temp(row, column);
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            temp.element[i][j] = sqrt(this->element[i][j]);
    return temp;
}
// 定義矩陣的「++」(平方)後序運算子的多載
Matrix Matrix::operator++(int)
{
    Matrix temp(row, column);
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            temp.element[i][j] = (this->element[i][j])*(this->element[i][j]);
    return temp;
}