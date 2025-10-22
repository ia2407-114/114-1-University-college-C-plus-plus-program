#include <stdio.h>
#include <math.h>  
float principal;
float rate;
float hope;
float amount;
int year;
float result = 1.0;
int main(void)
{
    printf("請輸入本金：");
    scanf_s("%f", &principal);
    printf("請輸入年利率：");
    scanf_s("%f", &rate);
    printf("請輸入存款目標");
    scanf_s("%f", &hope);
    printf("Year     Amount on deposit\n");

    for (unsigned int year = 1; year <= 100; ++year) {
        for (int i = 1;i <= year;i++) {
        result = result * (1.0 + rate);
        amount = principal * result;
        }
        printf("%4d%20.2f\n", year, amount);
        if (amount >= hope) {
            printf("達成目標要%d年", year);
            break;
        }
    }
    return 0;
}
