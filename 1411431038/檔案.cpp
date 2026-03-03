#include <stdio.h>

int main(void)
{
    FILE* cfPtr;   

    
    if (fopen_s(&cfPtr,"clients.txt", "w") != 0) {
        puts("File could not be opened");
    }
    else {
        puts("Enter the id, name, and math computer");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        char name[30];
        int id, math, computer;
        double avg; 
        


        
        while (scanf_s("%d%29s%d%d", &id, name, 30, &math, &computer)==4) {
            avg = (double)(math + computer) / 2;

            fprintf(cfPtr, "%d %s %d %d %.2f\n", id, name, math, computer, avg);
            printf("%s", "? ");
           
        }

        fclose(cfPtr); 
    }
}
