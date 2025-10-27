#include <stdio.h>
int main(void) {
	int i,x;
	float p, r, aims, all;
	printf("輸入本金\n");
	scanf_s("%f", &p);
	printf("輸入年利率\n");
	scanf_s("%f", &r);
	printf("輸入存款目標\n");
	scanf_s("%f", &aims);
	printf("輸入定期存入金額\n");
	scanf_s("%d", &x);
	all = p;
	for (i = 1; all <= aims; i++) {
		all = all * (1 + r);
		all += x;
		printf("第%d年本利和為%.2f\n", i, all);
	}
	printf("第%d年會達標\n", i - 1);



	return 0;
}