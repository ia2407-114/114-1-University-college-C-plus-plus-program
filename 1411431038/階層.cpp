#include<stdio.h>
int main(void) {
	int fact = 0;
	int i;
	int result = 1;
	printf("enter one integer");
	scanf_s("%d", &fact);
	for (i=1;i <= fact;i++) {
		result= result* i;
	}
	printf("%d fact is %d", fact, result);
	return 0;

}