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
    FILE *cfPtr;
  
    if ((cfPtr = fopen("accounts.dat", "rb")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-20s%-10s%-10s%-10s\n",
               "ID", "Name", "Computer", "Math", "Average");

        struct student s;

         while (!feof(cfPtr)) {

            struct student s = {0, "", 0, 0, 0.0};

            int result = fread(&s, sizeof(struct student), 1, cfPtr);

            if (result != 0 && s.id != 0) {
                printf("%-6d%-20s%-10d%-10d%-10.2f\n",
                       s.id, s.name, s.computer,
                       s.math, s.avg);
            }
        }

        fclose(cfPtr);
    }

}
