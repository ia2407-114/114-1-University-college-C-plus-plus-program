#include<stdio.h>
int main(void) {
	int score,pass=0,fail=0,counter=0,all=0;
	float average;
	do {
		printf("輸入成績，直到輸入負數\n");
		scanf_s("%d", &score);
		if (score >= 0) {
			counter += 1;
			all += score;
			if (score >= 60) {
				printf("pass\n");
				pass += 1;
			}
			else {
				printf("fail\n");
				fail += 1;
			}
		}
		else
			printf("錯誤，輸入負數\n");
	} while (score >= 0);
	if (counter > 0) {
		average = (float)all / counter;
		printf("平均為%.2f\n", average);
	}
	else
		printf("次數為0，平均值不存在\n");

	printf("及格共%d，不及格共%d\n",pass,fail);
	if (pass >= 0.5 * counter)
		printf("Bonus to the Teacher\n");


	return 0;
}