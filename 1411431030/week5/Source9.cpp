#include<stdio.h>

int main(void) {
	float c = 0.0, r = 0.05;
	float aims = 50000.0;
	int i = 0, a = 0;
	printf("輸入本金\n");
	scanf_s("%f", &c);
	printf("輸入每年底存入金額\n");\
	scanf_s("%d", &a);
	printf("年　　金額　　利率\n");
	for (; c <= aims;) {
		c = c * (1 + r) + a;
		i++;
		printf("%d　　%.2f　　%.2f\n", i, c, r);
	}
	printf("存到50000需要%d年", i);
}