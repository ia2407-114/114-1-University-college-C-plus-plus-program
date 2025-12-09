/*請參考課本P.143題3.45(b)，由主程式輸入n。
並建立一個遞迴副程式，負責計算n!，再由主程
式計算出e值。*/

#include <stdio.h>

double nsum(int n);
int main() {
	int n;
	double result = 0, result2;
	printf("請輸入n");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		result2 = 1.0 / nsum(i);
		result = result + result2;
	}
	printf("e是%lf", result);

}
double nsum(int i) {
	if (i == 0)
		return 1;
	else
		return i * nsum(i - 1);
}