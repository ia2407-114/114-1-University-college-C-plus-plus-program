#include <stdio.h>


int main()
{
	int a, b, c,max=0;
	printf("Enter three different integers:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %f\n", ((float)a + b + c) / 3);
	printf("Product is %d\n", a * b * c);
	max = a;     
	if (b > max) max = b;
	if (c > max)max = c;
		printf("%d is Largest\n", max);
		//µð

	

	return 0;
}
/*
if ((a > b) && (a>c)) {
printf("Largest is %d\n", a);
}
if ((c > a) && (c > b)) {
	printf("Largest is %d\n", c);
}
if ((b > a) && (b > c)) {
	printf("Largest is %d\n", b);
}
if ((a < b) && (a < c)) {
	printf("Smallest is %d\n", a);
}
if ((c < a) && (c < b)) {
	printf("Smallest is %d\n", c);
}
if ((b < a) && (b < c)) {
	printf("Smallest is %d\n", b);
}
*/
