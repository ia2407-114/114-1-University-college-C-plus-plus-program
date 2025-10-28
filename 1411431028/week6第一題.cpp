#include <stdio.h>
int main(void)
{
	int year = 0;
	double principal = 10000;
	double rate = .05;
	double aims = 50000;
	printf("year    amount\n");
	for (;principal <= aims;) {
		principal = principal * (rate + 1);
		year++;
		for (;;) {
			rate = rate *1.05;
			break;
		}
		printf("%d    %f\n", year, principal);
	}
	printf("存到五萬要%d年\n" ,year);
}