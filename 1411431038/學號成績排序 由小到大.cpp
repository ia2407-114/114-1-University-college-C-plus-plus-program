#include <stdio.h>
#define SIZE 22

int main(void)
{
    int id[SIZE] = { 12,13,14,15,16,17,18,19,20,21,22,23,24,26,27,28,29,31,32,33,36,37}, temp;
    int score[SIZE] = { 66,67,66,70,73,74,75,75,62,32,44,46,27,12,80,63,66,90,11,66 }, change;

    puts("Data items in original order");


    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", id[i]);
    }
    puts("");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", score[i]);
    }
                   
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

 
        for (size_t i = 0; i < SIZE - 1; ++i) {
        
            if (score[i] > score[i + 1]) {
                change = score[i];
                temp = id[i];
                score[i] = score[i + 1];
                id[i] = id[i + 1];
                id[i + 1] = temp;
                score[i + 1] = change;
            }
        }
    }

    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", score[i]);
    }
    puts("");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", id[i]);
    }

    puts("");
}