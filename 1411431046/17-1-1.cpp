#include <stdio.h>
#include <string.h>
#define SIZE 10

struct student {
    char name[20];
    int id, computer, math;
    double avg;
};

void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

void swap(int* prt1, int* prt2) {
    int temp = *prt1;
    *prt1 = *prt2;
    *prt2 = temp;
}

void swap_f(float* prt1, float* prt2) {
    float temp = *prt1;
    *prt1 = *prt2;
    *prt2 = temp;
}

void sort_array(struct student MYstu[SIZE], int n) {
    int i, j;
    struct student temp_struct;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (MYstu[j].avg < MYstu[j + 1].avg) {
                temp_struct = MYstu[j];
                MYstu[j] = MYstu[j + 1];
                MYstu[j + 1] = temp_struct;
            }
        }
    }
}

int main() {
    struct student stu1 = { "Danny", 11, 85, 70 };
    struct student* stuptr;

    struct student my_stu[SIZE] = {
        {"Danny", 11, 85, 70},
        {"Mary", 15, 92, 80},
        {"Jimmy", 13, 78, 75},
        {"Peter", 18, 85, 90},
        {"Sue", 12, 90, 85},
        {"John", 17, 85, 70},
        {"Hearts", 14, 76, 82},
        {"Diamond", 19, 95, 92},
        {"Clubs", 16, 88, 88},
        {"Spades", 20, 85, 70}
    };

    int i;

    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");

    for (i = 0; i < SIZE; i++) {
        my_stu[i].avg = ((float)my_stu[i].computer + my_stu[i].math) / 2.0;
    }

    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t\t%d\t\t%.1f\n",
            my_stu[i].name,
            my_stu[i].id,
            my_stu[i].computer,
            my_stu[i].math,
            my_stu[i].avg);
    }

    sort_array(my_stu, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");

    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t\t%d\t\t%.1f\n",
            my_stu[i].name,
            my_stu[i].id,
            my_stu[i].computer,
            my_stu[i].math,
            my_stu[i].avg);
    }

    return 0;
}