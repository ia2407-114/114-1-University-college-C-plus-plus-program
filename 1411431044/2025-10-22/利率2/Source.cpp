#include <stdio.h>

int main(void) {
    double principal;   
    double rate;       
    double money;       
    unsigned int year;  
    double aim;

    printf("請輸入本金：");
    scanf_s("%lf", &principal);

    printf("請輸入年利率：");
    scanf_s("%lf", &rate);

    printf("請輸入每年投入：");
    scanf_s("%lf", &money);

    printf("請輸入目標：");
    scanf_s("%lf", &aim); 
    double amount = principal;
    printf("\nYear     Amount on deposit\n");

    for (year = 1; amount < aim; ++year) {
        amount = amount * (1 + rate); 
        amount = amount + money;      
        printf("%4u%21.2f\n", year,amount);
    }

    printf("\n需要 %u 年才能達到或超過 50000 元。\n", year - 1);

    return 0;
}
