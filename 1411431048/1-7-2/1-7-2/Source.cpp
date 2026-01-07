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

void sort_by_id(struct stu* s, int n) {
    int i, j;
    struct stu temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (s[j].id > s[j + 1].id) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int binary_search(struct stu* s, int n, int key) {
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (s[mid].id == key)
            return mid;
        else if (s[mid].id < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;   
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

    int i, key, index;

    calc_avg(my_stu, SIZE);

    sort_by_id(my_stu, SIZE);

    printf("請輸入欲搜尋的學號：");
    scanf_s("%d", &key);

    index = binary_search(my_stu, SIZE, key);

    if (index != -1) {
        printf("\n找到資料：\n");
        printf("姓名：%s\n", my_stu[index].name);
        printf("學號：%d\n", my_stu[index].id);
        printf("計概成績：%d\n", my_stu[index].computer);
        printf("數學成績：%d\n", my_stu[index].math);
        printf("平均成績：%.2f\n", my_stu[index].avg);
    }
    else {
        printf("\n查無此學號！\n");
    }

    return 0;
}
