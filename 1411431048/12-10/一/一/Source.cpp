#include <stdio.h>
#define SIZE 20


int main(void)
{

    int id[SIZE] = { 12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37 };
    int score[SIZE] = { 66,67,66,70,73,74,75,75,62,32,44,46,27,12,80,63,66,90,11,66 };
    int tempID, tempScore,i;

    puts("Data items in original order");

  
    for ( i = 0; i < SIZE; ++i) {
        printf("%4d%4d\n", id[i], score[i]);
    }

                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

         
        for ( i = 0; i < SIZE - 1; ++i) {

                     
            if (score[i] > score[i + 1]) {
                tempScore = score[i];
                score[i] = score[i + 1];
                score[i + 1] = tempScore;
                tempID = id[i];
                id[i] = id[i + 1];
                id[i + 1] = tempID;
            }
        }
    }

    puts("\nData items in ascending order");

    
    for ( i = 0; i < SIZE; ++i) {
        printf("%4d%4d\n", id[i], score[i]);
    }

    puts("");
}