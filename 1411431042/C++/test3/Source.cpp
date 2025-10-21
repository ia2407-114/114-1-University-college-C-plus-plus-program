// Fig. 3.8: fig03_08.c
// 班級平均成績計算程式
#include <stdio.h>

int main(void)
{
    unsigned int counter; // number of grades entered
    int grade; // grade value
    int total; // sum of grades

    float average; // number with decimal point for average

    // 初始化
    total = 0; // initialize total
    counter = 0; // initialize loop counter

    // processing phase
    // get first grade from user
    printf("%s", "請輸入成績，輸入 -1 結束： "); // prompt for input
    scanf_s("%d", &grade); // read grade from user

    // loop while sentinel value not yet read from user
    while (grade != -1) {
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter

        // 再次提示使用者輸入下一筆成績
        printf("%s", "請輸入成績，輸入 -1 結束： "); // prompt for input
        scanf_s("%d", &grade); // read next grade
    } // end while

    // termination phase
    // if user entered at least one grade
    if (counter != 0) {

        // calculate average of all grades entered
        average = (float)total / counter; // avoid truncation

        // 顯示平均值，保留兩位小數
        printf("全班平均成績為 %.2f\n", average);
    } // end if
    else { // 若沒有輸入任何成績，顯示提示訊息
        puts("未輸入任何成績");
    } // end else
} // end function main