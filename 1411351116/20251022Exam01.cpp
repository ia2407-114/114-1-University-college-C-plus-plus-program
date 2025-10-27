#include<stdio.h>
int main(void) {
    int p, aims, i;
    float r, amount;
    printf("輸入本金\n");
    scanf_s("%d", &p);
    printf("輸入年利率\n");
    scanf_s("%f", &r);
    printf("輸入存款目標\n");
    scanf_s("%d", &aims);
    amount = p;
    for (i = 1; amount <= aims; i++) {
        amount = amount * (1 + r);
        printf("第%d年本利和為%.2f\n", i, amount);
    }

    printf("第%d年達標\n", i - 1);

    return 0;
}