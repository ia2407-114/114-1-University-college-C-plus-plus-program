#include <stdio.h>

int calc_years(double p, double r, double deposit, double aim);

int main() {
    double p, r, deposit, aim;

    printf("請輸入本金: ");
    scanf_s("%lf", &p);
    printf("請輸入年利率(例如0.05): ");
    scanf_s("%lf", &r);
    printf("請輸入每年定期存入金額: ");
    scanf_s("%lf", &deposit);
    printf("請輸入存款目標: ");
    scanf_s("%lf", &aim);

    int years = calc_years(p, r, deposit, aim);
    printf("達成目標共需 %d 年。\n", years);

    return 0;
}
