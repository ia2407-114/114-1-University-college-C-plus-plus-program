#include <stdio.h>

int main(void)
{
    double principal;
    double rate;
    unsigned int year;
    double aims;
    double amount;

    printf("請輸入本金：");
    scanf_s("%lf", &principal);
    printf("請輸入年利率(例如0.05表示5%%)：");
    scanf_s("%lf", &rate);
    printf("請輸入目標金額：");
    scanf_s("%lf", &aims);

    amount = principal;

    for (year = 1; amount < aims; ++year) {
        amount = amount * (1 + rate);
    }

    printf("需要 %u 年才能達到目標金額\n", year - 1);

    return 0;
}
