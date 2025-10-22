#include <stdio.h>

// 計算階乘 (n!)
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 自己寫的整數次方函數
double power(double a, int b) {//a的b次方
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

    printf("請輸入要列出幾項：");
    scanf_s("%d", &terms);

    printf("請輸入 x 的值：");
    scanf_s("%lf", &x);

    double sum = 0.0;
    for (int n = 0; n < terms; ++n) {
        unsigned long long fact = factorial(n);
        double term = power(x, n) / fact;  // x乘項數再除數列
        sum += term;
        printf("第 %2d 項：x^%d / %2d! = %.6f\n", n + 1, n, n, term);
    }

    printf("\n x = %.2f 的近似值為：%.10f\n", x, sum);

    return 0;
}
