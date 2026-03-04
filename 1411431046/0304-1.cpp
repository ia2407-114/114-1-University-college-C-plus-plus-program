#include <stdio.h>

// student structure definition
struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

int main(void)
{
    FILE *cfPtr;

    // 開啟隨機存取檔
    if ((cfPtr = fopen("student.dat", "rb+")) !=0) {
        puts("File could not be opened.");
    }
    else {
        struct student stu = {0, "", 0, 0, 0.0};

        printf("Enter id (1-100 0 to end): ");
        scanf("%d", &stu.id);

        //id = 0
        while (stu.id != 0) {

            printf("Enter name, computer, math: ");
            scanf("%19s %d %d",stu.name,&stu.computer,&stu.math);

           
            stu.avg = (stu.computer + stu.math) / 2.0;

           
            fseek(cfPtr,
                  (stu.id - 1) * sizeof(struct student),
                  SEEK_SET);

        
            fwrite(&stu, sizeof(struct student), 1, cfPtr);

            printf("Enter id (1-100 0 to end): ");
            scanf("%d", &stu.id);
        }

        fclose(cfPtr);
    }
}
    

