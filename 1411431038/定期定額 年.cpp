#include <stdio.h>
#include <math.h>  
float principal;
float rate;
float hope;
float amount;
int year;
float result = 1.0;
int money;
int main(void)
{
    printf("請輸入本金：");
    scanf_s("%f", &principal);

    printf("請輸入年利率：");
    scanf_s("%f", &rate);

    printf("請輸入存款目標");
    scanf_s("%f", &hope);

    printf("請輸入每年定期定額金額");
    scanf_s("%d", &money);

    printf("Year     Amount on deposit\n");

    for (unsigned int year = 1; year <= 100; ++year) {
         amount = amount * (1.0 + rate);
         amount = amount + money;
        printf("%4d%20.2f\n", year, amount);
        if (amount >= hope) {
            printf("達成目標要%d年", year);
            break;
        }
    }
    return 0;
}
