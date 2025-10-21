#include<stdio.h>
int main(void)
{ 
int grade, total = 0, count = 0, pass = 0, fail = 0;
float average;


do {
    printf("Enter grade, -1 to end: ");
    scanf_s("%d", &grade);

    if (grade >= 0) {
        total += grade;
        count++;

        if (grade >= 60) {
            pass++;
        }
        else {
            fail++;
        }
    }
} while (grade >= 0);
	
    if (count > 0) {
        average = ((float)total / count);
        printf("\nTotal students: %d\n", count);
        printf("Passed: %d\n", pass);
        printf("Failed: %d\n", fail);
        printf("Average grade: %.2f\n", average);

        if ((float)pass / count >= 0.5) {
            printf("Bonus to the Teacher!\n");
        }
    }
    else {
        printf("No grades were entered.\n");
    }

    return 0;
}