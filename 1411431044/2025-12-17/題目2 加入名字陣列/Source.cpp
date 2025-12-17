#include <stdio.h>
#include <string.h>

#define SIZE 10
#define NAME_LEN 20

// 排序副程式：傳遞姓名(二維字元)、資料(二維整數)、平均(浮點數)
void sort_array(char names[SIZE][NAME_LEN], int stu[3][SIZE], float avg[], int n) {
    int i, j, k, temp;
    float temp_;
    char temp_name[NAME_LEN];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            // 依平均分數由高到低排序 (降冪)
            if (avg[j] < avg[j + 1]) {

                // 1. 交換平均分數
                temp_ = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp_;

                // 2. 同步交換 stu 二維整數陣列 (學號、計概、數學)
                for (k = 0; k < 3; k++) {
                    temp = stu[k][j];
                    stu[k][j] = stu[k][j + 1];
                    stu[k][j + 1] = temp;
                }

                // 3. 使用 strcpy_s 同步交換姓名
                strcpy_s(temp_name, NAME_LEN, names[j]);
                strcpy_s(names[j], NAME_LEN, names[j + 1]);
                strcpy_s(names[j + 1], NAME_LEN, temp_name);
            }
        }
    }
}

int main() {
    // 預設原始資料
    const char* stu_name[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamonds","Clubs","Spades" };
    int ids[SIZE] = { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 };
    int comp[SIZE] = { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 };
    int math[SIZE] = { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 };

    // 題目要求的陣列結構
    char stu1_name[SIZE][NAME_LEN];
    int stu[3][SIZE];
    float avg[SIZE];

    int i;

    // --- 1. 資料存入區 ---
    for (i = 0; i < SIZE; i++) {
        strcpy_s(stu1_name[i], NAME_LEN, stu_name[i]); // 存入姓名
        stu[0][i] = ids[i];                            // 存入學號
        stu[1][i] = comp[i];                           // 存入計概
        stu[2][i] = math[i];                           // 存入數學
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0;         // 計算平均
    }

    // --- 2. 輸出原始資料 (未排序) ---
    printf("==== 原始資料 (未排序) ====\n");
    printf("%-10s\t學號\t計概\t數學\t平均成績\n", "姓名");
    printf("----------------------------------------------------\n");
    for (i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.1f\n", stu1_name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    // --- 3. 執行排序 ---
    sort_array(stu1_name, stu, avg, SIZE);

    // --- 4. 輸出排序後資料 ---
    printf("\n==== 排序結果 (依平均分數降冪) ====\n");
    printf("%-10s\t學號\t計概\t數學\t平均成績\n", "姓名");
    printf("----------------------------------------------------\n");
    for (i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.1f\n", stu1_name[i], stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    return 0;
}