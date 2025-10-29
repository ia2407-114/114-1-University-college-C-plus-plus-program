#include<stdio.h>
#include<math.h>

// Creating and using a programmer-defined function.

#include <stdio.h>

// function prototype (函式原型宣告)
int square(int y);

int main(void)
{
    // 迴圈執行 10 次，計算並輸出每個整數的平方
    for (int x = 1; x <= 10; ++x) {
        printf("%d ", square(x)); // function call (呼叫函式)
    }

    puts(""); // 換行
    return 0;
}

// square function definition
// 傳回參數的平方
int square(int y) // y 是傳入引數的複製值
{
    return y * y; // 傳回 y 的平方
}
