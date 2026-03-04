#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    char name[20];
    int id, computer, math;
    double avg;
};

int main(void)
{
    FILE* cfPtr;

    // fopen opens the file; exits if file cannot be opened
    if ((cfPtr = fopen("accounts.txt", "rb+")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        struct student clientstudent = { "", 0, 0, 0, 0.0 };

        // require user to specify account number
        printf("%s", "Enter id number"
            " (1 to 100, 0 to end input): ");
        scanf("%d", &clientstudent.id);

        // user enters information, which is copied into file
        while (clientstudent.id != 0) {
            // user enters last name, first name and balance
            printf("%s", "Enter name, math score, computer score: ");

            // set record lastName, firstName and balance value
            fscanf(stdin, "%s%d%d", clientstudent.name,
                &clientstudent.math, &clientstudent.computer);
            clientstudent.avg = ((float)clientstudent.computer + clientstudent.math) / 2;
            // seek position in file to user-specified record   
            fseek(cfPtr, (clientstudent.id - 1) *
                sizeof(struct student), SEEK_SET);

            // write user-specified information in file              
            fwrite(&clientstudent, sizeof(struct student), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter id number: ");
            scanf("%d", &clientstudent.id);
        }
    fclose(cfPtr);
        // fopen opens the file; exits if file cannot be opened
    if ((cfPtr = fopen("accounts.txt", "rb")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-16s%-11s%10s%10s\n", "id", "Name",
                "math", "computer","average");

           // read all records from file (until eof)
        while (!feof(cfPtr)) {
                // create clientData with default information
            struct student clientstudent = { "", 0, 0, 0, 0.0 };

            int result = fread(&clientstudent, sizeof(struct student), 1, cfPtr);

                // display record
            if (result != 0 && clientstudent.id != 0) {
                printf("%-6d%-16s%-11d%10d%10.2lf\n",
                clientstudent.id, clientstudent.name,
                clientstudent.math, clientstudent.computer,clientstudent.avg);
                }
            }
        }
        
    }
    fclose(cfPtr); // fclose closes the file
}