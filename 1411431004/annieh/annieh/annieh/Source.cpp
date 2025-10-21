// Fig. 2.5: fig02_05.c
 // Addition program.
#include <stdio.h>

// function main begins program execution 
int main(void)
{
	int integer1, integer2, sum;

	printf("Enter first integer\n"); // prompt
	scanf_s("%d", &integer1);
	printf("Enter second integer\n"); // prompt
	scanf_s("%d", &integer2);

	sum = integer1 + integer2; // assign total to sum

	printf("%d plus %d and the sum is %d\n", integer1, integer2, sum);
	return 1;
}