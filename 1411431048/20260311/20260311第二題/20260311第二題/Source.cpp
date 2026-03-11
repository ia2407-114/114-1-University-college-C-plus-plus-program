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
void deleteNode(StudentPtr* sPtr, int id);
void printList(StudentPtr currentPtr);

int main()
{
    StudentPtr startPtr = NULL;
    Student s;
    int n, i;
    int delID;

    printf("輸入學生筆數: ");
    scanf("%d", &n);

    // 題目1：輸入學生資料並建立鏈結串列
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

    // 題目2：刪除指定ID
    printf("\n輸入要刪除的學生ID: ");
    scanf("%d", &delID);

    deleteNode(&startPtr, delID);

    printf("\n刪除後鏈結串列:\n");
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

void deleteNode(StudentPtr* sPtr, int id)
{
    StudentPtr previousPtr = NULL;
    StudentPtr currentPtr = *sPtr;

    while (currentPtr != NULL && currentPtr->id != id)
    {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if (currentPtr == NULL)
    {
        printf("找不到資料\n");
        return;
    }

    if (previousPtr == NULL)
        *sPtr = currentPtr->nextPtr;
    else
        previousPtr->nextPtr = currentPtr->nextPtr;

    free(currentPtr);

    printf("刪除成功\n");
}

void printList(StudentPtr currentPtr)
{
    if (currentPtr == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("\nID\tName\tComputer\tMath\tAvg\n");

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