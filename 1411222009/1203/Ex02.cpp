#include <stdio.h>

int rec(int n);
int pow(int x, int n);

int main(void) {

	int n, x;
	double e = 1.0;

	printf("n= ");
	scanf_s("%d", &n);
	printf("x= ");
	scanf_s("%d", &x);

	for (int i = 1; i <= n;i++) {
		e = e + ((double)pow(x, i) / rec(i));
	}

	printf("e = %f", e);
	
}

int rec(int n) {
	if (n <= 1)
		return 1;
	else
		return n * rec(n - 1);
}

int pow(int x, int n) {
	if (n <= 0)
		return 1;
	else
		return x * pow(x, n-1);
}