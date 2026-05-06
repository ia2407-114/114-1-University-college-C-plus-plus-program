#include "0506-3.h"

// 空矩陣
Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];
}

// 輸入矩陣
Matrix::Matrix(char name, int m, int n)
{
    row = m;
    column = n;

    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];

    cout << "輸入矩陣 " << name << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << name << "[" << i << "][" << j << "]=";
            cin >> element[i][j];
        }
    }
}

// 複製建構子（重點）
Matrix::Matrix(const Matrix& x)
{
    row = x.row;
    column = x.column;

    element = new double* [row];
    for (int i = 0; i < row; i++)
    {
        element[i] = new double[column];
        for (int j = 0; j < column; j++)
        {
            element[i][j] = x.element[i][j];
        }
    }
}

// 解構子
Matrix::~Matrix()
{
    for (int i = 0; i < row; i++)
        delete[] element[i];

    delete[] element;
}

// 減法運算子
Matrix Matrix::operator-(Matrix x)
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            temp.element[i][j] = element[i][j] - x.element[i][j];
        }
    }

    return temp;
}

// 顯示
void Matrix::display()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << element[i][j] << "\t";
        }
        cout << endl;
    }
}