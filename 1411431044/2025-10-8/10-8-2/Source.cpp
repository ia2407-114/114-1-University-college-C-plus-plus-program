#include<stdio.h>

int main(void)
{
	int a, b, c,max,min=0;
	max = 0;
	printf("please enter three different intergers:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %f\n", (float)(a + b + c) / 3);
	printf("Product is %d\n", a * b * c);
	if (a > b)
		max=a;
	else 
		max=b;
	   if (c > max)
		  max = c;
	printf("Largest is %d\n", max);
	if (a < b)
		min = a;
	else
		min = b;
	    if (c < min)
		   min = c;
	printf("Smallest is %d\n", min);




	return 0;
}
