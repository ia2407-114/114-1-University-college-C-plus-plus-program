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


int isEmpty(StudentPtr sPtr) {
    return sPtr == NULL;
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
    else {
        printf("記憶體不足，無法新增 ID: %d\n", id);
    }
}


void printList(StudentPtr currentPtr) {
    if (isEmpty(currentPtr)) {
        printf("目前串列中沒有資料。\n");
    }
    else {
        printf("\n%-5s %-10s %-10s %-8s %-5s\n", "ID", "Name", "Computer", "Math", "Avg");
        printf("--------------------------------------------------\n");
        while (currentPtr != NULL) {
            printf("%-5d %-10s %-10d %-8d %-5.2f\n",
                currentPtr->id, currentPtr->name, currentPtr->computer,
                currentPtr->math, currentPtr->avg);
            currentPtr = currentPtr->nextPtr;
        }
        printf("--------------------------------------------------\n\n");
    }
}

int main(void) {
    StudentPtr startPtr = NULL; 

    printf("--- 正在建立學生資料鏈結串列 ---\n");

    
    insert(&startPtr, 103, "John cina", 90, 85);
    insert(&startPtr, 101, "The rock", 70, 80);
    insert(&startPtr, 102, "Curry", 95, 92);

    
    printList(startPtr);

    printf("程式執行完畢。\n");

    
    system("pause");

    return 0;
}
