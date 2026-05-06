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

    
    void operator!();

    
    void operator++(int);
};
