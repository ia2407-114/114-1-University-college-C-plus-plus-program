#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int term;
    double e = 1.0;

    printf("請輸入項目數量 (term < 13): ");
    scanf_s("%d", &term);

    if (term < 1 || term >= 13) {
        printf("輸入錯誤，請輸入 1 到 12 之間的整數。\n");
        return 1;
    }

    for (int i = 1; i < term; i++) {
        e += 1.0 / factorial(i); 
    }

    printf("以 %d 項近似計算 e 的值為：%.10f\n", term, e);

    return 0;
}

