#include<stdio.h>

int counter(float, float, float, int);

int main(void) {
	float c = 0.0, r = 0.05;
	float aims = 50000.0;
	int  a = 0;
	printf("輸入本金\n");
	scanf_s("%f", &c);
	printf("輸入每年底存入金額\n");
	scanf_s("%d", &a);
	printf("存到50000需要%d年", counter(c,r,aims,a));
}

int counter(float c, float r, float aims, int a) {
	int i = 0;
	for (; c <= aims;) {
		c = c * (1 + r) + a;
		i++;
	}
	return i;
}
