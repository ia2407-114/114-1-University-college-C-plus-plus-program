#include <stdio.h>
#include <string.h>
#define SIZE 10

int linearSearch(const int array[], int key, int size);

void copy1(char* s1, const char* s2)
{
    while ((*s1 = *s2) != '\0') {
        s1++;
        s2++;
    }
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
        { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 },
        { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 },
        { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 }
    };

    float avg[SIZE];
    for (int i = 0; i < SIZE; i++) {
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0;
    }

    printf("完整成績表：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.2f\n",
            stu1_name[i], stu[0][i],
            stu[1][i], stu[2][i],
            avg[i]);
    }

    int searchID;
    printf("\n請輸入欲搜尋的學號：");
    scanf_s("%d", &searchID);

    int index = linearSearch(stu[0], searchID, SIZE);

    if (index != -1) {
        printf("\n找到學號 %d\n", searchID);
        printf("姓名：%s\n", stu1_name[index]);
        printf("計算機概論成績：%d\n", stu[1][index]);
        printf("數學成績：%d\n", stu[2][index]);
        printf("平均成績：%.2f\n", avg[index]);
    }
    else {
        printf("\n查無此學號！\n");
    }

    return 0;
}

int linearSearch(const int array[], int key, int size)
{
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}