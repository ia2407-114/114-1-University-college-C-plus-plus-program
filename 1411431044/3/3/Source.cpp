#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

struct listNode {
    struct student data;
    struct listNode* nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode* ListNodePtr;

void insert(ListNodePtr* sPtr, struct student info);
void printList(ListNodePtr currentPtr);
int isEmpty(ListNodePtr sPtr);

int main(void) {
    ListNodePtr startPtr = NULL;
    struct student temp;

    printf("請輸入學號 (輸入 0 結束): ");
    if (scanf_s("%d", &temp.id) != 1) return 0;

    while (temp.id != 0) {
        printf("請輸入姓名, 電算分數, 數學分數: ");
        scanf_s("%s", temp.name, (unsigned int)sizeof(temp.name));
        scanf_s("%d", &temp.computer);
        scanf_s("%d", &temp.math);

        temp.avg = (temp.computer + temp.math) / 2.0;

        insert(&startPtr, temp);
        printList(startPtr);

        printf("請輸入學號 (輸入 0 結束): ");
        scanf_s("%d", &temp.id);
    }

    system("pause");
    return 0;
}

void insert(ListNodePtr* sPtr, struct student info) {
    ListNodePtr newPtr = (ListNodePtr)malloc(sizeof(ListNode));

    if (newPtr != NULL) {
        newPtr->data = info;
        newPtr->nextPtr = NULL;

        ListNodePtr previousPtr = NULL;
        ListNodePtr currentPtr = *sPtr;

        while (currentPtr != NULL && info.id > currentPtr->data.id) {
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

int isEmpty(ListNodePtr sPtr) {
    return sPtr == NULL;
}

void printList(ListNodePtr currentPtr) {
    if (isEmpty(currentPtr)) {
        puts("串列目前是空的。\n");
    }
    else {
        puts("\n目前的學生鏈結串列內容 (依學號排序):");
        printf("%-10s%-20s%-10s%-10s%-10s\n", "ID", "Name", "Comp", "Math", "Avg");

        while (currentPtr != NULL) {
            printf("%-10d%-20s%-10d%-10d%-10.2f\n",
                currentPtr->data.id,
                currentPtr->data.name,
                currentPtr->data.computer,
                currentPtr->data.math,
                currentPtr->data.avg);

            currentPtr = currentPtr->nextPtr;
        }
        puts("NULL\n");
    }
}