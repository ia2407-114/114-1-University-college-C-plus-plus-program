#include <stdio.h>

#define SIZE 10   

void sort(int stu[][SIZE], float avg[])
{
    int i, j, temp;
    float temp1;

    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1 - i; j++) {
            if (avg[j] > avg[j + 1]) {
                temp1 = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp1;

                temp = stu[0][j];
                stu[0][j] = stu[0][j + 1];
                stu[0][j + 1] = temp;

                temp = stu[1][j];
                stu[1][j] = stu[1][j + 1];
                stu[1][j + 1] = temp;

                temp = stu[2][j];
                stu[2][j] = stu[2][j + 1];
                stu[2][j + 1] = temp;
            }
        }
    }
}

int mode(int score[])
{
    int maxCount = 0;
    int modeValue = score[0];

    for (int i = 0; i < SIZE; i++) {
        int count = 0;

        for (int j = 0; j < SIZE; j++) {
            if (score[i] == score[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            modeValue = score[i];
        }
    }

    return modeValue;
}

int main(void)
{
    int stu[3][SIZE] = {
        {11, 15, 13, 18, 12, 17, 14, 19, 16, 20},   // 學號
        {85, 92, 78, 85, 90, 85, 76, 95, 88, 85},   // 計概
        {70, 80, 75, 90, 85, 70, 82, 92, 88, 70}    // 數學
    };

    float avg[SIZE];

    for (int i = 0; i < SIZE; i++) {
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0;
    }

    printf("Original data:\n");
    printf("ID   Comp  Math  Avg\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d   %3d   %3d   %.2f\n",
            stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    int m = mode(stu[1]);
    printf("\n計概成績眾數為: %d\n", m);

    sort(stu, avg);

    printf("\nSorted data (by average):\n");
    printf("ID   Comp  Math  Avg\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d   %3d   %3d   %.2f\n",
            stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    return 0;
}