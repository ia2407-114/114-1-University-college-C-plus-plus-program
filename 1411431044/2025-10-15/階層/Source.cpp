#include<stdio.h>

int main(void) {
	unsigned int i = 1, math ;
	int result=1;

	scanf_s("%d", &math);
	for (i = 1;i <= math; i++)
		result *= i;
	printf("%d¶¥¼hµ²ªG¬°%d", math, result);
	return 0;
}