#include <stdio.h>
#define id_size 20
#define score_size 20

int main(void) {
	int id[id_size] = { 12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 36, 37 };
	int score[score_size] = { 66, 67, 66, 70, 73, 74, 75, 75, 62, 32, 44, 46, 27, 12, 80, 63, 66, 90, 11, 66 },temp;
    for (unsigned int pass = 1; pass < id_size; ++pass) { 
        for (int i = 0; i < id_size - 1; ++i) {           
            if (score[i] < score[i + 1]) {
                temp = score[i];
                score[i] = score[i + 1];
                score[i + 1] = temp;
                temp = id[i];
                id[i] = id[i + 1];
                id[i + 1] = temp;
            }
        }
    }
    printf(" id　　　score\n");
    for (int i = 0;i != id_size;i++)
        printf("%2d%8d\n", id[i], score[i]);
}