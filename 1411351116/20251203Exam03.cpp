/*題目3: 請參考課本P.143題3.45(c)，在主程式宣告一個大小
為m的整數陣列terms[m]，再由主程式輸入n與 x值且n < m。建
立兩個遞迴程式，分別計算X^ n與n!，再由主程式計算出e ^ x
值，並且將級數每一項的質放入陣列terms中。*/
#include <stdio.h>

double nsum(int n);
double xsum(int i, int x);
int main() {
	int n, x,m;
	double xresult = 0, result = 1;
	
	printf("請輸入n");
	scanf_s("%d", &n);
	printf("請輸入x");
	scanf_s("%d", &x);
	m = n + 1;
	int terms[m];
	terms[0] = 1;
	for (int i = 1; i <= n; i++) {
		xresult = xsum(i, x);
		result = xresult / nsum(i);
		terms[i] = result;

	}
	printf("e是%lf", result);

}
double nsum(int i) {
	if (i == 0)
		return 1;
	else
		return i * nsum(i - 1);
}
double xsum(int i, int x) {
	if (i == 0)
		return 1;
	else
		return x * xsum(i - 1, x);
}

