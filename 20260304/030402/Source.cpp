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

    fp = fopen("C:\\Users\\User\\Desktop\\20260304\\030401\\students.dat", "rb");

    if (fp == NULL) {
        puts("File could not be opened.");
        return 1;
    }

    struct student stu;
    printf("%-5s %-20s %-8s %-8s %-6s\n", "ID", "Name", "Math", "Comp", "Avg");

    while (fread(&stu, sizeof(struct student), 1, fp) == 1) {
        if (stu.id != 0) {
            stu.avg = (stu.math + stu.computer) / 2.0;
            printf("%-5d %-20s %-8d %-8d %-6.2f\n",
                stu.id, stu.name, stu.math, stu.computer, stu.avg);
        }
    }

    fclose(fp);
    return 0;
}