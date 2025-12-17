#include <stdio.h>

#define SIZE 10

void sort_array(int stu[3][SIZE], float avg[], int n) {
    int i, j, k, temp;
    float tempf;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {

                for (k = 0; k < 3; k++) {
                    temp = stu[k][j];
                    stu[k][j] = stu[k][j + 1];
                    stu[k][j + 1] = temp;
                }

                tempf = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = tempf;
            }
        }
    }
}

float find_mode(float avg[], int n) {
    int i, j;
    int max_count = 0;
    int mode2 = (int)(avg[0] * 2 + 0.5f); 

    for (i = 0; i < n; i++) {
        int current2 = (int)(avg[i] * 2 + 0.5f);
        int count = 0;

        for (j = 0; j < n; j++) {
            int other2 = (int)(avg[j] * 2 + 0.5f);
            if (other2 == current2) count++;
        }

        if (count > max_count) {
            max_count = count;
            mode2 = current2;
        }
    }

    return mode2 / 2.0f; 
}

int main() {
    int stu[3][SIZE] = {
        {11, 15, 13, 18, 12, 17, 14, 19, 16, 20}, 
        {85, 92, 78, 85, 90, 85, 76, 95, 88, 85}, 
        {70, 80, 75, 90, 85, 70, 82, 92, 88, 70}  
    };

    float avg[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        avg[i] = (stu[1][i] + stu[2][i]) / 2.0f;
    }

    printf("=== 排序前 ===\n");
    printf("學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\t%.1f\n", stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    sort_array(stu, avg, SIZE);

    printf("\n=== 排序後（依平均由大到小）===\n");
    printf("學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\t%.1f\n", stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }

    {
        float mode = find_mode(avg, SIZE);
        printf("\n平均成績的眾數：%.1f\n", mode);
    }

    return 0;
}
