#include <stdio.h>
#include <string.h>

#define SIZE 10

void copy1(char* s1, const char* s2)
{
    while ((*s1 = *s2) != '\0') {
        s1++;
        s2++;
    }
}

void sort(char stu_name[][20], int stu[][SIZE], float avg[])
{
    int i, j,temp;
    float temp1;
    char tempName[20];

    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1 - i; j++) {
            if (avg[j] > avg[j + 1]) {
                temp1 = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp1;

                temp = stu[0][j];
                stu[0][j] = stu[0][j + 1];
                stu[0][j + 1] = temp;

                temp = stu[1][j];
                stu[1][j] = stu[1][j + 1];
                stu[1][j + 1] = temp;

                temp = stu[2][j];
                stu[2][j] = stu[2][j + 1];
                stu[2][j + 1] = temp;

                copy1(tempName, stu_name[j]);
                copy1(stu_name[j], stu_name[j + 1]);
                copy1(stu_name[j + 1], tempName);
            }
        }
    }
}

int main(void)
{
    const char* stu_name[SIZE] = {
        "Danny", "Mary", "Jimmy", "Peter", "Sue",
        "John", "Hearts", "Diamonds", "Clubs", "Spades"
    };

    char stu1_name[SIZE][20];
    for (int i = 0; i < SIZE; i++) {
        copy1(stu1_name[i], stu_name[i]);
    }

    int stu[3][SIZE];
    int student_id[SIZE] = { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 };
    int comp_sci_scores[SIZE] = { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 };
    int math_scores[SIZE] = { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 };

    for (int i = 0; i < SIZE; i++) {
        stu[0][i] = student_id[i];
        stu[1][i] = comp_sci_scores[i];
        stu[2][i] = math_scores[i];
    }

    float avg[SIZE];
    for (int i = 0; i < SIZE; i++) {
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0;
    }

    printf("Original data:\n");
    printf("Name       ID  Comp  Math  Avg\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%-10s %2d   %3d   %3d   %.2f\n",
            stu1_name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    sort(stu1_name, stu, avg);

    printf("\nSorted data (by average):\n");
    printf("Name       ID  Comp  Math  Avg\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%-10s %2d   %3d   %3d   %.2f\n",
            stu1_name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    return 0;
}