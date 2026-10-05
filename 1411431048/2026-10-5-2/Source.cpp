#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void flushBuffer(void);

void handle_insert(void);
void handle_delete(void);
void handle_list_all(void);


void push_f(const char* str);
void pop_f(void);
void list_stack(void);
char stack_item[MAX][20];
int top = -1;


void enqueue_f(const char* str);
void dequeue_f(void);
void list_queue(void);
char queue_item[MAX][20];
int front = MAX - 1, rear = MAX - 1, tag = 0;



int main()
{
    char main_option;
    while (1) {
        printf("\n =====================================\n");
        printf("   <<< 堆疊與佇列功能合併主選單 >>>\n");
        printf("   <1> 加入 (Insert)\n");
        printf("   <2> 刪除 (Delete)\n");
        printf("   <3> 輸出佇列與堆疊內容 (List All)\n");
        printf("   <4> 結束程式 (Quit)\n");
        printf(" =====================================\n");
        printf(" 請輸入選項: ");
        main_option = getchar();
        flushBuffer();

        switch (main_option) {
        case '1':
            handle_insert();
            break;
        case '2':
            handle_delete();
            break;
        case '3':
            handle_list_all();
            break;
        case '4':
            printf(" 程式結束\n");
            exit(0);
        default:
            printf("\n 選項錯誤! 請輸入 1, 2, 3, 或 4\n");
        }
    }
    return 0;
}




void handle_insert(void) {
   
    if (top >= MAX - 1 || (front == rear && tag == 1)) {
        printf("\n 結構已滿，無法再加入資料！\n");
        return;
    }

    printf("\n 請輸入一字串 (最多19字元): ");
    char temp[50];
    if (scanf("%19s", temp) == 1) {
        flushBuffer();
        push_f(temp);    
        enqueue_f(temp);  
        printf("\n 已成功加入字串 \"%s\"\n", temp);
    }
    else {
        printf("\n 輸入錯誤!\n");
        flushBuffer();
    }
}


void handle_delete(void) {
    printf("\n ---------- 開始同步刪除 ----------\n");
    pop_f();     
    dequeue_f(); 
    printf(" ----------------------------------\n");
}


void handle_list_all(void) {
    printf("\n ========== 堆疊目前的狀態 (LIFO - 後進先出) ==========");
    list_stack();
    printf("\n ========== 佇列目前的狀態 (FIFO - 先進先出) ==========");
    list_queue();
    printf(" ======================================================\n");
}


void push_f(const char* str) {
    top++;
    int i = 0;
    while (str[i] != '\0' && i < 19) {
        stack_item[top][i] = str[i];
        i++;
    }
    stack_item[top][i] = '\0';
}

void pop_f(void) {
    if (top < 0) {
        printf(" 堆疊狀態: 是空的!\n");
    }
    else {
        printf(" 堆疊狀態: [%s] 已被刪除\n", stack_item[top]);
        top--;
    }
}

void list_stack(void) {
    int count = 0, i;
    if (top < 0) {
        printf("\n\n 堆疊無資料\n");
    }
    else {
        printf("\n\n  堆疊的資料如下: \n");
        printf(" ------------------\n");
        for (i = top; i >= 0; i--) {
            printf("  %-20s\n", stack_item[i]);
            count++;
        }
        printf(" ------------------\n");
        printf("  共有: %d 字串\n", count);
    }
}


void enqueue_f(const char* str) {
    rear = (rear + 1) % MAX;
    int i = 0;
    while (str[i] != '\0' && i < 19) {
        queue_item[rear][i] = str[i];
        i++;
    }
    queue_item[rear][i] = '\0';
    if (front == rear)
        tag = 1;
}

void dequeue_f(void) {
    if (front == rear && tag == 0) {
        printf(" 佇列狀態: 是空的!\n");
    }
    else {
        front = (front + 1) % MAX;
        printf(" 佇列狀態: [%s] 已被刪除\n", queue_item[front]);
        if (front == rear)
            tag = 0;
    }
}

void list_queue(void) {
    int count = 0, i, num;
    if (front == rear && tag == 0) {
        printf("\n 佇列無資料\n");
    }
    else {
        printf("\n 佇列的資料如下: \n");
        printf(" ------------------\n");
        i = (front + 1) % MAX;
        while (i != rear) {
            printf("  %-20s\n", queue_item[i]);
            num = ++i % MAX;
            i = num;
            count++;
        }
        printf("  %-20s\n", queue_item[i]);
        printf(" ------------------\n");
        printf("  共有 %d 個字串\n", ++count);
    }
}


void flushBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        continue;
    }
}
