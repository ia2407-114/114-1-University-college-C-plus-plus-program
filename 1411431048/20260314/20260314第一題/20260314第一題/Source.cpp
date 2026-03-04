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
    struct student stu = { 0, "", 0, 0, 0.0 };

    fp = fopen("student.dat", "rb");
    if (fp == NULL) {
        fp = fopen("student.dat", "wb");
        for (int i = 0; i < 100; i++) {
            fwrite(&stu, sizeof(struct student), 1, fp);
        }
        fclose(fp);
    }

    fp = fopen("student.dat", "rb+");
    if (fp == NULL) {
        puts("File could not be opened.");
        return 1;
    }

    printf("Enter student id (1~100, 0 to end): ");
    scanf("%d", &stu.id);

    while (stu.id != 0) {
        if (stu.id < 1 || stu.id > 100) {
            printf("Invalid id! Enter 1~100: ");
            scanf("%d", &stu.id);
            continue;
        }

        printf("Enter name, computer score, math score: ");
        scanf("%19s%d%d", stu.name, &stu.computer, &stu.math);

        stu.avg = (stu.computer + stu.math) / 2.0;

        fseek(fp, (stu.id - 1) * sizeof(struct student), SEEK_SET);
        fwrite(&stu, sizeof(struct student), 1, fp);

        printf("Enter student id (1~100, 0 to end): ");
        scanf("%d", &stu.id);
    }

    fclose(fp);
    printf("Data written successfully.\n");
}