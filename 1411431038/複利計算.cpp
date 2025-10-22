#include <stdio.h>
#include <math.h>  

int main(void)
{
    float principal ; 
    float rate;
    float hope;

    printf("請輸入本金");
    scanf_s("%f", &principal);
    printf("請輸入年利率");
    scanf_s("%f", &rate);
    printf("請輸入存款目標");
    scanf_s("%f", &hope);

    printf("Year     Amount on deposit\n");

    for (unsigned int year = 1; year <= 100; ++year) {
        principal = principal * (1 + rate);
        printf("%4u%21.2f\n", year, principal);
        if (principal >= hope) {
            printf("需要%d年才能完成目標", year);
            break;
        }
    }
    return 0;
}