#include <stdio.h>
#include <math.h>  

int main(void)
{
    float principal;
    float rate;
    float hope;
    float money;

    printf("請輸入本金");
    scanf_s("%f", &principal);
    printf("請輸入年利率");
    scanf_s("%f", &rate);
    printf("請輸入存款目標");
    scanf_s("%f", &hope);
    printf("請輸入定期定額金額");
    scanf_s("%f", &money);

    printf("Year     Amount on deposit\n");

    for (unsigned int year = 0; year <= 100; ++year) {
        principal =principal * (1 + rate);
        if (year > 1) {
            principal = principal + money;
        }
        printf("%4u%21.2f\n", year, principal);
        if (principal >= hope) {
            printf("需要%d年才能完成目標", year);
            break;
        }
    }
    return 0;
}