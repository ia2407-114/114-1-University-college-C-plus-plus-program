#include <stdio.h>

int main(void) {
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int student = 0;
	
	int score;
	int total = 0;
	float average;

	do {
		scanf_s("%d", &score);

		if(score<0)
			break;
		

		if (score >= 60) {
			passes++;
		}
		else {
			failures++;
		}
		total = total + score;
		student++;

	} while (score >= 0);

		average = (float)total / student;

printf("Passed: %d\n", passes);
printf("Failed: %d\n", failures);
printf("Average: %f\n", average);

if ((float)passes / student >= 0.5) 
{
	printf("Bonus to the Teacher!");
}

return 0;
}