#include <stdio.h>

int main()
{
    int grade;              //成績
    int total = 0;          //total總和
    unsigned int counter = 0; //成績數量
    unsigned int passes = 0;    //及格
    unsigned int failure = 0;    //不及格
    float average;          //平均的成績（float浮點數）

    do {//執行一次程式再檢查while
        printf("請輸入學生成績（輸入-1結束）： ");
        scanf_s("%d", &grade);

        //若成績非負才處理
        if (grade >= 0) {
            total = total + grade;  //累計總分
            counter = counter + 1;  //counter計數器加1

            if (grade >= 60) {
                passes = passes + 1;
            }
            else {
                failure = failure + 1;
            }
        }

    } while (grade >= 0); //當輸入為負數進入下一行

    if (counter != 0) {
        average = (float)total / counter; //計算平均
        printf("學生總人數：%u\n", counter);
        printf("及格人數：%u\n", passes);
        printf("不及格人數：%u\n", failure);
        printf("全班平均成績：%.2f\n", average);

        if (passes>=(counter/2)) {//大於等於50輸出:
            printf("Bonus to the Teacher!\n");
        }
    }
    else {
        puts("未輸入任何成績！");
    }
}