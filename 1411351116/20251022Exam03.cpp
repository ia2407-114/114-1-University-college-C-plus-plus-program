#include<stdio.h>
int main(void) {
    int n, x,i=1,o=1,a;
    float result=1;
    printf("¿é¤Jn¡Bx\n");
    scanf_s("%d %d", &n, &x);
    a = x;
    while (i <= n) {
        o *= i;

        result +=(float)a / o;
        a *= x;
        i++;
    }
    printf("%.2f", result);


    return 0;
}