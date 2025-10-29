#include<stdio.h>
#include<math.h>

int main(void) {
	int fact = 0;
	int i;
	int x;
	float e = 1.0;
	float amount = 1.0;

	printf("enter one integer¡G");
	scanf_s("%d", &fact);
	printf("enter x¡G");
	scanf_s("%d", &x);


	for (i = 1;i <= fact;i++) {
		amount = amount * x / i;
		e = e + amount;
	}
	printf("e¡G%.10f\n", e);
	printf("exp¡G%.10f\n", exp(x));
	printf("»~®t¡G%f", exp(x) - e);
	return 0;
}