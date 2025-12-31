#include <stdio.h>
#include <string.h>
#define SIZE 10

int linearSearch(int array[], int key, int size);
int binarySearch(int b[], int searchKey, int low, int high);

void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}
void swap(int* ptr1, int* ptr2) {
    int hold = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = hold;
}
void swap(float* ptr1, float* ptr2) {
    float hold = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = hold;
}

void sort_array(char name[][20], int stu[][SIZE], float avg[], int n) {
    int i, j, temp;
    float temp1;
    char temp_name[20];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {

                strcpy_s(temp_name, name[j]);
                strcpy_s(name[j], name[j + 1]);
                strcpy_s(name[j + 1], temp_name);

                swap(&stu[0][j], &stu[0][j + 1]);
                swap(&stu[1][j], &stu[1][j + 1]);
                swap(&stu[2][j], &stu[2][j + 1]);
                swap(&avg[j], &avg[j + 1]);
            }
        }
    }
}
void sort_by_id(char name[][20], int stu[][SIZE], float avg[], int n) {
    char temp_name[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (stu[0][j] > stu[0][j + 1]) { // 依學號升序
                strcpy_s(temp_name, name[j]);
                strcpy_s(name[j], name[j + 1]);
                strcpy_s(name[j + 1], temp_name);
                swap(&stu[0][j], &stu[0][j + 1]);
                swap(&stu[1][j], &stu[1][j + 1]);
                swap(&stu[2][j], &stu[2][j + 1]);
                swap(&avg[j], &avg[j + 1]);
            }
        }
    }
}


int linearSearch(int array[], int key, int size) {
    for (size_t n = 0; n < size; ++n) {

        if (array[n] == key) {
            return n;
        }
    }
    return -1;
}

int binarySearch(int b[], int searchKey, int low, int high) {
    while (low <= high) {
        int middle = (low + high) / 2;

        if (searchKey == b[middle]) {
            return middle;
        }
        else if (searchKey < b[middle]) {
            high = middle - 1;     
        }
        else {
            low = middle + 1;     
        }
    } 

    return -1; 
}

int main() {
    const char* stu_name[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamond","Clubs","Spades" };
    char stu1_name[10][20];
    for (int i = 0; i < SIZE; i++)
        copy1(stu1_name[i], stu_name[i]);

    int stu[3][SIZE] = { { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },
                         { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 },
                         { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 } };

    float average_scores[SIZE];

    int i, searchKey, binarysearch;

    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
        for (i = 0; i < SIZE; i++) {
            average_scores[i] = (stu[1][i] + stu[2][i]) / 2.0;
        }
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu1_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
    }


    sort_array(stu1_name, stu, average_scores, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");

        for (i = 0; i < SIZE; i++) {
            printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu1_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
        }
    printf("Enter integer search key(學號): ");
    scanf_s("%d", &searchKey);

    sort_by_id(stu1_name, stu, average_scores, SIZE);
    printf("Enter integer binarysearch key(between 11 and 20): ");
    scanf_s("%d", &binarysearch);

    int index = linearSearch(stu[0], searchKey, SIZE);
    int index1 = binarySearch(stu[0], binarysearch, 0, SIZE - 1);


    if (index != -1) {
        printf_s("學號：%d,數概成績：%d,平均成績:%.2f", stu[0][index], stu[1][index],average_scores[index]);
    }
    else {
        puts("Value not found");
    }
    puts("");

    if (index1 != -1) {
        printf_s("學號：%d,數概成績：%d,平均成績:%.2f", stu[0][index1], stu[1][index1], average_scores[index1]);
    }
    else {
        puts("Value not found");
    }
    return 0;
}
