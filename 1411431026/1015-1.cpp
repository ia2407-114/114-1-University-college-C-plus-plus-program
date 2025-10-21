#include<stdio.h>

int main(void)
{
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int student = 0;
	unsigned int counter=0;
	int result=0;
	int grade=0;
	int total=0;

	float average;

	printf("請輸入學生成績(直到負數結束):");
	scanf_s("%d", &grade);
	while (grade != -1) {
		total = total + grade;
		counter = counter + 1;

		
		if (grade >= 60)
			passes = passes + 1;
		else
			failures = failures + 1;

		printf("請輸入學生成績(直到負數結束):");
		scanf_s("%d", &grade);
		}

	if (counter != 0) {
		average = (float)total / counter;
		printf("平均成績是:%.2f\n", average);

		printf("Passed %u\n", passes);
		printf("Failed %u\n", failures);
	}
	if ((float)passes/failures >=0.5) 
		puts("Bonus to instructor!");

}