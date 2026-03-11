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
int deleteStudent(StudentPtr* sPtr, int id);

int main(void)
{
    StudentPtr startPtr = NULL;

    Student s1 = { 101, "Amy", 80, 90, 85.0, NULL };
    Student s2 = { 102, "John", 75, 88, 81.5, NULL };
    Student s3 = { 103, "Mary", 92, 86, 89.0, NULL };
    Student s4 = { 104, "Peter", 78, 84, 81.0, NULL };

    insert(&startPtr, s1);
    insert(&startPtr, s2);
    insert(&startPtr, s3);
    insert(&startPtr, s4);

    printf("Initial student list:\n");
    printList(startPtr);

    int delId;
    printf("\nEnter student ID to delete: ");
    scanf_s("%d", &delId);

    if (deleteStudent(&startPtr, delId)) {
        printf("Student %d deleted.\n", delId);
    }
    else {
        printf("找不到資料\n");
    }

    printf("\nStudent list after deletion:\n");
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

        if (*sPtr == NULL) {
            *sPtr = newPtr;
        }
        else {
            StudentPtr currentPtr = *sPtr;
            while (currentPtr->nextPtr != NULL) {
                currentPtr = currentPtr->nextPtr;
            }
            currentPtr->nextPtr = newPtr;
        }
    }
}

void printList(StudentPtr currentPtr)
{
    if (currentPtr == NULL) {
        printf("List is empty\n");
    }
    else {
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

int deleteStudent(StudentPtr* sPtr, int id)
{
    if (*sPtr == NULL) return 0;

    StudentPtr currentPtr = *sPtr;
    StudentPtr previousPtr = NULL;

    while (currentPtr != NULL && currentPtr->id != id) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if (currentPtr == NULL) return 0;

    if (previousPtr == NULL) {
        *sPtr = currentPtr->nextPtr;
    }
    else {
        previousPtr->nextPtr = currentPtr->nextPtr;
    }

    free(currentPtr);
    return 1;
}