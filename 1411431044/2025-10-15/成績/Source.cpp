#include<stdio.h>

int main(void)
{
	unsigned int count=0;
	unsigned int pass;
	unsigned int fail;
	int sc;
	float average;
	int total=0;
	pass = 0;
	fail = 0;

	printf("enter grade,<0 to end\n");
	scanf_s("%d",&sc);

	while (sc >= 0) {
		total = total + sc;
		count = count + 1;

		if (sc >= 60)
			pass = pass + 1;
		else
			fail = fail + 1;
		printf("enter next grade,<0 to end\n");
		scanf_s("%d",&sc);
	}
	if (count != 0){
		average = (float)total / count;
		printf("average is %.2f\n", average);
		printf("PASS people = %d\n", pass);
		printf("fail people = %d\n", fail);
    }
	else {
		printf("No grades were entered");
	}
	if (pass > count / 2)
		printf("Bouns to the teacher!!!!");
	return 0;
}