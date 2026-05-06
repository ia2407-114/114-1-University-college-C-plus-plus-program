#include <iostream>
#include <cmath>        // ⭐ sqrt
#include <stdexcept>    // ⭐ 例外
#include "0506-1matrix.h"

using namespace std;

// 建構子
Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];
}

// 解構子
Matrix::~Matrix()
{
    for (int i = 0; i < row; i++)
        delete[] element[i];
    delete[] element;
}

// 負矩陣
Matrix Matrix::operator-()
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = -element[i][j];

    return temp;
}

// ⭐ 開平方矩陣（用 sqrt）
Matrix Matrix::operator!()
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (element[i][j] < 0)
            {
                throw runtime_error(
                    "矩陣元素(" + to_string(i) + "," + to_string(j) + ")為負數"
                );
            }

            temp.element[i][j] = sqrt(element[i][j]);  // ⭐ 重點
        }
    }

    return temp;
}