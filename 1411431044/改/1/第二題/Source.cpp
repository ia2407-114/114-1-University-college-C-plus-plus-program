

#define _CRT_SECURE_NO_WARNINGS 
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
    FILE* cfPtr;


    if ((cfPtr = fopen("students.dat", "wb")) == NULL) {
        puts("File could not be opened.");
    }
    else {

        struct student blankClient = { 0 };


        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr);
        puts("成功建立 students.dat 並寫入 100 筆空白紀錄！");
    }

    return 0;
}