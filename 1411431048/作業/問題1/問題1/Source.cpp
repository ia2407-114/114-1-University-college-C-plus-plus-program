#include <iostream>

int main(void)
{
    int p, r, q, w, x, y, z;
    printf("Enter p integer\n");
    scanf_s("%d", &p);
    printf("Enter r integer\n");
    scanf_s("%d", &r);
    printf("Enter q integer\n");
    scanf_s("%d", &q);
    printf("Enter w integer\n");
    scanf_s("%d", &w);
    printf("Enter x integer\n");
    scanf_s("%d", &x);
    printf("Enter y integer\n");
    scanf_s("%d", &y);
    z = p * r % q + w / x - y;
    printf("%d * %d %% %d + %d / %d - %d are the %d\n", p, r, q, w, x, y, z);
    return 1;
}