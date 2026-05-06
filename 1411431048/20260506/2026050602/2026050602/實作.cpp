#include "介面.h"
#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

Matrix::Matrix(int m, int n)
{
    row = m; column = n;
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


void Matrix::operator!()
{
    cout << "\n執行 !a (開平方根結果):" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            cout << fixed << setprecision(2) << sqrt(element[i][j]) << "\t";
        cout << endl;
    }
}


void Matrix::operator++(int)
{
    cout << "\n執行 a++ (每個元素的2次方結果):" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            
            double result = element[i][j] * element[i][j];
            cout << fixed << setprecision(2) << result << "\t";
        }
        cout << endl;
    }
}
