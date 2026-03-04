
#include <stdio.h>

           
struct student {
    int id;
    char name[20];
    int math;
    int computer;
    double avg;
};


int main(void)
{
    FILE* cfPtr; 

    
    if (fopen_s(&cfPtr, "accounts.dat", "rb") != 0) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s %-16s %-6s %-10s %-8s\n", "ID", "Name", "Math", "Computer", "Average");


        while (!feof(cfPtr)) {
           
            struct student client = { 0, "", 0, 0, 0.0 };

            int result = fread(&client, sizeof(struct student), 1, cfPtr);

          
            if (result != 0 && client.id != 0) {
                printf("%-6d %-16s %-6d %-10d %-8.2f\n",client.id, client.name,client.math, client.computer, client.avg);
            }
        }

        fclose(cfPtr); 
    }
    return 0;
}
