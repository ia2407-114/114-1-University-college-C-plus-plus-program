#include<stdio.h>

int main(void)
{
	unsigned int pass = 0;
	unsigned int failure = 0;
	unsigned int student = 1;
	int result;

	while (student <= 10)
	{
		printf("enter result(1=pass,2=failure)\n");
		scanf_s("% d" , &result);

		if (result == 1)
		{
			pass = pass + 1;


		}
		else {
			failure = failure + 1;
		}
		student = student + 1;
	}
	printf("pass is %d\n", pass);
	printf("failure is %d\n", failure);

	if (pass == 8) {
		printf("Bonus to teacher");
	}
	return 0;
}
