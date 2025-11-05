#include<stdio.h>

int year(double, double, double, double);

int main(void) {

	double principal;
	double rate;
	double deposit, aims;
	int years;
	

	printf("請輸入本金:");
	scanf_s("%lf", &principal);

	printf("請輸入年利率:");
	scanf_s("%lf", &rate);

	printf("請輸入每年底定期存入金額:");
	scanf_s("%lf", &deposit);

	printf("請輸入存款目標(amis):");
	scanf_s("%lf", &aims);


	years=year(principal,rate,deposit,aims);

	
	printf("共需 %d 年才能達成目標\n", years);

}

int year(double principal, double rate, double deposit, double aims) {
	int year = 0;


	while (principal < aims) {
		principal = principal * (1 + rate) + deposit;
		year++;
	}
	return year;
}