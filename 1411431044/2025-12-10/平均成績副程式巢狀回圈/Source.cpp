#include <stdio.h>

#define SIZE 20           // 陣列大小為 20
#define MAX_SCORE 101     // 分數範圍 0-100，頻率陣列大小為 101

// 函式原型 (Function Prototypes)

// 排序副程式：根據 cs_scores 進行同步排序
void bubbleSort(int ids[], int cs_scores[], int math_scores[], int arraySize);

// 眾數副程式：找出陣列中的眾數，並傳回該數值
int findMode(int scores[], int arraySize);

// --- 主函式 (main Function) ---
int main(void)
{
    // 陣列初始化
    int id[SIZE] = { 12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 36, 37 };
    int cs_score[SIZE] = { 66, 67, 66, 70, 73, 74, 75, 75, 62, 32, 44, 46, 27, 12, 80, 63, 66, 90, 11, 66 };
    // 虛擬數學成績 (由系統創建)
    int math_score[SIZE] = { 70, 65, 80, 75, 72, 88, 60, 92, 55, 40, 50, 52, 30, 20, 95, 60, 70, 98, 35, 65 };

    float avg_score[SIZE]; // 存放平均成績的浮點數陣列
    int i, modeValue;

    // 1. 計算平均成績並存入浮點數陣列
    for (i = 0; i < SIZE; i++) {
        // 使用 2.0 確保進行浮點數除法
        avg_score[i] = (cs_score[i] + math_score[i]) / 2.0;
    }

    // --- 輸出排序前原始資料 ---
    printf("--- 排序前原始資料 (未排序) ---\n");
    printf("%-8s%-8s%-8s%s\n", "學號", "計概", "數學", "平均");
    for (i = 0; i < SIZE; i++) {
        printf("%-8d%-8d%-8d%.2f\n", id[i], cs_score[i], math_score[i], avg_score[i]);
    }
    printf("----------------------------------------------------\n");

    // 2. 呼叫排序副程式：依計概成績由小到大排序
    bubbleSort(id, cs_score, math_score, SIZE);

    // 3. 呼叫眾數副程式：求計概成績的眾數
    modeValue = findMode(cs_score, SIZE);

    // 4. 主程式印出排序後結果與眾數
    printf("--- 依照計概成績由小到大排序後結果 ---\n");
    printf("%-8s%-8s%-8s%s\n", "學號", "計概", "數學", "平均");

    // 排序後必須重新計算平均或再次同步交換浮點數陣列
    // 這裡選擇重新計算以確保數據精確性
    for (i = 0; i < SIZE; i++) {
        avg_score[i] = (cs_score[i] + math_score[i]) / 2.0;
        printf("%-8d%-8d%-8d%.2f\n", id[i], cs_score[i], math_score[i], avg_score[i]);
    }

    printf("\n--- 統計結果 ---\n");
    printf("計概成績的眾數 (Mode) 為: %d\n", modeValue);

    return 0;
}

// --- 排序副程式的定義 (bubbleSort) ---
// 根據 cs_scores 排序，同步移動 ids 和 math_scores。
void bubbleSort(int ids[], int cs_scores[], int math_scores[], int arraySize)
{
    int pass, i;
    int hold_id, hold_cs, hold_math; // 用於交換的三個暫存變數

    // 氣泡排序法主迴圈
    for (pass = 1; pass < arraySize; pass++) {
        for (i = 0; i < arraySize - pass; i++) {

            // 依計概成績由小到大排序
            if (cs_scores[i] > cs_scores[i + 1]) {

                // 1. 交換計概成績
                hold_cs = cs_scores[i];
                cs_scores[i] = cs_scores[i + 1];
                cs_scores[i + 1] = hold_cs;

                // 2. 同步交換學號
                hold_id = ids[i];
                ids[i] = ids[i + 1];
                ids[i + 1] = hold_id;

                // 3. 同步交換數學成績
                hold_math = math_scores[i];
                math_scores[i] = math_scores[i + 1];
                math_scores[i + 1] = hold_math;
            }
        }
    }
}

// --- 眾數副程式的定義 (findMode) ---
// 找出分數陣列中的眾數 (假設分數範圍在 0-100)
int findMode(int scores[], int arraySize)
{
    // 頻率陣列：用來計數 0 到 100 的分數出現次數
    int frequency[MAX_SCORE] = { 0 };
    int i, maxFreq = 0, modeValue = -1;

    // 1. 計算每個分數的頻率
    for (i = 0; i < arraySize; i++) {
        if (scores[i] >= 0 && scores[i] < MAX_SCORE) {
            frequency[scores[i]]++; // 遞增對應分數的計數器
        }
    }

    // 2. 尋找最高頻率及其對應的分數 (眾數)
    for (i = 0; i < MAX_SCORE; i++) {
        if (frequency[i] > maxFreq) {
            maxFreq = frequency[i]; // 更新最高頻率
            modeValue = i;          // 儲存對應的分數 (即眾數)
        }
    }

    return modeValue; // 傳回找到的眾數
}