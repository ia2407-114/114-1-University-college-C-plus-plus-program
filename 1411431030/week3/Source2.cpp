#include<stdio.h>

int main(void)
{
	int a, b, c;
	printf("块计\n");
	scanf_s(" %d %d %d", &a, &b, &c);
	printf("羆%d\n", a + b + c);
	printf("埃计%f\n", ((float)a + b + c) / 3);
	printf("縩%d\n", a * b * c);
	if (a > b) {
		if (a > c) {
			printf("程计%d\n", a);
			if (c > b)
				printf("程计%d\n", b);
		}
		if (c > a) {
			printf("程计%d\n", c);
			if (a > b)
				printf("程计%d\n", b);
		}
	}
	if (b > a) {
		printf("程计%d\n", b);
		if (a > c)
			printf("程计%d\n", c);
		if (c > a)
			printf("程计%d\n", a);
		;
	}
	return 0;
}