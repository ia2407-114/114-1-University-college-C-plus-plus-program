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

    if (fopen_s(&cfPtr, "accounts.dat", "wb+") != 0) {
        puts("File could not be opened.");
    }
    else {

        struct student client = { 0, "", 0, 0, 0.0 };

        printf("%s", "Enter account number (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.id);

        while (client.id != 0) {

            printf("%s", "Enter name, math, and computer score: ");
            scanf_s("%19s%d%d", client.name, 20, &client.math, &client.computer);


            client.avg = (double)(client.math + client.computer) / 2.0;

            fseek(cfPtr, (client.id - 1) * sizeof(struct student), SEEK_SET);

            fwrite(&client, sizeof(struct student), 1, cfPtr);

            printf("%s", "Enter account number (1 to 100, 0 to end input): ");
            scanf_s("%d", &client.id);
        }
        fclose(cfPtr);
    }

    return 0;
}