#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* cfPtr;

    if ((cfPtr = fopen("students.txt", "w")) == NULL) {
        puts("File could not be opened");
    }
    else {
        puts("Enter name, student ID, math score, computer score");
        puts("Press Ctrl+Z then Enter to finish input.");
        printf("? ");

        char name[30];
        unsigned int id;
        double math, computer, average;

        
        while (!feof(stdin)) {
            if (scanf("%29s %u %lf %lf", name, &id, &math, &computer) != 4) {
                break;   
            }

            average = (math + computer) / 2.0;

            fprintf(cfPtr, "%s %u %.2f %.2f %.2f\n",
                name, id, math, computer, average);

            printf("? ");
        }

        fclose(cfPtr);

        puts("所有資料已存入 students.txt，程式結束。");
    }

    return 0;
}