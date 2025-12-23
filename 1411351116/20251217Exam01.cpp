/*題目1 :建立1個大小為3x10的二維整數陣列、一個浮點數陣列，
第1、2、3列分別存放學生學號以及對應的計概、數學成績。浮點數陣
列存放學生平均成績寫一個排序副程式，將二維整數陣列
、浮點數陣列傳遞至副程式中，分別求出排序後的結果，
最後由主程式計算出每個學生的平均成績放到浮點數陣列印出所有結果。*/
#include <stdio.h>
void rate(int arr[][10], double arr2[10]);
void ave(int arr[][10], double arr2[10]);
int main() {
    int stu[][10] = { { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 }
                 ,{ 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 }
                 ,{ 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 } };
    double avg[10];
    ave(stu, avg);
    printf("學號\t計概\t數學\t平均成績\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\t%d\t%lf\n", stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }
    rate(stu, avg);
    printf("學號\t計概\t數學\t平均成績\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\t%d\t%lf\n", stu[0][i], stu[1][i], stu[2][i], avg[i]);
    }
}
void rate(int arr[][10], double arr2[10]) {
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (arr2[j] > arr2[j + 1]) {
                int temp = arr[0][j];
                arr[0][j] = arr[0][j + 1];
                arr[0][j + 1] = temp;

                temp = arr[1][j];
                arr[1][j] = arr[1][j + 1];
                arr[1][j + 1] = temp;

                temp = arr[2][j];
                arr[2][j] = arr[2][j + 1];
                arr[2][j + 1] = temp;

                double temp2 = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp2;
            }
        }
    }
}
void ave(int arr[][10], double arr2[10]) {
    for (int i = 0; i < 10; i++) {
        arr2[i] = (double)(arr[1][i] + arr[2][i]) / 2;
    }