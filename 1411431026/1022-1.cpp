#include<stdio.h>


int main(void) {

	double principal;
	double rate;
	double deposit, aims;
	double amount;
	int year = 0;

	printf("請輸入本金:");
	scanf_s("%lf", &principal);

	printf("請輸入年利率:");
	scanf_s("%lf", &rate);

	printf("請輸入存款目標(amis):");
	scanf_s("%lf", &aims);

	printf("%4s%21s\n", "Year", "Amount on deposit");

	amount = principal;

	while (amount < aims) {
		year = year + 1;
		amount = amount * (1.0 + rate);

		printf("%4u%21.2f\n", year, amount);

	}
	printf("共需 %d 年才能達成目標\n", year);

}