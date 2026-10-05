#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
#define LEN 20

void insert_f(void);    
void delete_f(void);    
void list_f(void);      
void flushBuffer(void); 

char qItem[MAX][LEN];
int front = MAX - 1, rear = MAX - 1;
int qCount = 0;         

char sItem[MAX][LEN];
int top = -1;

int main(void)
{
    int option;
    while (1) {
        printf("\n ******************************\n");
        printf("   <1> insert (enqueue + push)\n");
        printf("   <2> delete (dequeue + pop)\n");
        printf("   <3> list (queue & stack)\n");
        printf("   <4> quit\n");
        printf(" ******************************\n");
        printf(" 請輸入選項: ");
        option = getchar();
        if (option != '\n')
            flushBuffer();
        switch (option) {
        case '1':
            insert_f();
            break;
        case '2':
            delete_f();
            break;
        case '3':
            list_f();
            break;
        case '4':
            printf(" 程式結束\n");
            exit(0);
        default:
            printf("\n 選項錯誤!\n 請輸入 1, 2, 3, 或 4\n");
        }
    }
    return 0;
}

void insert_f(void)
{
    char buf[LEN];

   
    if (qCount >= MAX) {
        printf("\n 佇列與堆疊都是滿的!\n");
        return;
    }

    printf("\n 請輸入一字串: ");
    if (scanf("%19s", buf) != 1) {
        flushBuffer();
        return;
    }
    flushBuffer();

    rear = (rear + 1) % MAX;
    strcpy(qItem[rear], buf);
    qCount++;

    top++;
    strcpy(sItem[top], buf);

    printf("\n %s 已加入佇列與堆疊\n", buf);
}

void delete_f(void)
{
    if (qCount == 0) {
        printf("\n 佇列與堆疊都是空的!\n");
        return;
    }

    front = (front + 1) % MAX;
    printf("\n 佇列刪除: %s\n", qItem[front]);
    qCount--;

    printf(" 堆疊刪除: %s\n", sItem[top]);
    top--;
}

void list_f(void)
{
    int i, n;

    if (qCount == 0) {
        printf("\n 佇列與堆疊都無資料\n");
        return;
    }

    printf("\n 佇列的資料如下 (前端 -> 尾端): \n");
    printf(" ------------------\n");
    i = (front + 1) % MAX;
    for (n = 0; n < qCount; n++) {
        printf("  %-20s\n", qItem[i]);
        i = (i + 1) % MAX;
    }
    printf(" ------------------\n");
    printf("  共有 %d 個字串\n", qCount);

    printf("\n 堆疊的資料如下 (頂端 -> 底部): \n");
    printf(" ------------------\n");
    for (i = top; i >= 0; i--)
        printf("  %-20s\n", sItem[i]);
    printf(" ------------------\n");
    printf("  共有 %d 個字串\n", top + 1);
}

void flushBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        continue;
}