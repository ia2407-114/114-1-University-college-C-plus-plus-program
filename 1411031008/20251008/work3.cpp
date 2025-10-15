#include<stdio.h>

int main(void)
{
	unsigned int counter;
	int grade;
	int total;
	int maxgrade;
	int mingrade;

	float average;

	total = 0;
	counter = 0;
	printf("Enter grade,-1 to end ");
	scanf_s("%d", &grade);

	if (grade != -1) {
		maxgrade = grade;
		mingrade = grade;
	}

	while (grade != -1) {
		total = total + grade;
		counter = counter + 1;

		if (grade > maxgrade) 
			maxgrade = grade;

		if (grade < mingrade)
			mingrade = grade;

		printf("Enter grade,-1 to end ");
		scanf_s("%d", &grade);
	}

	if (counter != 0) {

		average = (float)total / counter;
		printf("Class average is %.2f\n", average);
		printf("最高成績:%d\n", maxgrade);
		printf("最低成績:%d\n", mingrade);
	}
	else
	{
		puts("No grades were entered");
	}

}
