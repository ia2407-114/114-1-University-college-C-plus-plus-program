#include<stdio.h>
int main() {
	double k = 0, h = 0;
	double n=0, pi=0,pi2=0,i=1,j=3;
	printf("輸入項目總數\n");
	scanf_s("%lf", &n);
	for (;k!=n;k++) {
		pi += 4 / i;
		i += 4;
	}
	for (;h!=n;h++) {
		pi2 += 4 / j;
		j += 4;
	}
	pi -= pi2;
	printf("pi的似近值為 %lf \n",pi);
	return 0;


}