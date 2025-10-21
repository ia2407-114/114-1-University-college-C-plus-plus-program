#include<stdio.h>
int main(void) {
	int fact,i=1,result=1;
	printf("輸入一個整數fact<13，且印出階層值\n");
	scanf_s("%d", &fact);
	for (i=1; i <= fact; i++) {
		result *= i;
	}
	printf("%d 的階層結果是 %d\n", fact, result);







	return 0;
}