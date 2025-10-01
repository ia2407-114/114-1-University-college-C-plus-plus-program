#include<stdio.h>
int main(void) {
	int p, r, q, w, x, y, z;
	printf("enter first number p¡G");
	scanf_s("%d", &p);
	printf("enter second number r¡G");
	scanf_s("%d", &r);	
	printf("enter third number q¡G");
	scanf_s("%d", &q);	
	printf("enter fouth number w¡G");
	scanf_s("%d", &w);	
	printf("enter fifth number x¡G");
	scanf_s("%d", &x);
	printf("enter sixth number y¡G");
	scanf_s("%d", &y);
	z = p * r % q + w / x - y;
	printf("%d * %d %% %d + %d / %d -%d = %d", p, r, q, w, x, y, z);
	return 0;
}