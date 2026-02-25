#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 定義學生資料結構
struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

int main(void) {
    FILE* cfPtr; // 宣告檔案指標

    // 以 "wb" 模式開啟（二進位寫入），會覆蓋已存在的同名檔案
    if ((cfPtr = fopen("students.dat", "wb")) == NULL) {
        puts("檔案無法開啟。");
    }
    else {
        // 建立一個初始值為 0 或空字串的空白結構實體
        struct student blankStudent = { 0, "", 0, 0, 0.0 };

        // 循序寫入 100 筆空白記錄
        for (unsigned int i = 1; i <= 100; ++i) {
            // fwrite(資料來源位址, 每個結構的大小, 寫入幾筆, 檔案指標)
            fwrite(&blankStudent, sizeof(struct student), 1, cfPtr);
        }

        printf("成功建立 100 筆空白學生資料記錄。\n");
        fclose(cfPtr); // 關閉檔案
    }

    return 0;
}