#include <stdio.h>

int main(void)
{
    int p, q, r, w, x, y, z;

    printf("enter p\n");
    scanf_s("%d", &p);

    printf("enter q\n");
    scanf_s("%d", &q);

    printf("enter r\n");
    scanf_s("%d", &r);

    printf("enter w\n");
    scanf_s("%d", &w);

    printf("enter x\n");
    scanf_s("%d", &x);

    printf("enter y\n");
    scanf_s("%d", &y);

    z = p * q % r + w / x - y;

    printf("%d * %d %% %d + %d / %d - %d = %d\n", p, q, r, w, x, y, z);

    return 0;
}
