#include<stdio.h>

int main(void)
{
	unsigned int i = 1, fact = 1;
	int result = 1;
	scanf_s("%d", &fact);
	for (i = 1;i <= fact;i++) {
		result *= i;

	}
	printf("%d的階乘結果為:%d\n", fact, result);

	return 0;

}