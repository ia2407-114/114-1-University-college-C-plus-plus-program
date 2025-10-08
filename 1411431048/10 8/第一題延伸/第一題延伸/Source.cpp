#include<stdio.h>
int main(void)
{
	int a, b, c,max=0;
	printf("Enter three different integers:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %f\n", ((float)a + b + c) / 3);
	printf("The Product is %d\n", a * b * c);
	if (a > b) {
		max = a;
		if (c > max)
			printf("%d is the largest value!", c);
		else
			printf("%d is the largest value!", b);

	}


	return 0;
}