#include <stdio.h>
#include <string.h>

#define SIZE 10

void sort_array(char name[SIZE][20],
    int id[],
    int computer[],
    int math[],
    float avg[],
    int n)
{
    int i, j, temp;
    float temp1;
    char tempName[20];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {

                temp1 = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp1;

                strcpy_s(tempName, sizeof(tempName), name[j]);
                strcpy_s(name[j], sizeof(name[j]), name[j + 1]);
                strcpy_s(name[j + 1], sizeof(name[j + 1]), tempName);

                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;

                temp = computer[j];
                computer[j] = computer[j + 1];
                computer[j + 1] = temp;

                temp = math[j];
                math[j] = math[j + 1];
                math[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const char* stu_name[SIZE] = {
        "Danny","Mary","Jimmy","Peter","Sue",
        "John","Hearts","Diamonds","Clubs","Spades"
    };

    char stu1_name[SIZE][20];

    int student_id[SIZE] = { 11,15,13,18,12,17,14,19,16,20 };
    int comp_sci_scores[SIZE] = { 85,92,78,85,90,85,76,95,88,85 };
    int math_scores[SIZE] = { 70,80,75,90,85,70,82,92,88,70 };

    float average_scores[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        strcpy_s(stu1_name[i], sizeof(stu1_name[i]), stu_name[i]);
    }

    for (i = 0; i < SIZE; i++) {
        average_scores[i] = (comp_sci_scores[i] + math_scores[i]) / 2.0;
    }

    printf("%30s\n", "原始資料");
    printf("姓名\t\t學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n",
            stu1_name[i],
            student_id[i],
            comp_sci_scores[i],
            math_scores[i],
            average_scores[i]);
    }
    printf("\n");

    sort_array(stu1_name,
        student_id,
        comp_sci_scores,
        math_scores,
        average_scores,
        SIZE);

    printf("%30s\n", "排序資料");
    printf("姓名\t\t學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n",
            stu1_name[i],
            student_id[i],
            comp_sci_scores[i],
            math_scores[i],
            average_scores[i]);
    }

    return 0;
}
