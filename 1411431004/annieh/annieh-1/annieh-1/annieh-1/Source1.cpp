// Fig. 2.5: fig02_05.c
 // Addition program.
#include <stdio.h>

// function main begins program execution 
int main(void)
{
	int p, r, q, w, x, y, z;

	printf("Enter first integer\n"); // prompt
	scanf_s("%d", &p);
	printf("Enter second integer\n"); // prompt
	scanf_s("%d", &r);
	printf("Enter first integer\n"); // prompt
	scanf_s("%d", &q);
	printf("Enter second integer\n"); // prompt
	scanf_s("%d", &w);
	printf("Enter first integer\n"); // prompt
	scanf_s("%d", &x);
	printf("Enter second integer\n"); // prompt
	scanf_s("%d", &y);

	z = p * r % q + w / x - y;

	printf("%d * %d \% %d+ %d/%d- %d are the  %d\n", p, r, q, w, x, y, z);
	return 1;
}


