#include <stdio.h>

int calc_years(double p, double r, double deposit, double aim);

int main(void)
{
    double p, r, aim, deposit;
    int years;

    printf("請輸入本金: ");
    scanf_s("%lf", &p);

    printf("請輸入年利率(%%): ");
    scanf_s("%lf", &r);

    printf("請輸入每年定期存入金額: ");
    scanf_s("%lf", &deposit);

    printf("請輸入目標金額: ");
    scanf_s("%lf", &aim);

    r /= 100.0;

    years = calc_years(p, r, deposit, aim);

    printf("\n需要 %d 年才能達到存款目標 %.2f\n", years, aim);

    return 0;
}

