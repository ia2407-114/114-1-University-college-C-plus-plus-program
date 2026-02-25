#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct student {
    int id;           
    char name[20];    
    int computer;     
    int math;         
    double avg;       
};

int main(void)
{
    FILE* sfPtr;

    
    if ((sfPtr = fopen("student.dat", "rb+")) == NULL) {
        puts("File could not be opened.");
        return 1;
    }
    else {
        struct student stu = { 0, "", 0, 0, 0.0 };

        for (int i = 1; i <= 3; i++) {
            printf("輸入第 %d 位學生資料\n", i);
            printf("學號 (1-100): ");
            scanf("%d", &stu.id);

           
            printf("姓名 計概 數學: ");
            scanf("%19s %d %d", stu.name, &stu.computer, &stu.math);

            
            stu.avg = (stu.computer + stu.math) / 2.0;

            
            fseek(sfPtr, (stu.id - 1) * sizeof(struct student), SEEK_SET);

            
            fwrite(&stu, sizeof(struct student), 1, sfPtr);

            printf("第 %d 位學生資料已存入 student.dat\n\n", i);
        }

        fclose(sfPtr);
        puts("3筆學生資料已全部寫入 student.dat");
    }

    return 0;
}