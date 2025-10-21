#include<stdio.h>


int main(void)
{
	int x;

	printf("請輸入你的成績:\n");
	scanf_s("%d", &x);

	if (x >= 60) {
		printf("恭喜通過!");
	}
	if (x < 60) {
		printf("再加油!");
	}
	return 0;
}

