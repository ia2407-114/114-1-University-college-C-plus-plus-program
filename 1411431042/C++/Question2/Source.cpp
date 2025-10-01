#include<stdio.h>

int main()
{
	printf("Enter two integers,and i will tell you\n");
	printf("the relationships they satisfy:");

	int num1 = 60;
	scanf_s("%d", &num1);
	if (num1>=60) {
		printf("恭喜通過");
	}
	if (num1<60) {
		printf("再加油");
	}
}
