#include <stdio.h>
#define SIZE 10

void sort_array(int data[3][SIZE], float avg[], int n) {
    int i, j, k;
    int temp;
    float tempf;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
                tempf = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = tempf;

                for (k = 0; k < 3; k++) {
                    temp = data[k][j];
                    data[k][j] = data[k][j + 1];
                    data[k][j + 1] = temp;
                }
            }
        }
    }
}

float find_mode(float arr[], int n) {
    int i, j;
    int max_count = 0;
    float mode = arr[0];

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int student[3][SIZE] = {
        {11, 15, 13, 18, 12, 17, 14, 19, 16, 20},
        {85, 92, 78, 85, 90, 85, 76, 95, 88, 85},
        {70, 80, 75, 90, 85, 70, 82, 92, 88, 70}
    };

    float avg[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        avg[i] = (student[1][i] + student[2][i]) / 2.0;
    }

    printf("排序前：\n");
    printf("學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\t%.1f\n",student[0][i], student[1][i], student[2][i], avg[i]);
    }

    sort_array(student, avg, SIZE);

    float mode = find_mode(avg, SIZE);

    printf("\n排序後：\n");
    printf("學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\t%.1f\n",
            student[0][i], student[1][i], student[2][i], avg[i]);
    }

    printf("\n平均成績的眾數為：%.1f\n", mode);

    return 0;
}