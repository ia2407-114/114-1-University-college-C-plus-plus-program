#include <stdio.h>

int main(void)
{
    double principal;
    double rate;
    double aims;
    unsigned int year;

    printf("請輸入本金: ");
    scanf_s("%lf", &principal);
    printf("請輸入年利率(小數表示，例如5%%輸入0.05): ");
    scanf_s("%lf", &rate);
    printf("請輸入存款目標: ");
    scanf_s("%lf", &aims);

    double amount = principal; 

    printf("Year     Amount on deposit\n");
    for (year = 1; amount <= aims; ++year) {
        amount = amount * (1 + rate); 
        printf("%4u%21.2f\n", year, amount);
    }

    printf("\n達成目標 %0.2f 需要 %u 年\n", aims, year - 1);

    return 0;
}
