// Fig. 5.3: Approximation of π using a series
// Creating and using a programmer-defined function.

#include <stdio.h>

// 函式原型宣告
double approximatePi(int n);

int main(void)
{
    int n;
    double piApprox;

    printf("請輸入計算的項目總數 n: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("輸入錯誤！n 必須大於 0。\n");
    }
    else {
        // 呼叫副程式計算 π 的近似值
        piApprox = approximatePi(n);

        printf("\n使用 %d 項近似計算的 π 值為: %.10f\n", n, piApprox);
        printf("真實 π 值約為: 3.1415926536\n");
        printf("誤差 = %.10f\n", piApprox - 3.1415926536);
    }

    return 0;
}

// 副程式定義：利用級數公式近似 π
double approximatePi(int n)
{
    double sum = 0.0;
    int sign = 1; // 用來控制正負號 (+1, -1)

    for (int k = 0; k < n; ++k) {
        sum += sign * (1.0 / (2 * k + 1));
        sign = -sign; // 每一項交替變號
    }

    return 4.0 * sum; // Leibniz 公式乘以 4
}
