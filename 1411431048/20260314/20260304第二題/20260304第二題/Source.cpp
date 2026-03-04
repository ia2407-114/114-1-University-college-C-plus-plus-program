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
    FILE* fp;
    struct student stu;

    fp = fopen("student.dat", "rb");
    if (fp == NULL) {
        puts("File could not be opened.");
        return 1;
    }

    printf("ID   Name                 Computer  Math   Avg\n");
    printf("------------------------------------------------\n");

    while (fread(&stu, sizeof(struct student), 1, fp) == 1) {
        if (stu.id != 0) {  // 只印有資料的學生
            printf("%-4d %-20s %-8d %-6d %.2f\n",
                stu.id, stu.name, stu.computer, stu.math, stu.avg);
        }
    }

    fclose(fp);
    return 0;
}