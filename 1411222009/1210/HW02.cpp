//題目2:請參考以下程式碼，建立兩個大小為20的整數陣列，分別存放學生學號以對應的計概成績。
// 寫一個排序副程式，將兩個陣列傳遞至副程式中，依照計概成績由小到大排序，由主程式印出排序後的結果。
//id[]學號 : {12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 36, 37}
//score[]成績 : {66, 67, 66, 70, 73, 74, 75, 75, 62, 32, 44, 46, 27, 12, 80, 63, 66, 90, 11, 66

#include <stdio.h>
#define SIZE 20

void rank(int id[], int score[], int size);

int main(void)
{
    int id[SIZE] = { 12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 36, 37 };
    int score[SIZE] = { 66, 67, 66, 70, 73, 74, 75, 75, 62, 32, 44, 46, 27, 12, 80, 63, 66, 90, 11, 66 };
    int i;

    printf("排序前的成績：\n");
    printf("id\t score\t\n");

    for ( i = 0; i < SIZE; ++i) {
        printf("%d\t %4d\n", id[i], score[i]);
    }

	rank(id, score, SIZE);

    printf("\n");
    printf("排序後的成績：\n");
    printf("id\t score\t\n");

    for (i = 0; i < SIZE; ++i) {
        printf("%d\t %4d\n", id[i], score[i]);
    }
}

void rank(int id[], int score[], int size) {

    int i, temp;

    for (int pass = 1; pass < size; ++pass) {

        for (i = 0; i < size - 1; ++i) {

            if (score[i] > score[i + 1]) {

                temp = score[i];
                score[i] = score[i + 1];
                score[i + 1] = temp;

                temp = id[i];
                id[i] = id[i + 1];
                id[i + 1] = temp;
            }
        }
    }
}
