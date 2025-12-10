#include <stdio.h>

#define m 50   

double power(double x, int n) {
    if (n == 0)
        return 1.0;
    else
        return x * power(x, n - 1);
}


long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int terms[m]; 
    int n;
    double x;

    printf("請輸入 n (n < %d)：", m);
    scanf_s("%d", &n);

    if (n >= m) {
        printf("n 必須小於陣列大小 m=%d\n", m);
        return 0;
    }

    printf("請輸入 x：");
    scanf_s("%lf", &x);

    double e = 1.0;  
    terms[0] = 1;    

    for (int i = 1; i <= n; i++) {
        double term = power(x, i) / factorial(i); 
        e += term;
        terms[i] = (int)term;   
    }

   
    printf("\ne^x 的近似值 = %lf\n", e);

    printf("級數每項存於陣列 terms[] 中：\n");
    for (int i = 0; i <= n; i++) {
        printf("terms[%d] = %d\n", i, terms[i]);
    }

    return 0;
}
