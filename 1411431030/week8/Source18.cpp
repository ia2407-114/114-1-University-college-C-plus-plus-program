#include<stdio.h>

int factorial(int);
double powers(int, int);

int main(void) {
	int n = 0, x = 0, y = 0;
	long double e = 1;
	printf("輸入階乘\n");
	scanf_s("%d", &y);
	printf("輸入次方\n");
	scanf_s("%d", &x);
	if (n < 13)
		for (; y != n;) {
			++n;
			e += powers(n, x) / factorial(n);
		}
	else
		printf("請輸入小於13的階乘\n");
	printf("e的%d次方為%.16Lf", x, e);
}

double powers(int n, int x) {
	if (n != 0)
		return x * powers(n - 1, x);
	else
		return 1;
}

int factorial(int  n) {
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}