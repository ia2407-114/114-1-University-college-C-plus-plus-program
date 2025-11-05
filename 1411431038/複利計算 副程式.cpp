#include <stdio.h>
#include <math.h>

int year(float principal, float rate, float hope, float money);

int main(void)
{
    float principal;
    float rate;
    float hope;
    float money;

    printf("請輸入本金：");
    scanf_s("%f", &principal);
    printf("請輸入年利率：");
    scanf_s("%f", &rate);
    printf("請輸入存款目標：");
    scanf_s("%f", &hope);
    printf("請輸入每年定期定額金額：");
    scanf_s("%f", &money);

    printf("\nYear     Amount on deposit\n");
    printf("需要 %d 年才能完成目標\n", year(principal, rate, hope, money));

    return 0;
}

int year(float principal, float rate, float hope, float money) {
    int y;
    for (y = 1; y <= 1000; ++y) {
        principal = principal * (1.0f + rate);
        if (y > 1) {
            principal = principal + money;
        }

        printf("%3d年%21.2f\n", y, principal);

        if (principal >= hope) {
            break;
        }
    }
    return y;
}