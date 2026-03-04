#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

int main(void) {
    FILE* cfPtr = NULL;
    errno_t err;

    // 保持你原有的 if 賦值格式，但修正 fopen_s 的參數順序
    // 並且指向「第二題」資料夾
    if ((err = fopen_s(&cfPtr, "..\\第二題\\students.dat", "rb+")) != 0) {
        puts("File could not be opened.");
    }
    else {
        struct student s = { 0, "", 0, 0, 0.0 };

        printf("%s", "Enter account number (1 to 100, 0 to end input): ");
        scanf_s("%d", &s.id);

        while (s.id != 0) {
            printf("%s", "Enter name, computer, math: ");

            // scanf_s 必須加大小，這是安全性函數的硬性規定
            scanf_s("%s", s.name, (unsigned int)sizeof(s.name));
            scanf_s("%d", &s.computer);
            scanf_s("%d", &s.math);

            s.avg = (s.computer + s.math) / 2.0;

            fseek(cfPtr, (s.id - 1) * sizeof(struct student), SEEK_SET);
            fwrite(&s, sizeof(struct student), 1, cfPtr);

            printf("%s", "Enter account number: ");
            scanf_s("%d", &s.id);
        }

        fclose(cfPtr);
    }
    return 0;
}