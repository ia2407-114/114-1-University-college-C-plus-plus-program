int main(void) {
	int n = 1, x = 0;
	long double e = 1;
	printf("輸入階乘\n");
	scanf_s("%d", &x);
	if (n < 13)
		for (; x != n;) {
			e += long double(1) / factorial(n);
			n++;
		}
	else
		printf("請輸入小於13的階乘\n");
	printf("e的近似值為%.16Lf", e);
}

int factorial(int  n) {
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}