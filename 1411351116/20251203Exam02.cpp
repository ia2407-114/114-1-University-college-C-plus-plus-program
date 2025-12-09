/*題目2: 請參考課本P.143題3.45(c)，由主程式輸入n，x值。
並建立兩個遞迴程式，分別計算X ^ n與n!，再由主程式計算
出e ^ x值。*/
#include <stdio.h>

double nsum(int n);
double xsum(int i, int x);
int main() {
	int n,x;
	double xresult=0,result = 1;

	printf("請輸入n");
	scanf_s("%d", &n);
	printf("請輸入x");
	scanf_s("%d", &x);

	for (int i = 1; i <= n; i++) {
		xresult = xsum(i, x);
		result += xresult / nsum(i);


	}
	printf("e是%lf", result);

}
double nsum(int i) {
	if (i == 0)
		return 1;
	else
		return i * nsum(i - 1);
}
double xsum(int i,int x) {
	if (i == 0)
		return 1;
	else
		return x * xsum(i-1,x);
}
