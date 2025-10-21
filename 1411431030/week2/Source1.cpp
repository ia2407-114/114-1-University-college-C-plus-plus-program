#include <stdio.h>

int main()
{
	int a;
	printf("請輸入成績\n");
	scanf_s("%d", &a);
	if (a >= 60)
		printf("恭喜通過");
	if (a < 60)
		printf("再加油");
	return 0;
}