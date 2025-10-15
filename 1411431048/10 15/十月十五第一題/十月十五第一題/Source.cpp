#include <stdio.h>

// function main begins program execution
int main(void)
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int counter = 0; // student counter
    int grade;                // grade value
    int total = 0;            // sum of grades

    float average;            // number with decimal point for average

    while (1) {
        printf("Enter grade (-1 to end): ");
        scanf_s("%d", &grade);

        if (grade == -1) {
            break; // exit loop if -1 entered
        }

        if (grade < 0 || grade > 100) {
            printf("Invalid grade. Please enter a value between 0 and 100.\n");
            continue; // skip this iteration
        }

        total += grade;
        counter=counter+1;

        if (grade >= 60) {
            passes=passes+1;
        }
        else {
            failures=failures+1;
        }
    }

    // termination phase
    if (counter != 0) {
        average = (float)total / counter;

        printf("Class average is %.2f\n", average);
        printf("Failures: %d\n", failures);
        printf("Passes: %d\n", passes);

        if (passes >= (counter / 2)) {
            puts("Bonus to the Teacher");
        }
    }
    else {
        puts("No grades were entered.");
    }

    return 0;
}
