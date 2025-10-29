#include <stdio.h>
int main(void)
{
	int year = 0;
	double principal = 0;
	double rate = .05;
	double aims = 50000, A = 0;
	printf("輸入本金");
	scanf_s("%lf", &principal);
	printf("輸入年底存入金額");
	scanf_s("%lf", &A);
	for (; principal <= aims;) {
		principal = principal + (principal * rate) + A;
		year++;
		printf("%d    %lf\n", year, principal);
	}
	printf("存到五萬要%d年\n", year);
}
