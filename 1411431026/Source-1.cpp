#include<stdio.h>

int main(void)
{
	int a, b, c;
	printf("Enter three diffrient integers:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %f\n", ((float)a + b + c) / 3);
	printf("Product is %d\n", a * b * c);
	if (a < b && a < c)
		printf("Smalledt is %d\n", a);
	else if (b < a && b < c)
		printf("Smalledt is %d\n", b);
	else
		printf("Smalledt is %d\n", c);

	if (a > b && a>c) 
			printf("Largest is %d\n", a);
	else if (b > a && b > c)
		printf("Largest is %d\n", b);
	else
		printf("Largest is %d\n", c);

	return 0;
}