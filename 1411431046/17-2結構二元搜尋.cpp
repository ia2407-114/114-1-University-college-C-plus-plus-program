#include <stdio.h>
#include <string.h>
#define SIZE 10

struct student {
    char name[20];
    int id, computer, math;
    double avg;
};

/* 字串複製副程式 */
void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

/* 整數交換 */
void swap(int* prt1, int* prt2) {
    int temp = *prt1;
    *prt1 = *prt2;
    *prt2 = temp;
}

/* 浮點數交換 */
void swap_f(float* prt1, float* prt2) {
    float temp = *prt1;
    *prt1 = *prt2;
    *prt2 = temp;
}

/* 依平均成績排序（由高到低） */
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

/* 依學號排序（給二元搜尋用） */
void sort_by_id(struct student* stu, int n)
{
    int i, j;
    struct student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (stu[j].id > stu[j + 1].id) {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
}

/* 二元搜尋副程式（傳位址） */
int binarySearch(struct student* stu, int key, int low, int high)
{
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (key == stu[mid].id)
            return mid;
        else if (key < stu[mid].id)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
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

    int i, search_id, pos;

    /* 計算平均成績 */
    for (i = 0; i < SIZE; i++) {
        my_stu[i].avg = (my_stu[i].computer + my_stu[i].math) / 2.0;
    }

    printf("排序前：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.1f\n",
            my_stu[i].name,
            my_stu[i].id,
            my_stu[i].computer,
            my_stu[i].math,
            my_stu[i].avg);
    }

    /* 依平均成績排序 */
    sort_array(my_stu, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.1f\n",
            my_stu[i].name,
            my_stu[i].id,
            my_stu[i].computer,
            my_stu[i].math,
            my_stu[i].avg);
    }

    /* 為二元搜尋，先依學號排序 */
    sort_by_id(my_stu, SIZE);

    /* 二元搜尋 */
    printf("\n請輸入欲搜尋的學號：");
    scanf_s("%d", &search_id);

    pos = binarySearch(my_stu, search_id, 0, SIZE - 1);

    if (pos != -1) {
        printf("\n找到學生資料：\n");
        printf("姓名：%s\n", my_stu[pos].name);
        printf("學號：%d\n", my_stu[pos].id);
        printf("計算機概論：%d\n", my_stu[pos].computer);
        printf("數學：%d\n", my_stu[pos].math);
        printf("平均成績：%.1f\n", my_stu[pos].avg);
    }
    else {
        printf("\n查無此學號！\n");
    }

    return 0;
}