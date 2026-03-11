#include <stdio.h>
#include <stdlib.h>


struct student {
    int id;
    char name[20];
    int computer;
    int math;
    double avg;
};


struct listNode {
    struct student data;     
    struct listNode* nextPtr;
};

typedef struct listNode ListNode; 
typedef ListNode* ListNodePtr;


void insert(ListNodePtr* sPtr, struct student value);
void printList(ListNodePtr currentPtr);
int isEmpty(ListNodePtr sPtr);

int main(void)
{
    ListNodePtr startPtr = NULL;
    struct student item;
    int n, i;

    printf("Enter number of students: ");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("ID: ");
        scanf_s("%d", &item.id);

        printf("Name: ");
        scanf_s("%s", item.name,20);

        printf("Computer: ");
        scanf_s("%d", &item.computer);

        printf("Math: ");
        scanf_s("%d", &item.math);

        item.avg = (item.computer + item.math) / 2.0;

        insert(&startPtr, item);
    }

    printList(startPtr);

    puts("End of run.");
}


void insert(ListNodePtr* sPtr, struct student value)
{
    ListNodePtr newPtr = (ListNodePtr)malloc(sizeof(ListNode));

    if (newPtr != NULL) {

        newPtr->data = value;
        newPtr->nextPtr = NULL;

        ListNodePtr previousPtr = NULL;
        ListNodePtr currentPtr = *sPtr;

        while (currentPtr != NULL && value.id > currentPtr->data.id) {
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
        printf("No memory available.\n");
    }
}

// check if list empty
int isEmpty(ListNodePtr sPtr)
{
    return sPtr == NULL;
}

// print list
void printList(ListNodePtr currentPtr)
{
    if (isEmpty(currentPtr)) {
        puts("List is empty.\n");
    }
    else {
        puts("\nThe list is:");

        while (currentPtr != NULL) {

            printf("ID:%d Name:%s Computer:%d Math:%d Avg:%.2f -->\n",
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