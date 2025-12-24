#include <stdio.h>
#include <string.h>

#define SIZE 10
#define NAME_LEN 20


void copy1(char* s1, const char* s2)
{
    while ((*s1 = *s2) != '\0') {
        s1++;
        s2++;
    }
}


void swap(int* ptr1, int* ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


void swap_f(float* ptr1, float* ptr2)
{
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void sort_array(char name[][NAME_LEN], int stu[][SIZE], float avg[], int n)
{
    int i, j;
    char temp_name[NAME_LEN];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {

                
                copy1(temp_name, name[j]);
                copy1(name[j], name[j + 1]);
                copy1(name[j + 1], temp_name);

                
                swap(&stu[0][j], &stu[0][j + 1]);
                swap(&stu[1][j], &stu[1][j + 1]);
                swap(&stu[2][j], &stu[2][j + 1]);

                swap_f(&avg[j], &avg[j + 1]);
            }
        }
    }
}

int main(void)
{
    const char* stu_name[SIZE] = {
        "Danny","Mary","Jimmy","Peter","Sue",
        "John","Hearts","Diamond","Clubs","Spades"
    };

    char stu1_name[SIZE][NAME_LEN];

    for (int i = 0; i < SIZE; i++)
        copy1(stu1_name[i], stu_name[i]);

    int stu[3][SIZE] = {
        {11,15,13,18,12,17,14,19,16,20},
        {85,92,78,85,90,85,76,95,88,85},
        {70,80,75,90,85,70,82,92,88,70}
    };

    float avg[SIZE];

    printf("排序前：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");

    for (int i = 0; i < SIZE; i++) {
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0;
        printf("%s\t%d\t%d\t%d\t%.1f\n",
            stu1_name[i],stu[0][i],stu[1][i],stu[2][i],avg[i]);
    }

    sort_array(stu1_name, stu,avg,SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.1f\n",
            stu1_name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    return 0;
}