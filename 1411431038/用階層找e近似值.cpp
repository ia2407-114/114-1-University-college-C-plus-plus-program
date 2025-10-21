#include<stdio.h>
int main(void) {
	int fact = 0;
	int i;
	int result = 1;
	float e=1.0;
	printf("enter one integer");
	scanf_s("%d", &fact);
	for (i = 1;i <= fact;i++) {
		result = result * i;
		e = e + 1.0 / result;
	}
	printf("%.10f", e);
	return 0;
}