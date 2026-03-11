#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
    struct student *nextPtr;
};

typedef struct student Student; // synonym for struct listNode
typedef Student *StudentPtr; // synonym for ListNode

// prototypes
void insert(StudentPtr *sPtr, int id, char name[], int computer, int math);
void printList(StudentPtr currentPtr);
int deleteNode(StudentPtr *sPtr, int id);


int main()
{ 
   StudentPtr  startPtr = NULL; // initially there are no nodes
   int id, computer, math,deleteID;
   char name[20];

    printf("請輸入3筆學生資料\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\n輸入學生ID: ");
        scanf("%d", &id);

        printf("輸入姓名: ");
        scanf("%s", name);

        printf("輸入Computer成績: ");
        scanf("%d", &computer);

        printf("輸入Math成績: ");
        scanf("%d", &math);

        insert(&startPtr, id, name, computer, math);
    }
    printf("\n原本鏈結串列內容:\n");
    printList(startPtr);
    
    printf("\n請輸入欲刪除的學生ID: ");
    scanf("%d",&deleteID);

    if(deleteNode(&startPtr, deleteID))
        printf("刪除成功\n");
    else
        printf("找不到資料\n");

    printf("\n刪除後鏈結串列內容:\n");
    printList(startPtr);

    return 0;
}             



void insert(StudentPtr *sPtr, int id, char name[], int computer, int math)
{ 
    StudentPtr newPtr =(StudentPtr) malloc(sizeof(Student));
    StudentPtr previousPtr = NULL;
    StudentPtr currentPtr = *sPtr; 

   if (newPtr != NULL) { // is space available
       
	    newPtr->id = id;
        strcpy(newPtr->name, name);
        newPtr->computer = computer;
        newPtr->math = math;
        newPtr->avg = (computer + math) / 2.0;
        newPtr->nextPtr = NULL;


      // loop to find the correct location in the list       
      while (currentPtr != NULL && id > currentPtr->id) {
         previousPtr = currentPtr; // walk to ...               
         currentPtr = currentPtr->nextPtr; // ... next node 
      }                                          

      // insert new node at beginning of list
      if (previousPtr == NULL) { 
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      } 
      else { // insert new node between previousPtr and currentPtr
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } 
   } 
} 

int deleteNode(StudentPtr *sPtr, int id)
{
    StudentPtr previousPtr = NULL;
    StudentPtr currentPtr = *sPtr;

    
    while(currentPtr != NULL && currentPtr->id != id)
    {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    
    if(currentPtr == NULL)
        return 0;

    
    if(previousPtr == NULL)
        *sPtr = currentPtr->nextPtr;
    else
        previousPtr->nextPtr = currentPtr->nextPtr;

    free(currentPtr);

    return 1;
}

// print the list
void printList(StudentPtr  currentPtr)
{ 
   // if list is empty
   if (currentPtr == NULL) {
      puts("List is empty.\n");
   } 
   printf("ID\tName\tComputer\tMath\tAvg\n");

   // while not the end of the list
   while (currentPtr != NULL) { 
         printf("%d\t%s\t%d\t\t%d\t%.2f\n",
               currentPtr->id,
               currentPtr->name,
               currentPtr->computer,
               currentPtr->math,
               currentPtr->avg);
         currentPtr = currentPtr->nextPtr;   
      } 

      puts("NULL\n");
}
