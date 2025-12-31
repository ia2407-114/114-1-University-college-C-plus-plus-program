#include <stdio.h>
#define SIZE 10

void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void swap_f(float* a, float* b)
{
    float t = *a;
    *a = *b;
    *b = t;
}

void sort_by_id(char name[][20], int stu[][SIZE], float avg[])
{
    char temp_name[20];

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (stu[0][j] > stu[0][j + 1]) {

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

int binarySearch(const int arr[], int key, int low, int high)
{
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(void)
{
    const char* names[SIZE] = {
        "Danny","Mary","Jimmy","Peter","Sue",
        "John","Hearts","Diamonds","Clubs","Spades"
    };

    char name[SIZE][20];
    for (int i = 0; i < SIZE; i++)
        copy1(name[i], names[i]);

    int stu[3][SIZE] = {
        {11, 15, 13, 18, 12, 17, 14, 19, 16, 20},
        {85, 92, 78, 85, 90, 85, 76, 95, 88, 85},
        {70, 80, 75, 90, 85, 70, 82, 92, 88, 70}
    };

    float avg[SIZE];

    for (int i = 0; i < SIZE; i++)
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0f;

    sort_by_id(name, stu, avg);

    printf("排序後（依學號）：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.2f\n",
            name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    int key;
    printf("\n請輸入要查詢的學號：");
    scanf_s("%d", &key);

    int index = binarySearch(stu[0], key, 0, SIZE - 1);

    if (index != -1) {
        printf("\n查詢結果：\n");
        printf("姓名：%s\n", name[index]);
        printf("計概：%d\n", stu[1][index]);
        printf("數學：%d\n", stu[2][index]);
        printf("平均：%.2f\n", avg[index]);
    }
    else {
        printf("查無此學號！\n");
    }

    return 0;
}
