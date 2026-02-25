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
    FILE* sfPtr;

    
    if ((sfPtr = fopen("student.dat", "wb")) == NULL) {
        puts("File could not be opened.");
        return 1;
    }
    else {
       
        struct student blankStudent = { 0, "", 0, 0, 0.0 };

        
        for (int i = 1; i <= 100; i++) {
            fwrite(&blankStudent, sizeof(struct student), 1, sfPtr);
        }

        fclose(sfPtr);
        puts("生出一百個了.");
    }

    return 0;
}