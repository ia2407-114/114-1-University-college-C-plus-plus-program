#include <stdio.h>
int calculateYears(double p, double r, double deposit, double aim);


int main(void) {
    double p, r, deposit, aim;

    printf("請輸入本金 (例如 10000): ");
    scanf_s("%lf", &p);

    printf("請輸入年利率 (例如 0.05): ");
    scanf_s("%lf", &r);

    printf("請輸入每年底定期存入金額: ");
    scanf_s("%lf", &deposit);

    printf("請輸入存款目標金額: ");
    scanf_s("%lf", &aim);

    int years = calculateYears(p, r, deposit, aim);

    printf("\n達成目標需要 %d 年。\n", years);

    return 0;
}
