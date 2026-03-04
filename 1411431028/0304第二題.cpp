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

   
    if ((cfPtr = fopen("accounts.dat", "rb")) == NULL) {
        puts("檔案無法開啟，請確認 accounts.dat 是否存在。");
    }
    else {
       
        printf("%-6s %-15s %-10s %-10s %-10s\n",
            "ID", "Name", "Computer", "Math", "Average");
        printf("----------------------------------------------------------\n");

        
        while (!feof(cfPtr)) {
            struct student client = { 0, "", 0, 0, 0.0 };

          
            int result = fread(&client, sizeof(struct student), 1, cfPtr);

           
            if (result != 0 && client.id != 0) {
                printf("%-6d %-15s %-10d %-10d %-10.2f\n",
                    client.id, client.name,
                    client.computer, client.math, client.avg);
            }
        }

        fclose(cfPtr);
    }
    return 0;
}