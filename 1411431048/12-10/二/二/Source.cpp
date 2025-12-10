#include <stdio.h>

#define SIZE 10  


void Scores(int id[], int score[], int size);

int main(void)
{
    
    int id[SIZE] = { 12,13,14,15,16,17,19,21,22,23 };
    int score[SIZE] = { 66,67,66,70,73,74,75,75,62,32 };

    
    Scores(id, score, SIZE);

    
    printf("ID   Score\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d   %3d\n", id[i], score[i]);
    }

    return 0;
}

void Scores(int id[], int score[], int size)
{
    int tempScore, tempID;

    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {
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
}
