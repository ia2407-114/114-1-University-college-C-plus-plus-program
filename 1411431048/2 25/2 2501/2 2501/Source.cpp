// Creating a sequential file for 3 students
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* cfPtr;   // file pointer

    // 開啟檔案
    if ((cfPtr = fopen("students.txt", "w")) == NULL) {
        puts("File could not be opened");
    }
    else {
        char name[30];       // 姓名
        char studentID[20];  // 學號
        int math;            // 數學成績
        int computer;        // 計概成績
        double average;      // 平均成績

        puts("請輸入3位學生的資料：");

        // 固定輸入3筆
        for (int i = 1; i <= 3; i++) {

            printf("\n第%d位學生\n", i);
            printf("姓名 學號 數學 計概: ");
            scanf("%s %s %d %d",
                name, studentID, &math, &computer);

            // 計算平均
            average = (math + computer) / 2.0;

            // 寫入檔案
            fprintf(cfPtr, "%s %s %d %d %.2f\n",
                name, studentID, math, computer, average);
        }

        fclose(cfPtr);  // 關閉檔案
        puts("\n資料已成功寫入 students.txt");
    }

    return 0;
}