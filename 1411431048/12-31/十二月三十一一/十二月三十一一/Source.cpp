#include <stdio.h>
#define SIZE 10


void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}


void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_f(float* a, float* b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}


void sort_array(char name[][20], int stu[][SIZE], float avg[], int n)
{
    char temp_name[20];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {

                copy1(temp_name, name[j]);
                copy1(name[j], name[j + 1]);
                copy1(name[j + 1], temp_name);

                swap(&stu[0][j], &stu[0][j + 1]); 
                swap(&stu[1][j], &stu[1][j + 1]); 
                swap(&stu[2][j], &stu[2][j + 1]); 
                swap_f(&avg[j], &avg[j + 1]);     
            }
        }
    }
}


int linearSearch(const int array[], int key, int size)
{
    for (int i = 0; i < size; i++) {
        if (array[i] == key)
            return i;
    }
    return -1;
}

int main(void)
{
    const char* names[SIZE] = {
        "Danny","Mary","Jimmy","Peter","Sue",
        "John","Hearts","Diamonds","Clubs","Spades"
    };

    char stu_name[SIZE][20];
    for (int i = 0; i < SIZE; i++)
        copy1(stu_name[i], names[i]);

    int stu[3][SIZE] = {
        {11, 15, 13, 18, 12, 17, 14, 19, 16, 20},
        {85, 92, 78, 85, 90, 85, 76, 95, 88, 85},
        {70, 80, 75, 90, 85, 70, 82, 92, 88, 70}
    };

    float avg[SIZE];

    for (int i = 0; i < SIZE; i++)
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0;

    sort_array(stu_name, stu, avg, SIZE);

    int key;
    printf("請輸入要查詢的學號：");
    scanf_s("%d", &key);

    int index = linearSearch(stu[0], key, SIZE);

    if (index != -1) {
        printf("\n查詢結果：\n");
        printf("姓名：%s\n", stu_name[index]);
        printf("學號：%d\n", stu[0][index]);
        printf("計概成績：%d\n", stu[1][index]);
        printf("數學成績：%d\n", stu[2][index]);
        printf("平均成績：%.2f\n", avg[index]);
    }
    else {
        printf("查無此學號！\n");
    }

    return 0;
}
