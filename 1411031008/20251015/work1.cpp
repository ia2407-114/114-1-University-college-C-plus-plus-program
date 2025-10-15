#include <stdio.h>

int main(void)
{
	unsigned int passes =0;
	unsigned int failures = 0;
	unsigned int student = 1;
	unsigned int counter;
	int grade;
	int total;


	float average;

	total = 0;
	counter = 0;
	printf("Enter grade,-1 to end ");
	scanf_s("%d", &grade);


	while (grade != -1) {
		total = total + grade;
		counter = counter + 1;

		if (grade >= 60)
			passes = passes + 1;
		else
			failures = failures + 1;

		printf("Enter grade,-1 to end ");
		scanf_s("%d", &grade);
	}



	printf("Passed %d\n", passes);
	printf("Passed %d\n", failures);

	if (counter != 0) {
		average = (float)total / counter;
		printf("Class average is %.2f\n", average);

		if ((float)passes / failures >= 0.5)
			puts("Bonus to the Teacher!");
	}
	else
	{
		puts("No grades were entered");
	}

	return 0;
}