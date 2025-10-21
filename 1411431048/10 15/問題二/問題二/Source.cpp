#include <stdio.h>

int main(void) {
	unsigned int i = 1, fact = 0;
	int result = 1;
	scanf_s("%d", &fact);
	for (i = 1;i <= fact;i++)
		result *= i;
	printf("%d¶¥­¼¬°%d", fact, result);
}