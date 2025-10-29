#include <stdio.h>

int main(void)
{
    double p, r, aims;
    int year = 0;
    double amount;

    printf("請輸入本金: ");
    scanf_s("%lf", &p);

    printf("請輸入年利率: ");
    scanf_s("%lf", &r);

  

    printf("請輸入目標金額: ");
    scanf_s("%lf", &aims);

    amount = p;

    printf("\nYear\tAmount\n");

    while (amount < aims) {
        year++;
        amount = amount * (1.0 + r) ; 
        printf("%4d\t%.2f\n", year, amount);
    }

    printf("\n需要 %d 年才能達到存款目標 %.2f\n", year, aims);

    return 0;
}