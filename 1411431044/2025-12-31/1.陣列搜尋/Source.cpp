#include <stdio.h>
#include <string.h>

#define SIZE 10

void copy1(char* s1, const char* s2);
void swap(int* prt1, int* prt2);
void swap_f(float* prt1, float* prt2);
void sort_array(char name[][20], int stu[][SIZE], float avg[], int n);
int linearSearch(const int array[], int key, int size);

int main() {
    const char* stu_name[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamonds","Clubs","Spades" };
    char stu1_name[SIZE][20];
    int stu[3][SIZE] = {
        { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 }, 
        { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 }, 
        { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 }  
    };
    float average_scores[SIZE];

    for (int i = 0; i < SIZE; i++) {
        copy1(stu1_name[i], stu_name[i]);
        average_scores[i] = (stu[1][i] + stu[2][i]) / 2.0;
    }

    sort_array(stu1_name, stu, average_scores, SIZE);

    printf("===== 排序後名單（依平均成績）=====\n");
    printf("姓名\t學號\t計概\t數學\t平均成績\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t%d\t%.2f\n",
            stu1_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
    }
    printf("==================================\n\n");

    int searchID;
    printf("請輸入欲搜尋的學號鍵值: ");
    scanf_s("%d", &searchID);

    int index = linearSearch(stu[0], searchID, SIZE);

    if (index != -1) {
        printf("\n[搜尋成功]\n");
        printf("學號 %d 位於陣列索引位置: %d\n", searchID, index);
        printf("該生詳細成績如下：\n");
        printf("----------------------------------\n");
        printf("姓名: %s\n", stu1_name[index]);
        printf("計概成績: %d\n", stu[1][index]);
        printf("數學成績: %d\n", stu[2][index]);
        printf("平均成績: %.2f\n", average_scores[index]);
        printf("----------------------------------\n");
    }
    else {
        printf("\n[搜尋失敗] 找不到學號為 %d 的學生。\n", searchID);
    }

    return 0;
}

int linearSearch(const int array[], int key, int size) {
    for (int n = 0; n < size; ++n) {
        if (array[n] == key) {
            return n;                    
        }
    }
    return -1;                                     
}

void copy1(char* s1, const char* s2) {
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

void swap(int* prt1, int* prt2) {
    int temp = *prt1;
    *prt1 = *prt2;
    *prt2 = temp;
}

void swap_f(float* prt1, float* prt2) {
    float temp = *prt1;
    *prt1 = *prt2;
    *prt2 = temp;
}

void sort_array(char name[][20], int stu[][SIZE], float avg[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
                char temp_name[20];
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