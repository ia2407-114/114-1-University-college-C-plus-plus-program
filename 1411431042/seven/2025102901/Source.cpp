#include <stdio.h>
#include <math.h>

//函式原型宣告
int factorial(int n);

int main(void)
{
    int term;
    double x;
    double e_series = 1.0; 
    double power = 1.0;    

    printf("請輸入項目數量 term (<13): ");
    scanf_s("%d", &term);
    printf("請輸入 x 的值: ");
    scanf_s("%lf", &x);

    if (term <= 0 || term >= 13) {
       
    }
    else {
       
        for (int i = 1; i <= term; ++i) {
            power *= x; 
            e_series += power / factorial(i);
        }

        double e_builtin = exp(x);      //呼叫標準函式
        double error = e_series - e_builtin; //差值

        printf("\n=== 計算結果 ===\n");
        printf("無窮級數計算的 e^%.2f = %.10f\n", x, e_series);
        printf("庫存函數 exp(%.2f) = %.10f\n", x, e_builtin);
        printf("誤差 = %.10f\n", error);

        /*
        printf(" exp(%g)  = %.10f\n", x, exp(x));
        printf(" sqrt(%g) = %.10f\n", x, sqrt(x));
        printf(" ceil(exp(%g))  = %.10f\n", x, ceil(exp(x)));
        printf(" ceil(sqrt(%g)) = %.10f\n", x, ceil(sqrt(x)));*/
        
    }

    return 0;
}

// factorial 函式定義 (自訂函式)
int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}