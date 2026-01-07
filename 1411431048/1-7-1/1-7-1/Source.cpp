#include <stdio.h>
#include <string.h>

#define SIZE 10

struct stu {
    char name[20];
    int id;
    int computer;
    int math;
    double avg;
};


void calc_avg(struct stu* s, int n) {
    int i;
    for (i = 0; i < n; i++) {
        s[i].avg = (s[i].computer + s[i].math) / 2.0;
    }
}


void sort_stu(struct stu* s, int n) {
    int i, j;
    struct stu temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (s[j].avg < s[j + 1].avg) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct stu my_stu[SIZE] = {
        {"Danny",   11, 85, 70, 0},
        {"Mary",    15, 92, 80, 0},
        {"Jimmy",   13, 78, 75, 0},
        {"Peter",   18, 85, 90, 0},
        {"Sue",     12, 90, 85, 0},
        {"John",    17, 85, 70, 0},
        {"Hearts",  14, 76, 82, 0},
        {"Diamonds",19, 95, 92, 0},
        {"Clubs",   16, 88, 88, 0},
        {"Spades",  20, 85, 70, 0}
    };

    int i;

    
    calc_avg(my_stu, SIZE);

    printf("排序前：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.2f\n",
            my_stu[i].name,
            my_stu[i].id,
            my_stu[i].computer,
            my_stu[i].math,
            my_stu[i].avg);
    }

    
    sort_stu(my_stu, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.2f\n",
            my_stu[i].name,
            my_stu[i].id,
            my_stu[i].computer,
            my_stu[i].math,
            my_stu[i].avg);
    }

    return 0;
}
