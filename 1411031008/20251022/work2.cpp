#include <stdio.h>
#include <math.h>

int main(void)
{
	double p, r, money ,aims;
	printf("請輸入本金:");
	scanf_s("%lf", &p);

	printf("請輸入年利率:");
	scanf_s("%lf", &r);

	printf("請輸入年底定期存入金額:");
	scanf_s("%lf", &money);

	printf("請輸入存款目標:");
	scanf_s("%lf", &aims);

	double amount = p;
	printf("Year Amount on deposit\n");

	for (unsigned int year = 1; ;++year)
	{
		amount = amount * (1 + r)+ money;
		printf("%d %.2f\n", year, amount);

		if (amount >= aims) {
			printf("達成目標需%d年\n", year);
			break;
		}
	}
	return  0;
}