#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* cfPtr;

    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        puts("File could not be opened");
    }
    else {
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        int id, math, computer;
        char name[30]; 
        double avg;

        scanf("%d%s%d%d", &id, name, &math, &computer);

        while (!feof(stdin)) {
            avg = ((float)math + computer) / 2;
            fprintf(cfPtr, "%d %s %d %d %lf\n", id, name, math, computer, avg);
            printf("%s", "? ");
            scanf("%d%s%d%d", &id, name, &math, &computer);
        }

        fclose(cfPtr);
    }
}
