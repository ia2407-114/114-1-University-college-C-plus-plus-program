#include <iostream>
using namespace std;

class Matrix
{
public:
    int row, column;
    double** element; 

    Matrix(int m, int n);
    ~Matrix();
    void operator=(const Matrix& other);

    // 定義「-」前置運算子多載
    Matrix operator-();

    // 題目要求：定義「!」前置一元運算子多載，計算平方根並印出
    void operator!();
};

