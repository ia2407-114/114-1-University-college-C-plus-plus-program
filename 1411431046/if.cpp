#include <stdio.h>
int main(void)
{
	int score;

	printf("請輸入一個整數成績");
	scanf_s("%d", &score);
	if (score >= 60)
	{
		printf("恭喜通過!");
	}
	else
	{
		printf("再加油!");
	}
	return 0;
}