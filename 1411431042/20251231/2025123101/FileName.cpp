#include <stdio.h>
#include <stddef.h>

#define SIZE 10
#define NAME_LEN 20

void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2) {}
}

void swap_int(int* a, int* b) {
    int t = *a; *a = *b; *b = t;
}

void swap_f(float* a, float* b) {
    float t = *a; *a = *b; *b = t;
}


void sort_array(char name[][NAME_LEN], int stu[][SIZE], float avg[], int n) {
    char tmp_name[NAME_LEN];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
                copy1(tmp_name, name[j]);
                copy1(name[j], name[j + 1]);
                copy1(name[j + 1], tmp_name);

                swap_int(&stu[0][j], &stu[0][j + 1]);
                swap_int(&stu[1][j], &stu[1][j + 1]);
                swap_int(&stu[2][j], &stu[2][j + 1]);

                swap_f(&avg[j], &avg[j + 1]);
            }
        }
    }
}

size_t linearSearch(const int array[], int key, size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        if (array[i] == key) return i;
    }
    return size;
}

int main(void) {
    const char* stu_name[SIZE] = {
        "Danny","Mary","Jimmy","Peter","Sue",
        "John","Hearts","Diamonds","Clubs","Spades"
    };

    char stu1_name[SIZE][NAME_LEN];
    for (int i = 0; i < SIZE; i++) {
        copy1(stu1_name[i], stu_name[i]);
    }

    int stu[3][SIZE] = {
        { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 },
        { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 },
        { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 }
    };

    float avg[SIZE];
    for (int i = 0; i < SIZE; i++) {
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0f;
    }

    sort_array(stu1_name, stu, avg, SIZE);

    printf("排序後（依平均成績由大到小）：\n");
    printf("姓名\t學號\t計概\t數學\t平均\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.2f\n",
            stu1_name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    printf("\n請輸入要查詢的學號：");
    int searchID;
    scanf_s("%d", &searchID);

    size_t index = linearSearch(stu[0], searchID, SIZE);

    if (index == SIZE) {
        puts("找不到此學號");
    }
    else {
        printf("學號 %d 在陣列位置 index = %zu\n", searchID, index);
        printf("計算機概論：%d\n", stu[1][index]);
        printf("數學：%d\n", stu[2][index]);
        printf("平均：%.2f\n", avg[index]);
    }

    return 0;
}
