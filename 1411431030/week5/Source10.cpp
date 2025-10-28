#include<stdio.h>

int main(void) {
	int x = 0, y = 1, n = 1;
	long double e = 1;
	while (y != 12) {
		n *= (y + 1);
		e = e + long double(1) / n;
		y += 1;
	}
	e++;
	int i = 1;
	long double  a = e;
	printf("輸入次方\n");
	scanf_s("%d",&x);
	while (i != x) {
		e *= a;
		i++;
	}
	printf("e^x的近似值為%.16Lf", e);
}