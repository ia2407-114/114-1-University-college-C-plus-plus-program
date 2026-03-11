#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
    struct student* nextPtr;
};

typedef struct student Student;
typedef Student* StudentPtr;

void insert(StudentPtr* sPtr, int id, const char name[], int comp, int math);
void deleteNode(StudentPtr* sPtr, int id);
void printList(StudentPtr currentPtr);
int isEmpty(StudentPtr sPtr);

int main(void) {
    StudentPtr startPtr = NULL;
    int deleteID;

    insert(&startPtr, 103, "Alice", 90, 85);
    insert(&startPtr, 101, "Bob", 70, 80);
    insert(&startPtr, 102, "Cindy", 95, 92);
    insert(&startPtr, 104, "David", 88, 76);


    printList(startPtr);

    printf("請輸入要刪除的學生 ID: ");
    scanf("%d", &deleteID);

    deleteNode(&startPtr, deleteID);

    printf("\n目前的鏈結串列內容：\n");
    printList(startPtr);

    system("pause");
    return 0;
}

void deleteNode(StudentPtr* sPtr, int id) {
    if (isEmpty(*sPtr)) {
        printf("找不到資料。\n");
        return;
    }

    if (id == (*sPtr)->id) {
        StudentPtr tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        printf("學號 %d 已從串列中刪除。\n", id);
    }
    else {
        StudentPtr previousPtr = *sPtr;
        StudentPtr currentPtr = (*sPtr)->nextPtr;

        while (currentPtr != NULL && currentPtr->id != id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (currentPtr != NULL) {
            StudentPtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            printf("學號 %d 已從串列中刪除。\n", id);
        }
        else {
            printf("找不到學號為 %d 的資料。\n", id);
        }
    }
}

void insert(StudentPtr* sPtr, int id, const char name[], int comp, int math) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student));

    if (newPtr != NULL) {
        newPtr->id = id;
        strcpy(newPtr->name, name);
        newPtr->computer = comp;
        newPtr->math = math;
        newPtr->avg = (comp + math) / 2.0;
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        while (currentPtr != NULL && id > currentPtr->id) {
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
}

void printList(StudentPtr currentPtr) {
    if (isEmpty(currentPtr)) {
        printf("串列是空的。\n");
    }
    else {
        printf("%-5s %-10s %-10s %-8s %-5s\n", "ID", "Name", "Computer", "Math", "Avg");
        printf("--------------------------------------------------\n");
        while (currentPtr != NULL) {
            printf("%-5d %-10s %-10d %-8d %-5.2f\n",
                currentPtr->id, currentPtr->name, currentPtr->computer,
                currentPtr->math, currentPtr->avg);
            currentPtr = currentPtr->nextPtr;
        }
        printf("--------------------------------------------------\n");
    }
}

int isEmpty(StudentPtr sPtr) {
    return sPtr == NULL;
}