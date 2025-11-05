#include <stdio.h>
int calc_years(double p, double r, double deposit, double aim)
{
    int year = 0;
    double amount = p;

    printf("\nYear\tAmount\n");
    
    while (amount < aim) {
        year++;
        amount = amount * (1.0 + r) + deposit;
        printf("%4d\t%.2f\n", year, amount);
    }

    return year;  // 回傳所需年數
}