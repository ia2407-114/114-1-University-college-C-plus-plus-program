#include<stdio.h>

int main(void) {
	int x = 0, y = 1, n = 1;
	long double e = 1;
	printf("輸入階乘且 n < 13\n");
	scanf_s("%d", &x);
	int i = x;
	if (x < 13)
		while (y != x) {
			n *= (y + 1);
			e = e + long double(1) / n;
			y += 1;
		}
	else
		printf("請輸入小於13的階乘\n");
	printf("e的近似值為%.16Lf", e);
}