#include<stdio.h>
int main(void) {
	int fact, i = 1, result = 1;
	float e=1;
	printf("輸入一個整數fact<13，求出e相似值\n");
	scanf_s("%d", &fact);
	for (i = 1; i <= fact; i++) {
		result *= i;
		e = e + (float)1 / result;

	}
	printf("e相似值是 %.2f\n", e);







	return 0;
}