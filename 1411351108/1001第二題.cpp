#include<stdio.h>
int main(void) {
	int integer_score;
	printf("Enter a integer_score\n");
	scanf_s("%d", &integer_score);
	if (integer_score >= 60) {
		printf("恭喜通過\n");
	}
	if (integer_score < 60) {
		printf("再加油\n");
	}






}