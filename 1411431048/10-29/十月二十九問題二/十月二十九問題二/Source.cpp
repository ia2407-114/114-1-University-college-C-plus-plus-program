// Fig. 5.3: BMI Calculator
// Creating and using a programmer-defined function.

#include <stdio.h>

// 函式原型宣告：接收身高與體重，回傳 BMI
float calculateBMI(float weight, float height);

int main(void)
{
    float weight, height, bmi;

    // 輸入資料
    printf("請輸入體重 (公斤): ");
    scanf_s("%f", &weight);
    printf("請輸入身高 (公尺): ");
    scanf_s("%f", &height);

    // 檢查輸入合理性
    if (height <= 0 || weight <= 0) {
        printf("輸入錯誤！身高與體重必須大於 0。\n");
        return 1;
    }

    // 呼叫副程式計算 BMI
    bmi = calculateBMI(weight, height);

    // 印出結果
    printf("\n您的 BMI 值為: %.2f\n", bmi);

    // 提示顯示分類資訊
    printf("\nBMI 分類參考:\n");
    printf("BMI < 18.5        → 體重過輕 (Underweight)\n");
    printf("18.5 ≤ BMI < 25.0 → 正常範圍 (Normal)\n");
    printf("25.0 ≤ BMI < 30.0 → 過重 (Overweight)\n");
    printf("BMI ≥ 30.0        → 肥胖 (Obese)\n");

    // 額外顯示個人狀況
    printf("\n您的體重狀況為: ");
    if (bmi < 18.5)
        printf("體重過輕\n");
    else if (bmi < 25.0)
        printf("正常範圍\n");
    else if (bmi < 30.0)
        printf("過重\n");
    else
        printf("肥胖\n");

    return 0;
}

// 副程式定義：計算 BMI
float calculateBMI(float weight, float height)
{
    return weight / (height * height);
}
