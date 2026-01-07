/*題目1. 修改上面的程式碼，建立一個可存放10筆資料的結構陣列、將全班10人的姓名、學號、數學成績、計概、平均成績放入結構中(可直接置於程式內)。
計算出每個學生的平均成績放入結構中的avg成員結構內容如下:
struct student {
    char name[20];
    int id, computer, math;
    double avg;
};
並根據每個學生的平均分數，由大到小排序。需使用副程式與傳位址呼叫進行結構陣列傳遞。*/


#include <stdio.h>
#include <string.h>
#define SIZE 10

struct student {
    char name[20];
    int id, computer, math;
    float avg;
};

typedef struct student STU; // 結構別名定義為STU

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

int main() {

    STU stu1, * stuPtr;  // 宣告結構變數 結構指標

    STU my_stu[SIZE] = {{"Danny", 11, 85, 70},  // 宣告結構陣列
                        {"Mary", 11, 85, 70},
                        {"Jimmy", 11, 85, 70}, 
                        {"Peter", 11, 85, 70}, 
                        {"Sue", 11, 85, 70}, 
                        {"John", 11, 85, 70}, 
                        {"Hearts", 11, 85, 70}, 
                        {"Diamonds", 11, 85, 70}, 
                        {"Clubs", 11, 85, 70}, 
                        {"Spades", 11, 85, 70} };

    int i;

    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
        for (i = 0; i < SIZE; i++) {
            my_stu[i].avg = (float)(my_stu[i].computer + my_stu[i].math) / 2;
        }
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", my_stu[i].name, my_stu[i].id, my_stu[i].computer, my_stu[i].math, my_stu[i].avg);
    }


    sort_array(my_stu, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");

        for (i = 0; i < SIZE; i++) {
            printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", my_stu[i].name, my_stu[i].id, my_stu[i].computer, my_stu[i].math, my_stu[i].avg);
        }


    return 0;
}

