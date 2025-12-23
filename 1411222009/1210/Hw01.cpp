//題目1 :建立兩個大小為10的整數陣列，分別存放學生學號以對應的計概成績。
//請使用氣泡排序，將兩個陣列依照計概成績由小到大排序，在印出排序後的結果(學號、成績)。
#include <stdio.h>
#define SIZE 20

int main(void)
{
    int id[SIZE] = { 12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37 };
    int score[SIZE] = { 66,67,66,70,73,74,75,75,62,32,44,46,27,12,80,63,66,90,11,66 };
    int i;

    for (int pass = 1; pass < SIZE; pass++) {
        for (int i = 0; i < SIZE - pass; i++) {

            if (score[i] > score[i + 1]) {

                
                int tempScore = score[i];
                score[i] = score[i + 1];
                score[i + 1] = tempScore;

                
                int tempId = id[i];
                id[i] = id[i + 1];
                id[i + 1] = tempId;
            }
        }
    }

    
    printf("學號\t成績\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d      %d\n", id[i], score[i]);
    }

}