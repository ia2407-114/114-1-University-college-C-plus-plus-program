#include "介面.h"
#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;
    element = new double* [m];
    for (int i = 0; i < m; i++)
        element[i] = new double[n];
}

Matrix::~Matrix()
{
    for (int i = 0; i < row; i++)
        delete[] element[i];
    delete[] element;
}

void Matrix::operator=(const Matrix& other)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            this->element[i][j] = other.element[i][j];
}

Matrix Matrix::operator-()
{
    Matrix temp(row, column);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = -(this->element[i][j]);
    return temp;
}

// 實作 !a：計算平方根並直接印出
void Matrix::operator!()
{
    cout << "執行 !a (矩陣元素開平方根結果):" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            // 使用 sqrt() 計算平方根
            cout << sqrt(this->element[i][j]) << "\t";
        }
        cout << endl;
    }
}
