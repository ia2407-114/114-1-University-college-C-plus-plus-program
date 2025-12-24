#include <stdio.h>
#include <string.h>

#define SIZE 10

void copy1(char* s1, const char* s2) {
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

void swap_float(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swap_int(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
    
void swap_string(char s1[], char s2[]) {
    char temp[20];
    copy1(temp, s1);
    copy1(s1, s2);
    copy1(s2, temp);
}

void sort_students(char name[][20], int stu[][3], float avg[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
                swap_float(&avg[j], &avg[j + 1]);
                swap_string(name[j], name[j + 1]);
                for (int k = 0; k < 3; k++) {
                    swap_int(&stu[j][k], &stu[j + 1][k]);
                }
            }
        }
    }
}

int main() {
    const char* temp_names[SIZE] = {
        "Danny", "Mary", "Jimmy", "Peter", "Sue",
        "John", "Hearts", "Diamonds", "Clubs", "Spades"
    };

    char name[SIZE][20];
    for (int i = 0; i < SIZE; i++) {
        copy1(name[i], temp_names[i]);
    }

    int stu[SIZE][3] = {
        {11, 85, 70}, {15, 92, 80}, {13, 78, 75}, {18, 85, 90}, {12, 90, 85},
        {17, 85, 70}, {14, 76, 82}, {19, 95, 92}, {16, 88, 88}, {20, 85, 70}
    };

    float avg[SIZE];

    for (int i = 0; i < SIZE; i++) {
        avg[i] = (stu[i][1] + stu[i][2]) / 2.0;
    }

    printf("排序前：\n");
    printf("%-10s\t%-8s\t%-8s\t%-8s\t%-8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (int i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n", name[i], stu[i][0], stu[i][1], stu[i][2], avg[i]);
    }

    sort_students(name, stu, avg, SIZE);

    printf("\n排序後（依平均成績由大到小）：\n");
    printf("%-10s\t%-8s\t%-8s\t%-8s\t%-8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (int i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n", name[i], stu[i][0], stu[i][1], stu[i][2], avg[i]);
    }

    return 0;
}