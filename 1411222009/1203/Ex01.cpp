
#include <stdio.h>

int rec(int n);

int main(void) {
	int n;
	double e = 1.0;
	printf("n= ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n;i++) {
		e = e + (1.0 / rec(i));
	}

	printf("e = %f", e);

}

int rec(int n) {
	if (n <= 1)
		return 1;
	else
		return n * rec(n - 1);
}
