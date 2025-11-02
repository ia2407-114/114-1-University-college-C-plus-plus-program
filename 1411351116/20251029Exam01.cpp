
/*
題目1.承上一週題目3，先利用這個無窮級數算出你的e^ x
(也就是e的x次方)，再呼叫庫存函數 exp(x)，印出這兩個
計算的結果，並得到誤差(無窮級數的結果- exp(x))
*/
#include <stdio.h>
#include <math.h>
int main(void) {


	int x, n, i;
	float all = 1, all2 = 1, e = 1, dis;
	printf("請輸入x、n\n");
	scanf_s("%d %d", &x, &n);
	for (i = 1; i <= n; i++) {
		all = all * x;
		all2 = all2 * i;
		e = e + all / all2;
	}


	printf("e的x次方是 %f\n", e);
	printf("庫存函數算的e的x次方是 %f\n", exp(x));
	dis = e - exp(x);
	printf("distance is %f", dis);

}
