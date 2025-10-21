#include<stdio.h>

int main(void)
{
	unsigned int counter;
	int grade;
	int total;
	int max;
	int min;


	float average;

	total = 0;
	counter = 0;
	max = -1;
	min = 101;



	printf("Enter grade,-1 to end:");
	scanf_s("%d", &grade);

	while (grade != -1) {
		total = total + grade;
		counter = counter + 1;

		printf("Enter grade,-1 to end:");
		scanf_s("%d", &grade);
		if (grade > max) {
			max = grade;
		}

		if (grade < min) {
			min = grade;
		}
	}
	if (counter != 0) {
		average = (float)total / counter;
		
		printf("Class average is %.2f\n",average);
		printf("最高成績是%d\n", max);
		printf("最低成績是%d\n", min);
	}
	else {
		puts("No grades were entered");
	}
}