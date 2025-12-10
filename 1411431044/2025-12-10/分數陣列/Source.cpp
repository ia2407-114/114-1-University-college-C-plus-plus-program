#include <stdio.h>

// 定義陣列大小
#define SIZE 20

// 函式 main 開始執行程式
int main(void)
{
    // 原始學號陣列
    int id[SIZE] = { 12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 36, 37 };

    // 原始計概成績陣列
    int score[SIZE] = { 66, 67, 66, 70, 73, 74, 75, 75, 62, 32, 44, 46, 27, 12, 80, 63, 66, 90, 11, 66 };

    int pass, i;
    int hold_id, hold_score; // 用於交換的暫存變數

    printf("--- 排序前原始資料 ---\n");
    printf("%-8s%s\n", "學號", "成績");
    for (i = 0; i < SIZE; i++) {
        printf("%-8d%d\n", id[i], score[i]);
    }

    // --- 氣泡排序法實現 ---
    // 外層迴圈：控制排序的趟數
    for (pass = 1; pass < SIZE; pass++) {
        // 內層迴圈：控制每趟比較的次數
        // 陣列越往後越有序，所以 i < SIZE - pass
        for (i = 0; i < SIZE - pass; i++) {
            // 如果當前成績大於下一個成績 (score[i] > score[i + 1])
            // 則進行交換 (由小到大排序)
            if (score[i] > score[i + 1]) {

                // 1. 交換成績 (score)
                hold_score = score[i];
                score[i] = score[i + 1];
                score[i + 1] = hold_score;

                // 2. **同時交換**對應的學號 (id)
                // 這是確保數據配對關係不變的關鍵步驟
                hold_id = id[i];
                id[i] = id[i + 1];
                id[i + 1] = hold_id;
            }
        }
    }

    // --- 輸出排序結果 ---
    printf("\n--- 依照成績由小到大排序後結果 ---\n");
    printf("%-8s%s\n", "學號", "成績");

    // 遍歷並輸出兩個已排序的陣列
    for (i = 0; i < SIZE; i++) {
        printf("%-8d%d\n", id[i], score[i]);
    }

    return 0;
}