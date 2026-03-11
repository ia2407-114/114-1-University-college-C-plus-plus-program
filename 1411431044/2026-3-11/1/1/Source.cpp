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


void insert(ListNodePtr* sPtr, struct student std);
int deleteNode(ListNodePtr* sPtr, int id);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void) {
    ListNodePtr startPtr = NULL;
    int choice;
    struct student tempStd;
    int tempId;

    instructions();
    printf("? ");
    scanf_s("%d", &choice);

    while (choice != 3) {
        switch (choice) {
        case 1:
            printf("輸入學生 ID: ");
            scanf_s("%d", &tempStd.id);
            printf("輸入姓名: ");
            scanf_s("%s", tempStd.name, (unsigned int)sizeof(tempStd.name));
            printf("輸入電腦與數學成績: ");
            scanf_s("%d %d", &tempStd.computer, &tempStd.math);

            tempStd.avg = (tempStd.computer + tempStd.math) / 2.0;

            insert(&startPtr, tempStd);
            printList(startPtr);
            break;

        case 2: 
            if (startPtr != NULL) {
                printf("輸入欲刪除的學生 ID: ");
                scanf_s("%d", &tempId);

                if (deleteNode(&startPtr, tempId)) {
                    printf("ID %d 已刪除。\n", tempId);
                    printList(startPtr);
                }
                else {
                    printf("找不到資料 (ID %d)。\n", tempId);
                }
            }
            else {
                puts("串列是空的。\n");
            }
            break;

        default:
            puts("無效選擇。\n");
            break;
        }
        printf("? ");
        scanf_s("%d", &choice);
    }

    puts("結束執行。");
    return 0;
}


void instructions(void) {
    printf("請輸入選擇:\n"
        "1. 插入學生資料\n"
        "2. 刪除學生資料\n"
        "3. 結束程式\n");
}


void insert(ListNodePtr* sPtr, struct student std) {
    ListNodePtr newPtr = (ListNodePtr)malloc(sizeof(ListNode));

    if (newPtr != NULL) {
        newPtr->data = std;
        newPtr->nextPtr = NULL;

        ListNodePtr previousPtr = NULL;
        ListNodePtr currentPtr = *sPtr;

      
        while (currentPtr != NULL && std.id > currentPtr->data.id) {
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
        printf("記憶體不足，無法新增資料。\n");
    }
}


int deleteNode(ListNodePtr* sPtr, int id) {
    if (*sPtr == NULL) return 0;

    ListNodePtr tempPtr;
    if (id == (*sPtr)->data.id) { 
        tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        return 1;
    }
    else {
        ListNodePtr previousPtr = *sPtr;
        ListNodePtr currentPtr = (*sPtr)->nextPtr;

        while (currentPtr != NULL && currentPtr->data.id != id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (currentPtr != NULL) {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return 1;
        }
    }
    return 0;
}

void printList(ListNodePtr currentPtr) {
    if (currentPtr == NULL) {
        puts("串列是空的。");
    }
    else {
        puts("目前的串列內容:");
        printf("ID\tName\tComp\tMath\tAvg\n");
        while (currentPtr != NULL) {
            printf("%d\t%s\t%d\t%d\t%.2f\n",
                currentPtr->data.id, currentPtr->data.name,
                currentPtr->data.computer, currentPtr->data.math,
                currentPtr->data.avg);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n\n");
    }
}