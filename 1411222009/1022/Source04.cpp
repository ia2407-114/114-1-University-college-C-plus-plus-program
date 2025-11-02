#include <stdio.h>

int main(void) {

	int n;
	float pi=1, sign=1;

	printf("n= ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		float m = 2 * i + 3; // ¤À¥À
		pi = pi - sign / m;
		sign = -sign; // ´«²Å¸¹
	}
	pi = pi * 4;
	printf("pi= %.2f\n", pi);
}

