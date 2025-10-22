#include <stdio.h>

int main(void)
{
    double principal;  //本金
    double rate;       //年利率
    double deposit;    //每年定期存入
    double aims;       //存款目標
    unsigned int year;

    printf("請輸入本金: ");
    scanf_s("%lf", &principal);
    printf("請輸入年利率(小數表示，例如5%%輸入0.05): ");
    scanf_s("%lf", &rate);
    printf("請輸入每年定期存入金額: ");
    scanf_s("%lf", &deposit);
    printf("請輸入存款目標: ");
    scanf_s("%lf", &aims);

    double amount = principal; //初始

    printf("\nYear     Amount on deposit\n");
    for (year = 1; amount <= aims; ++year) {//++year =每次回圈節次年份+1
        amount = amount * (1 + rate); 
        amount = amount + deposit;       
        printf("%4u%21.2f\n", year, amount);
    }

    printf("\n達成目標 %0.2f 需要 %u 年\n", aims, year - 1);

    return 0;
}
