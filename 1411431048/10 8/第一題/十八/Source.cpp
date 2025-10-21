#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("Enter three different integers:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %f\n", ((float)a + b + c) / 3);
	printf("The Product is %d\n", a * b * c);
	if (a > b && a > c) {
		printf("Largest is %d\n", a);
	}
	if (b > a && b > c) {
		printf("Largest is %d\n", b);
	}
	if (c > b && c > a) {
		printf("Largest is %d\n", c);
	}
	if (a < b && a < c) {
		printf("Smallest is %d\n", a);
	}
	if (b < a && b < c) {
		printf("Smallest is %d\n", b);
	}
	if (c < b && c < a) {
		printf("Smallest is %d\n", c);
	}




		return 0;
}