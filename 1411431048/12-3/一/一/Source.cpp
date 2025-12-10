#include <stdio.h>


long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


double compute_e(int n) {
    double e = 1.0;  
    for (int i = 1; i <= n; i++) {
        e += 1.0 / factorial(i);
    }
    return e;
}

int main() {
    int n;
    printf("請輸入 n：");
    scanf_s("%d", &n);   

    double e = compute_e(n);   

    printf("e 的近似值（取到 %d!）為：%lf\n", n, e);

    return 0;
}

