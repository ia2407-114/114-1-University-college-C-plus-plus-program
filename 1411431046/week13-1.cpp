#include <stdio.h>

#define SIZE 20

int main(void)
{
    int id[SIZE] = { 12,13,14,15,16,17,19,21,22,23,
                     24,26,27,28,29,31,32,33,36,37 };

    int score[SIZE] = { 66,67,66,70,73,74,75,75,62,32,
                        44,46,27,12,80,63,66,90,11,66 };

    int i, j, temp;

   
    printf("Original data:\n");
    printf("ID   score\n");
    for (i = 0; i < SIZE; i++) {
        printf("%4d   %3d\n", id[i], score[i]);
    }
    printf("\n");

    
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1 - i; j++) {
            if (score[j] > score[j + 1]) {
              
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;

                
                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;
            }
        }
    }

    
    printf("Sorted data (ascending order):\n");
    printf("ID   score\n");
    for (i = 0; i < SIZE; i++) {
        printf("%4d   %3d\n", id[i], score[i]);
    }

    return 0;
}