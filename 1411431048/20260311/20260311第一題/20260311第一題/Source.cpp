#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

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

void insert(StudentPtr* sPtr, Student data);
void printList(StudentPtr currentPtr);

int main()
{
    StudentPtr startPtr = NULL;
    Student s;
    int n, i;

    printf("輸入學生筆數: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n輸入學生資料\n");

        printf("ID: ");
        scanf("%d", &s.id);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Computer: ");
        scanf("%d", &s.computer);

        printf("Math: ");
        scanf("%d", &s.math);

        s.avg = (s.computer + s.math) / 2.0;

        insert(&startPtr, s);
    }

    printf("\n鏈結串列內容:\n");
    printList(startPtr);

    return 0;
}

void insert(StudentPtr* sPtr, Student data)
{
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student));

    if (newPtr != NULL)
    {
        *newPtr = data;
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        while (currentPtr != NULL && data.id > currentPtr->id)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (previousPtr == NULL)
        {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
}

void printList(StudentPtr currentPtr)
{
    if (currentPtr == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("ID\tName\tComputer\tMath\tAvg\n");

    while (currentPtr != NULL)
    {
        printf("%d\t%s\t%d\t\t%d\t%.2f\n",
            currentPtr->id,
            currentPtr->name,
            currentPtr->computer,
            currentPtr->math,
            currentPtr->avg);

        currentPtr = currentPtr->nextPtr;
    }
}