/*題目2，合併上面程式碼，修改為輸入學號鍵值，並且使用二元搜尋副程式找出陣列中的學號(事先已經有排序過)，並傳回學號所在的陣列位置，並且印出陣列位置所存放的計算機概論、數學與平均成績*/

#include <stdio.h>
#include <string.h>
#define SIZE 10

int binarySearch(const int b[], int searchKey, size_t low, size_t high);

void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

void swap(int* ptr1, int* ptr2) {

    int hold = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = hold;
}

void swap_f(float* ptr1, float* ptr2) {

    float hold = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = hold;
}

void sort_array(char stu_name[][20], int stu[][SIZE], float avg[], int n) {     // 泡沫排序法
    int i, j;
    char temp_name[20];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {      //根據每個學生的平均分數，由大到小排序

                copy1(temp_name, stu_name[j]);      //字串陣列名稱就是記憶體位置，不用加 &
                copy1(stu_name[j], stu_name[j + 1]);
                copy1(stu_name[j + 1], temp_name);

                swap(&stu[0][j], &stu[0][j + 1]);
                swap(&stu[1][j], &stu[1][j + 1]);
                swap(&stu[2][j], &stu[2][j + 1]);
                swap_f(&avg[j], &avg[j + 1]);

            }
        }
    }
}

int binarySearch(const int b[], int searchKey, size_t low, size_t high){
    while (low <= high) {

        size_t middle = (low + high) / 2;

        if (searchKey == b[middle]) {
            return middle;
        }

        else if (searchKey < b[middle]) {
            high = middle - 1;     
        }

        else {
            low = middle + 1; 
        }
    }
    return -1;
}

int main() {
    const char* name[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamonds","Clubs","Spades" };
    char stu_name[10][20];
    for (int i = 0; i < SIZE; i++)
        copy1(stu_name[i], name[i]);

    int stu[3][SIZE] = { { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },
                         { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 },
                         { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 } };

    float average_scores[SIZE];     // 計算每個學生的平均成績放入浮點數陣列中
    for (int i = 0; i < SIZE; i++) {        
        average_scores[i] = (float)(stu[1][i] + stu[2][i]) / 2.0;
    }


    printf("Enter integer search key: ");
    int searchKey, index;
    scanf_s("%d", &searchKey);
    index = binarySearch(stu[0], searchKey, 0, 9);      // 資料, 輸入鍵, 範圍大小
    printf("搜尋結果: 計算機概論%d, 數學%d, 平均%f", stu[1][index], stu[2][index], average_scores[index]);


    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
    }

    sort_array(stu_name, stu, average_scores, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
    }

    return 0;
}

