#include <stdio.h>
#include <string.h>
#define SIZE 10

struct student {
    char stu_name[20];
    int id, computer, math;
    float avg;
};

void sort_array(struct student mystu[SIZE], int n) {
    int i, j;
    struct student temp_struct;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (mystu[j].avg < mystu[j + 1].avg) {
                temp_struct = mystu[j];
                mystu[j] = mystu[j + 1];
                mystu[j + 1] = temp_struct;

            }
        }
    }
}




int main() {

    struct student  * stuPtr;
    struct student  stu[SIZE] = { { "Danny",11,85,70 },
                         {"Jimmy",15,92,80},
                         {"Peter",13,78,75},
                         {"Sue",18,85,90},
                         {"John",12,90,85},
                         {"Hearts",17,85,70},
                         {"Diamonds",14,76,82},
                         {"Clubs",19,95,92},
                         {"Spades",16,88,88},
                         {"jonny",20,65,70} };
    int i;

    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
        for (i = 0; i < SIZE; i++) {
            stu[i].avg = (stu[i].computer + stu[i].math) / 2.0;
        }
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[i].stu_name, stu[i].id, stu[i].computer, stu[i].math, stu[i].avg);
    }


    sort_array(stu, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");\

        for (i = 0; i < SIZE; i++) {
            printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[i].stu_name, stu[i].id, stu[i].computer, stu[i].math, stu[i].avg);
        }


    return 0;
}
