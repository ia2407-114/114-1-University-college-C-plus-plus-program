#include <stdio.h>

int main(void)
{
	unsigned int i = 1, fact = 0;
	int result = 1;
	scanf_s("%d", &fact);
	if (fact<13)
	{
		for (i = 1;i <= fact;i++) {
			result *= i;
		}
	}
	
	printf_s("%d的階層結果為:%d", fact, result);
}