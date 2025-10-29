#include<stdio.h>

long double pi(int n, long double pi, long double y) {
	for (int i = 0; i != n; i++) {
	pi += 4 / y;
	y += 2;
	pi -= 4 / y;
	y += 2;
	}
	return pi;
}
int main(void) {
	int n = 0;
	long double a = 0, y = 1;
	printf("輸入項數n\n");
	scanf_s("%d", &n);
	printf("pi的近似值為%.7Lf\n", pi(n,a,y));
}