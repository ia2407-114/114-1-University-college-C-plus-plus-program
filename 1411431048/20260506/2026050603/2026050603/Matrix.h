#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    double** element; 

   
    Matrix(int m, int n);
   
    Matrix(char name, int m, int n);

    
    ~Matrix();
    void operator=(const Matrix& other);

    
    Matrix operator-(const Matrix& x);
};

