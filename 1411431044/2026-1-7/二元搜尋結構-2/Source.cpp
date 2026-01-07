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

void sort_by_id(struct student* my_stu, int n) {
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if ((my_stu + j)->id > (my_stu + j + 1)->id) {
                temp = *(my_stu + j);
                *(my_stu + j) = *(my_stu + j + 1);
                *(my_stu + j + 1) = temp;
            }
        }
    }
}

struct student* binary_search(struct student* my_stu, int n, int target_id) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((my_stu + mid)->id == target_id) {
            return (my_stu + mid);
        }
        else if ((my_stu + mid)->id < target_id) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return NULL;
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

    sort_by_id(mystu, SIZE);

    int search_id;
    while (1) {
        printf("\n請輸入欲搜尋的學號 (輸入 -1 離開): ");
        if (scanf_s("%d", &search_id) != 1) break;
        if (search_id == -1) break;

        struct student* result = binary_search(mystu, SIZE, search_id);

        if (result != NULL) {
            printf("\n--- 搜尋結果 ---\n");
            printf("姓名: %-10s\n", result->name);
            printf("學號: %-10d\n", result->id);
            printf("計概: %-10d\n", result->computer);
            printf("數學: %-10d\n", result->math);
            printf("平均: %-10.2f\n", result->avg);
            printf("----------------\n");
        }
        else {
            printf("\n錯誤：找不到學號 %d 的資料。\n", search_id);
        }
    }

    printf("程式已結束。\n");
    return 0;
}