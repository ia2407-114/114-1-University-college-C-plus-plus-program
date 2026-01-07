#include <stdio.h>
#include <string.h>
#define SIZE 10

struct student {
    char name[20];
    int id, math, computer;
    float avg;
};

void sort_array(struct student MYstu[SIZE], int n) {
    struct student temp_struct;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (MYstu[j].avg < MYstu[j + 1].avg) {
                temp_struct = MYstu[j];
                MYstu[j] = MYstu[j + 1];
                MYstu[j + 1] = temp_struct;
            }
        }
    }
}


void sort_array_by_id(struct student MYstu[SIZE], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (MYstu[j].id > MYstu[j + 1].id) {
                temp = MYstu[j];
                MYstu[j] = MYstu[j + 1];
                MYstu[j + 1] = temp;
            }
        }
    }
}


int binarySearch(struct student my_stu[], int searchKey, int low, int high) {
    while (low <= high) {
        int middle = (low + high) / 2;
        if (searchKey == my_stu[middle].id) {
            return middle;
        }
        else if (searchKey < my_stu[middle].id) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    return -1;
}

int main() {
    struct student my_stu[SIZE] = {
        {"Danny" ,11,85,70},
        {"Mary" ,15,92,80},
        {"Jimmy" ,13,78,75},
        {"Peter" ,18,85,90},
        {"Sue" ,12,90,85},
        {"John" ,17,85,70},
        {"Hearts" ,14,76,82},
        {"Diamond" ,19,95,92},
        {"Clubs" ,16,88,88},
        {"Spades" ,20,85,70}
    };

    int i, binarysearch;


    for (i = 0; i < SIZE; i++) {
        my_stu[i].avg = (my_stu[i].computer + my_stu[i].math) / 2.0;
    }

    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %.2f\n",
            my_stu[i].name, my_stu[i].id, my_stu[i].computer, my_stu[i].math, my_stu[i].avg);
    }


    sort_array(my_stu, SIZE);


    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %.2f\n",
            my_stu[i].name, my_stu[i].id, my_stu[i].computer, my_stu[i].math, my_stu[i].avg);
    }


    printf("\nEnter integer binarysearch key (學號 11~20): ");
    scanf_s("%d", &binarysearch);


    sort_array_by_id(my_stu, SIZE);

    int index1 = binarySearch(my_stu, binarysearch, 0, SIZE - 1);

    if (index1 != -1) {
        printf("找到學生：\n姓名：%s, 學號：%d, 計概：%d, 平均：%.2f\n",
            my_stu[index1].name,
            my_stu[index1].id,
            my_stu[index1].computer,
            my_stu[index1].avg);
    }
    else {
        puts("Value not found");
    }

    return 0;
}