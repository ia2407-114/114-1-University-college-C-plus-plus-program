#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct student {
    int id;           
    char name[20];    
    int computer, math; 
    double avg;       
};

int main(void)
{
    FILE* cfPtr;
    struct student s; 


    if ((cfPtr = fopen("students.dat", "rb+")) == NULL) {
        puts("檔案無法開啟，請確認空白檔案已建立。");
    }
    else {
        printf("--- 開始存入 3 筆學生資料 ---\n");

        for (int i = 1; i <= 3; i++) {

            printf("\n第 %d 位學生 - 請輸入學號 (1-100): ", i);
            scanf("%d", &s.id);

            printf("請輸入姓名: ");
            scanf("%19s", s.name);

            printf("請輸入電腦與數學成績: ");
            scanf("%d%d", &s.computer, &s.math);

            s.avg = (s.computer + s.math) / 2.0;


            fseek(cfPtr, (s.id - 1) * sizeof(struct student), SEEK_SET);

   
            if (fwrite(&s, sizeof(struct student), 1, cfPtr) == 1) {
                printf("學號 %d 的資料已成功存入檔案。\n", s.id);
            }
            else {
                printf("寫入錯誤！\n");
            }
        }

        fclose(cfPtr); 
        printf("\n資料輸入完畢，檔案已儲存。\n");
    }

    return 0;
}