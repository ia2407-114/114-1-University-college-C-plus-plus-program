#include<stdio.h>

long double pi(int, long double, long double);
long double b(long double, long double);
long double b2(long double, long double);
long double c(long double, long double, long double);
long double c2(long double, long double, long double);

int main(void) {
	int n = 0;
	long double r = 0;
	long double h = 0;
	long double a = 0, y = 1;
	printf("輸入項數n\n");
	scanf_s("%d", &n);
	printf("輸入半徑r\n");
	scanf_s("%Lf", &r);
	printf("輸入高h\n");
	scanf_s("%Lf", &h);
	printf("pi的近似值為%.7Lf\n", pi(n, a, y));
	printf("球體積近似值為 %.7Lf\n", b(pi(n, a, y), r));
	printf("球面積近似值為 %.7Lf\n", b2(pi(n, a, y), r));
	printf("圓柱體積近似值為 %.7Lf\n", c(pi(n, a, y), r,h));
	printf("圓柱面積近似值為 %.7Lf\n", c2(pi(n, a, y), r,h));

}

long double pi(int n, long double pi, long double y) {
	for (int i = 0; i != n; i++) {
		pi += 4 / y;
		y += 2;
		pi -= 4 / y;
		y += 2;
	}
	return pi;
}
long double b(long double pi, long double r) {
	return 4.0 / 3 * pi * r * r * r;
}

long double b2(long double pi, long double r) {
	return 4.0 * pi * r * r;
}

long double c(long double pi, long double r, long double h) {
	return pi * r * r * h;
}

long double c2(long double pi, long double r, long double h) {
	return 2 * pi * r * r + 2 * pi * r * h;
}