#include<stdio.h>

int main(void)
{
	unsigned int i = 1, fact = 1;
	int result = 1;
	float exp = 1;
	scanf_s("%d", &fact);
	for (i = 1;i <= fact;i++) {
		result *= i;
		exp = exp + 1 / result;

	}
	printf("%d的階乘結果為:%d\n", fact, result);
	printf("exp的近似值為:%2.f", exp);

	return 0;
