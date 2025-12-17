#include <stdio.h>
#define SIZE 10

// 排序副程式：依據平均分數排序，並同步移動 stu 二維陣列中的資料
void sort_array(int stu[3][SIZE], float avg[], int n) {
    int i, j, k, temp;
    float temp_;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
                // 交換平均分數
                temp_ = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp_;

                // 同步交換 stu 二維陣列中的學號與各科成績
                for (k = 0; k < 3; k++) {
                    temp = stu[k][j];
                    stu[k][j] = stu[k][j + 1];
                    stu[k][j + 1] = temp;
                }
            }
        }
    }
}

// 眾數副程式
float find_mode(float arr[], int n) {
    int i, j;
    int max_count = 0;
    float mode = arr[0];

    for (i = 0; i < n; i++) {
        int current_count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                current_count++;
            }
        }
        if (current_count > max_count) {
            max_count = current_count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    // 原始數據
    int ids[SIZE] = { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 };
    int comp[SIZE] = { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 };
    int math[SIZE] = { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 };

    int stu[3][SIZE];
    float avg[SIZE];
    int i;

    // 將資料存入 stu 二維陣列並計算平均
    for (i = 0; i < SIZE; i++) {
        stu[0][i] = ids[i];
        stu[1][i] = comp[i];
        stu[2][i] = math[i];
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0;
    }

    // --- 輸出原始資料（未排序） ---
    printf("==== 原始資料（未排序） ====\n");
    printf("學號\t計概\t數學\t平均成績\n");
    printf("------------------------------------\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\t%.1f\n", stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }
    printf("\n");

    // 執行排序與尋找眾數
    sort_array(stu, avg, SIZE);
    float avg_mode = find_mode(avg, SIZE);

    // --- 輸出排序後結果 ---
    printf("==== 排序後結果（依平均成績） ====\n");
    printf("學號\t計概\t數學\t平均成績\n");
    printf("------------------------------------\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\t%.1f\n", stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    printf("\n平均成績的眾數為：%.1f\n", avg_mode);

    return 0;
}