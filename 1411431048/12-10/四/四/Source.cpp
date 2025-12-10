#include <stdio.h>

#define SIZE 10


void sortScores(int id[], int scoreCS[], int scoreMath[], int size);
int findMode(int arr[], int size);

int main(void)
{
   
    int id[SIZE] = { 12,13,14,15,16,17,19,21,22,23 };
    int scoreCS[SIZE] = { 66,67,66,70,73,74,75,75,62,32 };
    int scoreMath[SIZE] = { 80,65,78,90,70,85,60,72,88,50 };
    float avg[SIZE]; 

   
    sortScores(id, scoreCS, scoreMath, SIZE);

    
    for (int i = 0; i < SIZE; i++) {
        avg[i] = (scoreCS[i] + scoreMath[i]) / 2.0;
    }

    
    printf("ID   CS  Math  Avg\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d   %3d   %3d  %.2f\n", id[i], scoreCS[i], scoreMath[i], avg[i]);
    }

    
    int modeCS = findMode(scoreCS, SIZE);
    int modeMath = findMode(scoreMath, SIZE);
    printf("\n計概成績眾數: %d\n", modeCS);
    printf("數學成績眾數: %d\n", modeMath);

    return 0;
}


void sortScores(int id[], int scoreCS[], int scoreMath[], int size)
{
    int tempID, tempCS, tempMath;

    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {
            if (scoreCS[i] > scoreCS[i + 1]) {
                
                tempCS = scoreCS[i];
                scoreCS[i] = scoreCS[i + 1];
                scoreCS[i + 1] = tempCS;

                
                tempMath = scoreMath[i];
                scoreMath[i] = scoreMath[i + 1];
                scoreMath[i + 1] = tempMath;

                
                tempID = id[i];
                id[i] = id[i + 1];
                id[i + 1] = tempID;
            }
        }
    }
}


int findMode(int arr[], int size)
{
    int maxCount = 0;
    int mode = arr[0];

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}
