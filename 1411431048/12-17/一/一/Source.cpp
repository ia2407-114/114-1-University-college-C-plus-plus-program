#include <stdio.h>
#define SIZE 10


void sort_array(int id[], int computer[], int math[], float avg[], int n) {
    int i, j, temp;
    float temp1;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {

                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;

                temp = computer[j];
                computer[j] = computer[j + 1];
                computer[j + 1] = temp;

                temp = math[j];
                math[j] = math[j + 1];
                math[j + 1] = temp;

                temp1 = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp1;
            }
        }
    }
}


int find_mode(int arr[], int n) {
    int i, j;
    int max_count = 0;
    int mode = arr[0];

    for (i = 0; i < n; i++) {
        int current_count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                current_count++;
            }
        }
        if (current_count > max_count) {
            max_count = current_count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int student_id[SIZE] = { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 };
    int comp_sci_scores[SIZE] = { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 };
    int math_scores[SIZE] = { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 };

    float average_scores[SIZE];
    int i;

    
    for (i = 0; i < SIZE; i++) {
        average_scores[i] = (comp_sci_scores[i] + math_scores[i]) / 2.0;
    }

    printf("排序前：\n");
    printf("學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\t%.2f\n",
            student_id[i], comp_sci_scores[i],
            math_scores[i], average_scores[i]);
    }

    
    sort_array(student_id, comp_sci_scores, math_scores, average_scores, SIZE);

    printf("\n排序後：\n");
    printf("學號\t計概\t數學\t平均\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\t%.2f\n",
            student_id[i], comp_sci_scores[i],
            math_scores[i], average_scores[i]);
    }

    
    int comp_mode = find_mode(comp_sci_scores, SIZE);
    printf("\n計概成績的眾數為：%d\n", comp_mode);

    return 0;
}
