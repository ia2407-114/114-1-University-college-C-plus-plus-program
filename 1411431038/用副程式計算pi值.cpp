#include<stdio.h>

float approximate_pi(int n);
int main(void) {
	int n;
	printf("請輸入n：");
	scanf_s("%d", &n);

	printf("pi近似於%.20f", approximate_pi(n));
}

float approximate_pi(int n) {
	float pi = 0.0;
	for (int i = 0;i < n;i++) {
		if (i % 2 == 0) {
			pi = pi + (4.0 / (i * 2.0 + 1.0));
		}
		else {
			pi = pi - (4.0 / (i * 2.0 + 1.0));
		}

	}
	return pi;
}