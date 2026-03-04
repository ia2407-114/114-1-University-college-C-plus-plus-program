#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100   

struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

int main(void)
{
    FILE* fp;

    if ((fp = fopen("students.dat", "rb+")) == NULL) {

        fp = fopen("students.dat", "wb+");

        if (fp == NULL) {
            puts("File could not be created.");
            return 1;
        }

        struct student empty = { 0, "", 0, 0, 0.0 };

        for (int i = 0; i < SIZE; i++) {
            fwrite(&empty, sizeof(struct student), 1, fp);
        }

        puts("Empty file created.");
    }

    struct student s = { 0, "", 0, 0, 0.0 };

    printf("Enter student id (1~100, 0 to stop): ");
    scanf("%d", &s.id);

    while (s.id != 0) {

        printf("Enter name, computer score, math score: ");
        scanf("%19s %d %d", s.name, &s.computer, &s.math);

        s.avg = (s.computer + s.math) / 2.0;

        fseek(fp, (s.id - 1) * sizeof(struct student), SEEK_SET);

        fwrite(&s, sizeof(struct student), 1, fp);

        printf("Enter student id: ");
        scanf("%d", &s.id);
    }

    fclose(fp);
    return 0;
}