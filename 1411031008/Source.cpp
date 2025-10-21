//Fig .2.5:fig02_05.c
//Addition program.
#include <stdio.h>

//fuction main begins program execution
int main(void)
{
	int z, p, r, q, w, x, y;

	printf("Enter p\n");
	scanf_s("%d", &p);
	printf("Enter r\n");
	scanf_s("%d", &r);
	printf("Enter q\n");
	scanf_s("%d", &q);
	printf("Enter w\n");
	scanf_s("%d", &w);
	printf("Enter x\n");
	scanf_s("%d", &x);
	printf("Enter y\n");
	scanf_s("%d", &y);

	z = p * r % q + w / x - y;

	printf("%d * %d % %d + %d / %d - %d are the %d\n", p, r, q, w, x, y, z);
	return 1;
}
