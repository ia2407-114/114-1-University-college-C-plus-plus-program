#include <stdio.h>
#include <math.h>

float pi(int);

int n;
int main(void) {
	printf("enter n\n");
	scanf_s("%d", &n);
	printf("pi is %f\n", pi(n));


}
float pi(int n) {
	int i;
	float all = 0, a = 1;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0)
			all = all - 4 / a;
		else
			all = all + 4 / a;
		a = a + 2;


	}

	return all;
}