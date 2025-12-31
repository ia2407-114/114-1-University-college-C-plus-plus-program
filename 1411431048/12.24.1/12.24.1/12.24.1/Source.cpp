#include <stdio.h>
#include <string.h>

#define SIZE 10

void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

void swap_string(char s1[], char s2[])
{
    char temp[20];
    copy1(temp, s1);
    copy1(s1, s2);
    copy1(s2, temp);
}
void sort_array(char name[][20], int stu[][SIZE], float avg[], int n)
{
    int i, j, temp;
    float tempf;
    char temp_name[20];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
                copy1(temp_name, name[j]);
                copy1(name[j], name[j + 1]);
                copy1(name[j + 1], temp_name);

               
            }
        }
    }
}

int main(void)
{
    char name[SIZE][20] = {
        "Danny","Mary","Jimmy","Peter","Sue",
        "John","Hearts","Diamonds","Clubs","Spades"
    };

    int stu[3][SIZE] = {
        {11,15,13,18,12,17,14,19,16,20},
        {85,92,78,85,90,85,76,95,88,85},
        {70,80,75,90,85,70,82,92,88,70}
    };

    float avg[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0f;

    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (i = 0; i < SIZE; i++)
        printf("%s\t%d\t    %d\t\t    %d\t\t    %.1f\n",
            name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);

    sort_array(name, stu, avg, SIZE);

    printf("\n排序後（依平均成績由大到小）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (i = 0; i < SIZE; i++)
        printf("%s\t%d\t    %d\t\t    %d\t\t    %.1f\n",
            name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);

    return 0;
}
