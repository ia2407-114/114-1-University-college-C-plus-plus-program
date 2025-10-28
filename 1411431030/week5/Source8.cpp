#include<stdio.h>

int main(void) {
	float c = 10000.0, r = 0.05;
	float aims = 50000.0;
	int i = 0;
	printf("年　　金額　　利率\n");
	for (; c <= aims;) {
		i++;
		c *= (1 + r);
		printf("%d　　%.2f　　%.2f\n", i, c, r);
	}
	printf("存到50000需要%d年", i);
}