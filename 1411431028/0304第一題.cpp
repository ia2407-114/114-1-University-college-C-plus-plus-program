
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

int main(void)
{
    FILE* cfPtr;

   
    if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        struct student client = { 0, "", 0, 0, 0.0 };

        printf("Enter account number (1 to 100, 0 to end): ");
        scanf("%d", &client.id);

        while (client.id != 0) {
            
            printf("Enter name, computer score, math score: ");

            
            scanf("%19s %d %d", client.name, &client.computer, &client.math);

            
            client.avg = (client.computer + client.math) / 2.0;

            
            fseek(cfPtr, (client.id - 1) * sizeof(struct student), SEEK_SET);

            
            fwrite(&client, sizeof(struct student), 1, cfPtr);

            printf("Enter account number: ");
            scanf("%d", &client.id);
        }

        fclose(cfPtr);
    }
    return 0;
}