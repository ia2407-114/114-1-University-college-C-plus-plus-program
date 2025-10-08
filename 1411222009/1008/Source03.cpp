#include <stdio.h>

int main(void)
{
    unsigned int counter; //計數器
    int grade; //成績
    int total; //總和
    float average; //平均
    
    total = 0;
    counter = 0; //設初始值 

    int max = -1; //拿來放最高成績 (因為成績最小不可能為-1)
    int min = 101; //拿來放最低成績 (因為成績最大不可能為101)

    printf("Enter grade: ");
    scanf_s("%d", &grade);

    while (grade >= 0) {

        total = total + grade;
        counter = counter + 1;

        if (grade > max) {
            max = grade; //如果輸入成績越大, 會被放在max裡
        }

        if (grade < min) {
            min = grade; //如果輸入成績越小, 會被放在min裡
        }

        printf("%s", "Enter grade: ");
        scanf_s("%d", &grade);                
    }


    if (counter != 0) {                              //輸入負數表示全部成績輸入完畢
        average = (float)total / counter;

        printf("\nAverage: %f\n", average);
        printf("Highest: %d\n", max);
        printf("Lowest: %d\n", min);
    }
    else {
        printf("No grades were entered.\n");
    }

    return 0;

}