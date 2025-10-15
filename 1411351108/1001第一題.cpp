#include<stdio.h>
int main(void) {
	int p, r, q, w, x, y, z;
	printf("Enter integer p\n");
	scanf_s("%d", &p);
	printf("Enter integer r\n");
	scanf_s("%d", &r);
	printf("Enter integer q\n");
	scanf_s("%d", &q);
	printf("Enter integer w\n");
	scanf_s("%d", &w);
	printf("Enter integer x\n");
	scanf_s("%d", &x);
	printf("Enter integer y\n");
	scanf_s("%d", &y);

	z = p * r % q + w / x - y;
	printf("%d * %d %% %d + %d / %d - %d and sum is %d\n", p, r, q, w, x, y, z);
	return 0;
}