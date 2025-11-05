#include <stdio.h>

// 副程式：回傳需要幾年達成目標
int years_to_reach(double p, double r, double deposit, double aim) {
    int years = 0;
    double total = p;

    while (total < aim) {
        total = total * (1 + r) + deposit; // 每年底加上定期定額
        years++;
    }

    return years;
}

 {
    double p, r, deposit, aim;
    int years;

    printf("請輸入本金: ");
    scanf_s("%lf", &p);
    printf("請輸入年利率(例如0.05): ");
    scanf_s("%lf", &r);
    printf("請輸入每年定期定額存入金額: ");
    scanf_s("%lf", &deposit);
    printf("請輸入存款目標: ");
    scanf_s("%lf", &aim);

    years = years_to_reach(p, r, deposit, aim);

    printf("共需要 %d 年才能達成目標。\n", years);

    return 0;
}
