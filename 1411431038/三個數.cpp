#include<stdio.h>
int main(void) {
	int a, b, c;
	printf("Enter three different integers: \n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("three integers sum is %d\n", a + b + c);
	printf("three interges averge is %f\n",((float) a+ b + c) / 3);
	printf("three integers product is %d\n", a * b * c);
	if(a>b)
		if(a>c)
			printf("the largest integer is %d\n", a);
		else
			printf("the largest integer is %d\n", c);
	else
		if(b>c)
			printf("the largest integer is %d\n", b);
		else
			printf("the largest integer is %d\n", c);

	if (a < b)
		if (a < c)
			printf("the smallest integer is %d\n", a);
		else
			printf("the smallest integer is %d\n", c);
	else
		if (b < c)
			printf("the largest integer is %d\n", b);
		else
			printf("the largest integer is %d\n", c);
	return 0;
}