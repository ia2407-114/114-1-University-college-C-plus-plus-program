#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
    int row, column;
    double** element; // ¨Ï¥Î double §ÎºA


    Matrix(int m, int n);

    Matrix(char name, int m, int n);


    ~Matrix();


    void operator-(Matrix x);
};

#endif