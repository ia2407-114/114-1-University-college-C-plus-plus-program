#include <stdio.h>

int main(void)
{
    FILE* cfPtr;
    if (fopen_s(&cfPtr, "clients.txt", "w") != 0) {
        puts("File could not be opened");
    }
    else {
        puts("Enter the id, name, computer, math");
        puts("Enter EOF (Ctrl+Z) to end input.");

        unsigned int id;
        char name[30];
        int math, computer;
        float avg;
        printf("? ");
        while (scanf_s("%d %29s %d %d", &id, name, 30, &computer, &math) == 4) {
            avg = ((float)computer + math) / 2;
            fprintf(cfPtr, "%d %s %d %d %.2f\n", id, name, computer, math, avg);
            printf("? ");
        }
        fclose(cfPtr);
    }

    return 0;
}