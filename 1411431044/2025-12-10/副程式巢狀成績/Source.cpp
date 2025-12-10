#include <stdio.h>


#define SIZE 20


int main(void)
{
    int id[SIZE] = { 12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 36, 37 };


    int score[SIZE] = { 66, 67, 66, 70, 73, 74, 75, 75, 62, 32, 44, 46, 27, 12, 80, 63, 66, 90, 11, 66 };

    int pass, i;
    int hold_id, hold_score; 


    printf("--- 排序前原始資料 ---\n");
    printf("%-8s%s\n", "學號", "成績");
    for (i = 0; i < SIZE; i++) {
        printf("%-8d%d\n", id[i], score[i]);
    }



    for (pass = 1; pass < SIZE; pass++) {

        for (i = 0; i < SIZE - pass; i++) {


            if (score[i] > score[i + 1]) {


                hold_score = score[i];
                score[i] = score[i + 1];
                score[i + 1] = hold_score;

               
                hold_id = id[i];
                id[i] = id[i + 1];
                id[i + 1] = hold_id;
            }
        }
    }

    printf("\n--- 依照成績由小到大排序後結果 ---\n");
    printf("%-8s%s\n", "學號", "成績");

    for (i = 0; i < SIZE; i++) {
        printf("%-8d%d\n", id[i], score[i]);
    }

    return 0;
}