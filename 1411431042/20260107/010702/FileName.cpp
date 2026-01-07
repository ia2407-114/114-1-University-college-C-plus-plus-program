#include <stdio.h>
#define SIZE 10

struct student {
    char name[20];
    int id;
    int computer;
    int math;
    double avg;
};


void sort_by_avg(struct student* s, int n) {
    int i, j;
    struct student temp;

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


void sort_by_id(struct student* s, int n) {
    int i, j;
    struct student temp;

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


int binary_search(struct student* s, int n, int key) {
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
    struct student stu[SIZE] = {
        {"Danny",     11, 85, 70, 0},
        {"Mary",      15, 92, 80, 0},
        {"Jimmy",     13, 78, 75, 0},
        {"Peter",     18, 85, 90, 0},
        {"Sue",       12, 90, 85, 0},
        {"John",      17, 85, 70, 0},
        {"Hearts",    14, 76, 82, 0},
        {"Diamonds",  19, 95, 92, 0},
        {"Clubs",     16, 88, 88, 0},
        {"Spades",    20, 85, 70, 0}
    };

    int i, search_id, index;

    
    for (i = 0; i < SIZE; i++) {
        stu[i].avg = (stu[i].computer + stu[i].math) / 2.0;
    }

    
    sort_by_avg(stu, SIZE);

    printf("依平均成績排序後：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.1f\n",
            stu[i].name, stu[i].id,
            stu[i].computer, stu[i].math, stu[i].avg);
    }

   
    sort_by_id(stu, SIZE);   

    printf("\n請輸入欲搜尋的學號：");
    scanf_s("%d", &search_id);

    index = binary_search(stu, SIZE, search_id);

    if (index != -1) {
        printf("\n搜尋結果：\n");
        printf("姓名：%s\n", stu[index].name);
        printf("學號：%d\n", stu[index].id);
        printf("計概成績：%d\n", stu[index].computer);
        printf("數學成績：%d\n", stu[index].math);
        printf("平均成績：%.1f\n", stu[index].avg);
    }
    else {
        printf("\n查無此學號\n");
    }

    return 0;
}
