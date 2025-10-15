#include <iostream>
#include <stdio.h>

int main(void)
{
    int p, r, q, w, x, y, z;

    printf("enter p integer\n");
    scanf_s("%d", &p);
    printf("enter r integer\n");
    scanf_s("%d", &r);
    printf("enter q integer\n");
    scanf_s("%d", &q);
    printf("enter w integer\n");
    scanf_s("%d", &w);
    printf("enter x integer\n");
    scanf_s("%d", &x);
    printf("enter y integer\n");
    scanf_s("%d", &y);
    z = p * r % q + w / x - y;

    printf("%d * %d mod %d + %d / %d - %d are %d\n", p, r, q, w, x, y, z);
    return 0;
}

