#include  <stdio.h>

float pi(int n);

int main(void) {
	int n;
	float result;

	printf("請輸入計算項目總數n:");
	scanf_s("%d", &n);

	result = pi(n);
	printf("使用%d項計算得到pi=%.4f\n", n, result);
	return 0;
}
float pi(int n) {
	float pi = 0;
	float num;

	for (int k = 0;k < n;k++) {
		num = 2.0f * k + 1.0f;
		if (k % 2 == 0)
			pi += 1.0f / num;
		else
			pi -= 1.0f / num;
	}
	return pi * 4;
}