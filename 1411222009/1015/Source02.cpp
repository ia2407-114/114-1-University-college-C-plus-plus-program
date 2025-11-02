#include <stdio.h>

int main(void) {

	int a, result=1;

	printf("輸入一個 <13 的值: ");
	scanf_s("%d", &a);
	if (a < 13) {
		for (int i = 1; i <=a; i++) {
			result = result * i;
		}
		printf("%d\n", result);
	}
	else {
		printf("輸入值>=13 重新輸入\n");
		return main();
	}
}