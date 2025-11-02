#include <stdio.h>

int main(void) {

	int a, b=1, x, X=1, result = 1;
	printf("¿é¤Jxªº­È: ");
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++) {
		result = result * i; // ¶¥­¼
		X = X * x;
		b = b + X / result;
	}
	printf("%d\n", b);
}
