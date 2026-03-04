#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

int main(void) {
    FILE* cfPtr = NULL;
    errno_t err;

    // 依照你的目錄結構：從 4-2 跳出一層，進入 4-1 尋找檔案
    err = fopen_s(&cfPtr, "..\\4-1\\students.dat", "rb");

    if (err != 0 || cfPtr == NULL) {
        // 如果還是找不到，嘗試看看不帶路徑的寫法
        err = fopen_s(&cfPtr, "students.dat", "rb");
    }

    if (err != 0 || cfPtr == NULL) {
        printf("檔案無法開啟。錯誤代碼：%d\n", err);
        puts("請檢查：1. 4-1 題是否已執行過？ 2. 檔案是否在 4-1 資料夾內？");
    }
    else {
        // 印出表頭 (對齊格式參考 fig11_14.c)
        printf("%-10s%-20s%-10s%-10s%-10s\n", "ID", "Name", "Computer", "Math", "Average");

        struct student s = { 0, "", 0, 0, 0.0 };

        // 循序讀取 (Sequential Read)
        while (fread(&s, sizeof(struct student), 1, cfPtr) == 1) {
            // 只印出在 4-1 題中真正輸入過資料 (ID != 0) 的學生
            if (s.id != 0) {
                printf("%-10d%-20s%-10d%-10d%-10.2f\n",
                    s.id, s.name, s.computer, s.math, s.avg);
            }
        }
        fclose(cfPtr);
    }

    system("pause");
    return 0;
}