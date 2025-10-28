#include <stdio.h>
int main() {
	int term, i, j,x,z=1;
	double e = 1.0, fact;
	printf("請輸入項目數量 term < 13: \n");
	scanf_s("%d", &term);
	for (i = 1; i < term; i++) {
		fact = 1;
		for (j = 1; j <= i; j++) {
			fact *= j;
		}
		e += 1.0 / fact;
	}
	printf("輸入x的次方\n");
	scanf_s("%d", &x);
	double a = e;
	 for(;z != x;){
		
		e *= a;
		z++;
	}
	
	printf("e 的近似值為: %lf\n", e);
	return 0;
}