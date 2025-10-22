#include <stdio.h>

int main(void) {//主程式入口，C 程式執行會從這裡開始。
    int terms;
    double pi = 0.0;

    printf("請輸入要計算的項數：");
    scanf_s("%d", &terms);

    for (int i = 0; i < terms; ++i) {
        // 分母為奇數，從 1 開始，依序 1,3,5,7,...
        int a = 2 * i + 1;//計算分母,用 2*i + 1 表示第 i 項的分母

        // 交替正負號：偶數項正，奇數項負
        if (i % 2 == 0) {
            pi += 4.0 / a;
        }
        else {
            pi -= 4.0 / a;
        }
    }

    printf(" π 的近似值（%d 項）是：%.15f\n", terms, pi);

    return 0;
}
