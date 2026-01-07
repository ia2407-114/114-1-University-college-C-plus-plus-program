#include <stdio.h>
#include <string.h>
#define SIZE 10

typedef struct student STU;
int binarySearch(STU arr[], int searchKey, int low, int high);

struct student {
    char name[20];
    int id, computer, math;
    double avg;
};



void copy1(char* s1, const char* s2)
{
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
void sort_array(STU MYstu[SIZE], int n) {
    int i, j, temp;
    float temp1;
    char temp_name[20];
    STU temp_struct;

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

int binarySearch(STU arr[], int searchKey, int low, int high)
{

    while (low <= high) {
        int middle = (low + high) / 2;

        if (searchKey == arr[middle].id)
            return middle;

        else if (searchKey < arr[middle].id) 
            high = middle - 1;
        
        else 
            low = middle + 1;
        
    }
    return -1;
}


int main() {
    STU stu1, * stuPtr;

    stu1 = { "Danny",11,85,70 };
    STU my_stu[SIZE] = { {"Danny",11,85,70},
        {"Sue",12,90,85},
        {"Jimmy",13,78,75},
        {"Hearts",14,76,82},
        {"Mary",15,92,80},
        {"Clubs",16,88,88},     
        {"John",17,85,70},
        {"Peter",18,85,90},
        {"Jenny",19,95,92},
        {"Spades",20,85,70} };


    int i, searchKey, index;

    printf("Enter integer binary search key: ");
    scanf_s("%d", &searchKey);

    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");


    for (i = 0; i < SIZE; i++) {
        my_stu[i].avg = ((float)my_stu[i].computer + my_stu[i].math) / 2;
    }

   

    index = binarySearch(my_stu, searchKey, 0, SIZE - 1);
    printf("您搜尋的資料內容 計算機概論%d ,數學%d,平均%f\n", my_stu[index].computer, my_stu[index].math, my_stu[index].avg);

    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", my_stu[i].name, my_stu[i].id, my_stu[i].computer, my_stu[i].math, my_stu[i].avg);
    }


    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");

    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", my_stu[i].name, my_stu[i].id, my_stu[i].computer, my_stu[i].math, my_stu[i].avg);
    }


    return 0;
}