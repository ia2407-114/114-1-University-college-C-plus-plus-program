#include<stdio.h>
int main(void) {
	float grade, new_grade, max_grade, min_grade;
	grade = 0;
	int counter = 0;
	printf("Enter the grade");
	scanf_s("%f", &new_grade);

	while (new_grade > 0) {
		
		grade = grade + new_grade;
		counter = counter + 1;
		if (counter == 1) {
			max_grade = new_grade;
			min_grade = new_grade;
		}
		else if (new_grade > max_grade) {
			max_grade = new_grade;
	    }
		else if (new_grade < min_grade) {
			min_grade = new_grade;
	    }
		


		printf("目前平均成績是%.2f\n", grade / counter);
		printf("目前max number是%.2f\n", max_grade);
		printf("目前min number是%.2f\n", min_grade);
		printf("Enter the grade\n");
		scanf_s("%f", &new_grade);
	}

	if (grade == 0) {
		printf("平均成績是0");
		printf("max number是0");
		printf("min number是0");

	}

	return 0;
}