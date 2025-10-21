#include<stdio.h>

int main(void) {
	int x, e = 0;
	int y=1, z= 1;
	printf("輸入階乘\n");
	scanf_s("%d", &x);
	if (x < 13)
		while (y != x) {
			z *= (y + 1);
			y += 1;
		}
	else
		printf("請輸入小於13的階乘\n");
	printf("%d階乘為%d", x, z);
}