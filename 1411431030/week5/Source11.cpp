#include<stdio.h>

int main(void) {
	int n = 0;
	long double pi = 0, y = 1;
	printf("輸入項數n\n");
	scanf_s("%d", &n);
	for (int i = 0; i != n; i++) {
		pi += 4 / y;
		y += 2;
		pi -= 4 / y;
		y += 2;
	}
	printf("pi的近似值為%.7Lf\n", pi);
}