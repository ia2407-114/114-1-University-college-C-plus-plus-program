#include<stdio.h>
double pi(double k, double h, double n, double pi, double pi2, double i, double j){
	for (;k != n;k++) {
		pi += 4 / i;
		i += 4;
}
	for (;h != n;h++) {
		pi2 += 4 / j;
		j += 4;
}
	return pi - pi2;
}
int main() {
	double k = 0, h = 0;
	double n = 0, a = 0, pi2 = 0, i = 1, j = 3;
	printf("輸入項目總數\n");
	scanf_s("%lf", &n);
	
	printf("pi的似近值為 %lf \n", pi(k,h,n,a,pi2,i,j));
	return 0;


}
