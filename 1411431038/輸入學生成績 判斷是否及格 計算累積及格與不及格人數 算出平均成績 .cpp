#include <stdio.h>

int main(void)
{
    unsigned int counter;
    int grade;
    int total;
    int pass;
    int nopass;
    float average;


    total = 0;
    counter = 0;
    nopass = 0;
    pass = 0;

    do {
        printf("%s", "Enter grade, less than 0 to end: ");
        scanf_s("%d", &grade);
        if (grade < 0) {
            break;
        }

        if (grade < 60) {
            printf("%d,不及格\n", grade);
            nopass = nopass + 1;
        }
        else {
            printf("%d,及格\n", grade);
            pass = pass + 1;
        }
        total = total + grade;
        counter = counter + 1;
    } while (grade >= 0);



    if (counter != 0) {
        average = (float)total / counter;
        printf("Class average is %.2f\n", average);
        printf("nopass people have %d\n", nopass);
        printf("pass people have %d\n", pass);
    }
    else {
        printf("No grades were entered");
    }

    if ((float)pass / (pass + nopass) >= 0.5) {
        printf("Bouns to the Teacher");
    }
    return 0;
}