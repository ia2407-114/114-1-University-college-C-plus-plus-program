#include<stdio.h>
int main(void) {
	int p, r, q, w, x, y, z;
	printf("enter one number ");
	scanf_s("%d", &p);
	printf("enter two number ");
	scanf_s("%d", &r);	
	printf("enter three number ");
	scanf_s("%d", &q);	
	printf("enter four number ");
	scanf_s("%d", &w);	
	printf("enter five number ");
	scanf_s("%d", &x);
	printf("enter six number ");
	scanf_s("%d", &y);
	z = p * r % q + w / x - y;
	printf("%d * %d %% %d + %d / %d -%d = %d\n", p, r, q, w, x, y, z);
	return 0;
}