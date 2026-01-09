#include <stdio.h>
#define size 20

void sort(int a[], int b[], int temp) {
    for (unsigned int pass = 1; pass < size; ++pass) {
        for (int i = 0; i < size - 1; ++i) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
    ;
}

int main(void) {
    int id[size] = { 12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 36, 37 };
    int score[size] = { 66, 67, 66, 70, 73, 74, 75, 75, 62, 32, 44, 46, 27, 12, 80, 63, 66, 90, 11, 66 }, temp = 0;
    sort(score, id, size);
    printf(" id　　　score\n");
    for (int i = 0;i != size;i++)
        printf("%2d%8d\n", id[i], score[i]);
}