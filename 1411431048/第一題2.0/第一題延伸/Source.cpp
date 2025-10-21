#include<stdio.h>
int main(void)
{
	int a, b, c,max,mix;
	printf("Enter three different integers:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %f\n", ((float)(a + b + c) / 3));
	printf("The Product is %d\n", a * b * c);
	max = a;
	if (b > max)
		max = b;
		if (c > max)
			max = c;
		else 
			printf("%d is the largest value!\n", max);
		
	mix = a;
	if (b < mix)
			max = b;
		if (c < mix)
			max = c;
		else
			printf("%d is the smallest value!", mix);

	


	return 0;
}