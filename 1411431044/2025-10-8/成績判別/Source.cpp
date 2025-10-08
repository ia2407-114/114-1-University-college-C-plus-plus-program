#include<stdio.h>

int main (void)
{
	int a, b, c;
	printf("please enter three different intergers:\n");
		scanf_s("%d %d %d", &a, &b, &c);
		printf("Sum is %d\n",a + b + c);
		printf("Average is %f\n", (float)(a + b + c) / 3);
		printf("Product is %d\n", a * b * c);
		if (a > b) {
			if (a > c)
				printf("Largest is %d\n",a);
		}
		if (b > a) {
			if (b > c)
				printf("Largest is %d\n",b);
		}
		if (c > a) {
			if (c > b)
				printf("Largest is %d\n",c);
		}
		if (a < b) {
			if (a < c)
				printf("Smallest is %d\n",a);
		}
		if (b < a) {
			if (b < c)
				printf("Smallest is %d\n",b);
		}
		if (c < a) {
			if (c < b)
				printf("Smallest is %d\n",c);
		}
		return 0;
}
