#include <stdio.h>

double pi(int);
double ball(double, double);
double ball2(double, double);
double c(double, double, double);
double c2(double, double, double);

//double hight(int);

int main(void) {
	
	double r;
	int h, num;

	printf("請輸入項目數量:");
	scanf_s("%d", &num);

	printf("請輸入半徑:");
	scanf_s("%lf", &r);

	printf("請輸入圓柱體高:");
	scanf_s("%d", &h);

	printf("球體積的近似值為:%lf\n", ball(pi(num), r));
	printf("球面積的近似值為:%lf\n", ball2(pi(num), r));
	printf("圓柱體積的近似值為:%lf\n", c(pi(num), r,h));
	printf("圓柱體積的近似值為:%lf\n", c2(pi(num), r, h));
}

double pi(int n) {
	double pi = 0.0;
	double sign = 1.0;

	for (int k = 0;k < n;k++) {
		double d = 2.0 * k + 1.0;
		pi += sign * (4.0 / d);
		sign *= -1.0;
	}
	return pi;
}
double ball(double pi, double r) {
	return 4.0 / 3 * pi * r * r * r;
}
double ball2(double pi, double r) {
	return 4.0  * pi * r * r;
}
double c(double pi, double r, double h) {
	return pi * r * r * h;
}
double c2(double pi, double r, double h) {
	return 2*pi * r * r +2*pi*r*h;
}

