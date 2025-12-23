/* 題目1 :建立1個大小為3x10的二維整數陣列、一個浮點數陣列，
二維整數陣列的第1、2、3列分別存放學生 學號以及對應的計概、數學成績。浮點數陣列存放學生平均成績
寫一個排序副程式與眾數副程式，將二維整數陣列、浮點數陣列傳遞至副程式中，分別求出排序後的結果以及傳回眾數，
最後由主程式計算出每個學生的平均成績放到浮點數陣列印出所有結果。*/

#include <stdio.h>
#include <string.h>
#define SIZE 10

void copy1(char* s1, const char* s2)//字串複製
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

void sort_array(char name[][20], int stu[][SIZE], float avg[], int n) {

    int i, j, temp;
    float temp1;
    char temp_name[20];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {

                strcpy_s(temp_name, name[j]);
                strcpy_s(name[j], name[j + 1]);
                strcpy_s(name[j + 1], temp_name);

                temp = stu[0][j];
                stu[0][j] = stu[0][j + 1];
                stu[0][j + 1] = temp;

                temp = stu[1][j];
                stu[1][j] = stu[1][j + 1];
                stu[1][j + 1] = temp;

                temp = stu[2][j];
                stu[2][j] = stu[2][j + 1];
                stu[2][j + 1] = temp;

                temp1 = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp1;

            }
        }
    }
}

int find_mode(float arr[], int n) {
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
    const char* stu_name[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamond","Clubs","Spades" };

    char stu1_name[10][20];

    int stu[3][SIZE] = { { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 } ,
                         { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 } ,
                         { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 } };

    float average_scores[SIZE];

    int i;

    for (int i = 0; i < SIZE; i++)
        copy1(stu1_name[i], stu_name[i]);

    printf("姓名\t    學號\t    計概成績\t    數學成績\t    平均成績\n");
    for (i = 0; i < SIZE; i++) {
        average_scores[i] = (stu[1][i] + stu[2][i]) / 2.0;
    }

    for (i = 0; i < SIZE; i++) {
        printf("%s\t    %d\t\t    %d\t\t    %d\t\t    %f\t\n", stu1_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
    }
    printf("\n");

    sort_array(stu1_name, stu, average_scores, SIZE);
    int id_mode = find_mode(average_scores, SIZE);


    printf("姓名\t    學號\t    計概成績\t    數學成績\t    平均成績\n");

    for (i = 0; i < SIZE; i++) {
        printf("%s\t    %d\t\t    %d\t\t    %d\t\t    %f\t\n", stu1_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
    }

    printf("成績眾數: %d\n", id_mode);
    return 0;
}
