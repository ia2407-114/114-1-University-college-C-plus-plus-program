#include <iostream>
#include <iomanip> // 控制小數點輸出
#include "Matrix.h"
using namespace std;

// 實作建構子 1
Matrix::Matrix(int m, int n) {
    row = m; column = n;
    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];
}

// 實作建構子 2：包含手動輸入功能
Matrix::Matrix(char name, int m, int n) {
    row = m; column = n;
    element = new double* [row];
    for (int i = 0; i < row; i++)
        element[i] = new double[column];

    cout << "輸入一" << m << "x" << n << "矩陣" << name << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << name << "[" << i << "][" << j << "]=";
            cin >> element[i][j];
        }
    }
}

Matrix::~Matrix() {
    if (element != nullptr) {
        for (int i = 0; i < row; i++) {
            delete[] element[i]; 
        }
        delete[] element;       
        element = nullptr;
    }
}


void Matrix::operator-(Matrix x) {
    cout << "\n[執行矩陣減法] 矩陣A - 矩陣B = \n";
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->column; j++) {
         
            double result = this->element[i][j] - x.element[i][j];
            
            cout << fixed << setprecision(2) << result << "\t";
        }
        cout << endl;
    }
}