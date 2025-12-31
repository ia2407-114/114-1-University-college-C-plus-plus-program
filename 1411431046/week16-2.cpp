#include <stdio.h>
#include <string.h>
#define SIZE 10

void copy1(char* s1, const char* s2)
{
    while ((*s1 = *s2) != '\0') {
        s1++;
        s2++;
    }
}

int binarySearch(const int stu[][SIZE], int key, int low, int high)
{
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == stu[0][mid])
            return mid;
        else if (key < stu[0][mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(void)
{
    const char* stu_name[SIZE] = {
        "Danny","Mary","Jimmy","Peter","Sue",
        "John","Hearts","Diamond","Clubs","Spades"
    };
    char stu1_name[SIZE][20];
    for (int i = 0; i < SIZE; i++)
        copy1(stu1_name[i], stu_name[i]);

    int stu[3][SIZE] = {
        { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },
        { 85, 90, 78, 76, 92, 88, 85, 85, 95, 85 },
        { 70, 85, 75, 82, 80, 88, 70, 90, 92, 70 }
    };

    float avg[SIZE];
    for (int i = 0; i < SIZE; i++)
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0;

    printf("完整原始成績表：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (int i = 0; i < SIZE; i++)
        printf("%s\t%d\t%d\t%d\t%.2f\n",
            stu1_name[i], stu[0][i],
            stu[1][i], stu[2][i],
            avg[i]);

    int key, pos;
    printf("\n請輸入要搜尋的學號：");
    scanf_s("%d", &key);

    pos = binarySearch(stu, key, 0, SIZE - 1);

    if (pos != -1) {
        printf("\n找到學號：%d\n", stu[0][pos]);
        printf("姓名：%s\n", stu1_name[pos]);
        printf("計算機概論成績：%d\n", stu[1][pos]);
        printf("數學成績：%d\n", stu[2][pos]);
        printf("平均成績：%.2f\n", avg[pos]);
    }
    else {
        printf("\n查無此學號\n");
    }

    return 0;
}