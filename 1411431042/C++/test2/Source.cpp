#include <stdio.h>
int main()
{
	unsigned int i = 1, fact = 0;//fact代表階乘結果
	int result = 1;//存結果
	scanf_s("%d", &fact);
	for (i = 1;i <= fact;i++)
		result *= i;
	printf("%d的階乘結果為:%d", fact, result);


	return 0;
}