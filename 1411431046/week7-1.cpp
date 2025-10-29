#include <stdio.h>
#include <math.h>   

// 階乘 
unsigned long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 次方
double pow(double a, int b) {
    double result = 1.0;
    for (int i = 0; i < b; ++i) {
        result *= a;
    }
    return result;
}

int main(void)
{
    int terms;
    double x;

    printf("Please enter how many items：");
    scanf_s("%d", &terms);  

    printf("entwr x value：");
    scanf_s("%lf", &x);

    double sum = 0.0;
    for (int n = 0; n < terms; ++n) {
        unsigned long fact = factorial(n);
        double term = pow(x, n) / fact;
        sum += term;
        printf("第 %2d 項：x^%d / %2d! = %.10f\n", n + 1, n, n, term);
    }

    //  exp(x)
    double a_exp = exp(x);
    double error = sum - a_exp;

    printf("\n使用無窮級數計算 e^%.4f = %.10f\n", x, sum);
    printf("使用庫存函數 exp(%.4f) = %.10f\n", x, a_exp);
    printf("誤差 (級數 - exp) = %.10e\n", error);

    return 0;
}