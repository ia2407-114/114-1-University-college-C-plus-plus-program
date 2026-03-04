#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student {
    int id;
    char name[20];
    int computer;
    int math;
    double avg;
    struct student* nextPtr; 
};


typedef struct student Student;
typedef Student* StudentPtr;


void insert(StudentPtr* sPtr, Student stu);
void printList(StudentPtr currentPtr);
int isEmpty(StudentPtr sPtr);

int main(void)
{
    StudentPtr startPtr = NULL; 
    Student stu;

    printf("Enter student id (0 to end): ");
    scanf("%d", &stu.id);

    while (stu.id != 0) {
        printf("Enter name, computer score, math score: ");
        scanf("%19s%d%d", stu.name, &stu.computer, &stu.math);
        stu.avg = (stu.computer + stu.math) / 2.0;

        insert(&startPtr, stu); 

        printf("Enter student id (0 to end): ");
        scanf("%d", &stu.id);
    }

    printList(startPtr);

    
    StudentPtr temp;
    while (startPtr != NULL) {
        temp = startPtr;
        startPtr = startPtr->nextPtr;
        free(temp);
    }

    return 0;
}


void insert(StudentPtr* sPtr, Student stu)
{
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student));
    if (newPtr != NULL) {
        *newPtr = stu;
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        while (currentPtr != NULL && stu.id > currentPtr->id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (previousPtr == NULL) { 
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { 
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("Student %d not inserted. No memory available.\n", stu.id);
    }
}


void printList(StudentPtr currentPtr)
{
    if (isEmpty(currentPtr)) {
        puts("List is empty.\n");
    }
    else {
        puts("The student list (by id ascending):");
        while (currentPtr != NULL) {
            printf("ID:%d Name:%s Comp:%d Math:%d Avg:%.2f\n",
                currentPtr->id,
                currentPtr->name,
                currentPtr->computer,
                currentPtr->math,
                currentPtr->avg);
            currentPtr = currentPtr->nextPtr;
        }
    }
}


int isEmpty(StudentPtr sPtr)
{
    return sPtr == NULL;
}