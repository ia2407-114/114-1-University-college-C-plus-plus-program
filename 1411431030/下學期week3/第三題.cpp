#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int power(int&, int&);
int fact(int&);
int main()
{
	int x, i;   //ex   e^1=2.71828…
	printf("Enter x =");
	scanf_s("%d", &x);
	printf("Enter i =");
	scanf_s("%d", &i);
	printf("result: %d, %d", power(x, i), fact(i));
}
int fact(int& i)
{
	int j;
	int level = 1;
	for (j = i; j >= 1; j--) {//階乘 e.g. i=5
		level *= j;  // level=level * j  ?5 * 4 * 3 * 2 * 1
	}  // 5!=120
	return level;
}

int power(int& x, int& y)
{
	int xpow = 1;
	int k;
	for (k = 1; k <= y; k++) {//次方  e.g. i=5
		xpow *= x;         // xpow=xpow * x ?5 * 5 * 5 * 5 * 5 * 5= 3125
	}
	return xpow;
}
