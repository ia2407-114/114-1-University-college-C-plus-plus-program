#include <stdio.h>
#include <string.h>

#define SIZE 10

struct student {
    char name[20];
    int id;
    int computer;
    int math;
    double avg;
};


void sort_array(struct student my_stu[], int n) {
    int i, j;
    struct student temp; 

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
 
            if (my_stu[j].avg < my_stu[j + 1].avg) {

                temp = my_stu[j];
                my_stu[j] = my_stu[j + 1];
                my_stu[j + 1] = temp;
            }
        }
    }
}

int main() {

    struct student mystu[SIZE] = {
        {"Danny", 11, 85, 70, 0}, {"Mary", 15, 92, 80, 0},                  
        {"Jimmy", 13, 78, 75, 0}, {"Peter", 18, 85, 90, 0},
        {"Sue", 12, 90, 85, 0},   {"John", 17, 85, 70, 0},
        {"Hearts", 14, 76, 82, 0}, {"Diamonds", 19, 95, 92, 0},
        {"Clubs", 16, 88, 88, 0},  {"Spades", 20, 85, 70, 0}
    };

    int i;


    for (i = 0; i < SIZE; i++) {
        mystu[i].avg = (mystu[i].math + mystu[i].computer) / 2.0;
    }

    printf("排序前：\n");
    printf("%-10s\t%s\t%s\t%s\t%s\n", "姓名", "學號", "計概", "數學", "平均");
    for (i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n", mystu[i].name, mystu[i].id, mystu[i].computer, mystu[i].math, mystu[i].avg);
    }


    sort_array(mystu, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("%-10s\t%s\t%s\t%s\t%s\n", "姓名", "學號", "計概", "數學", "平均");
    for (i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n", mystu[i].name, mystu[i].id, mystu[i].computer, mystu[i].math, mystu[i].avg);
    }

    return 0;
}