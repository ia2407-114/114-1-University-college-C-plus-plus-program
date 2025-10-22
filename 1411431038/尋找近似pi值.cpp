#include<stdio.h>
int main(void) {
	int n;
	float pi = 0.0;


	printf("請輸入項目個數");
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++) {
		if (i % 2==0) {
			pi = pi + (4.0 / (i * 2.0 + 1.0));
		}
		else {
			pi = pi - (4.0 / (i * 2.0 + 1.0));
		}

	}
	printf("pi近似值%.20f",pi);
}