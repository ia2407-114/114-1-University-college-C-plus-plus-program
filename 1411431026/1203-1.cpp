#include<iostream>


int fac(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}

int main(void) {
	int n;
	printf("請輸入n值:");
	scanf_s("%d", &n);

	double e = 0;
	for (int i = 0;i <= n;i++) {
		e += 1.0 / fac(i);
	}

	printf("e的近似值為%f\n", e);

	return 0;

}