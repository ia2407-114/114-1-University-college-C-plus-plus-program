#include <stdio.h>

int main(void)
{
    FILE* cfPtr;
    // 使用 fopen_s 開啟檔案
    if (fopen_s(&cfPtr, "clients.txt", "w") != 0) {
        puts("File could not be opened");
    }
    else {
        puts("Enter the id, name, math, and computer score.");
        puts("Enter EOF (Ctrl+Z) to end input.");

        unsigned int id, math, computer;
        char name[30];
        double avg;

        printf("%s", "? ");

        // 關鍵：將 scanf_s 放在 while 條件中
        // 只要 scanf_s 沒讀到完整的 4 個變數（包含遇到 Ctrl+Z），就會回傳非 4 的值，迴圈立即停止
        while (1) {
            printf("%s", "? ");

            // 先只讀取 ID
            if (scanf_s("%u", &id) != 1 || id == 0) {
                break; // 如果輸入不是數字，或者輸入 0，就直接結束寫入
            }

            // ID 正常且不為 0，才讀取剩下的資料
            if (scanf_s("%29s %u %u", name, (unsigned)sizeof(name), &math, &computer) != 3) {
                break;
            }

            avg = ((double)computer + math) / 2.0;
            fprintf(cfPtr, "%u %s %u %u %.2f\n", id, name, math, computer, avg);
        }
        fclose(cfPtr);
        puts("\nFile closed. Data saved.");
    }
    return 0;
}