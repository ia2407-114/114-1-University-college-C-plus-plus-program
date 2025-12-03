#include<stdio.h>

double pow(double x, int n) {
	if (n <= 0)
		return 1;
	else
		return x * pow(x, n - 1);
}

int fac(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}

int main(void) {
	int n;
	double x;
	printf("請輸入n值:");
	scanf_s("%d", &n);
	printf("請輸入x值:");
	scanf_s("%f", &x);

	double result = 0;

	for (int i = 0;i <= n;i++) {
		result += pow(x, i) / fac(i);
	}

	printf("e^x的近似值為%f\n", result);
	
	return 0;

}