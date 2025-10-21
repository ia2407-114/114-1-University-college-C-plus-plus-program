#include<stdio.h>

int main (void)
{
	float w,h,bm;
	printf("請輸入你的體重與身高\n");
	scanf_s("%f %f", &w, &h);
	bm = (float) w/ (h * h);
	printf("你的bmi是%f\n", bm);
    if (bm< 18.5)
        printf("體重過輕（Underweight）\n");
    else if (bm < 25)
        printf("正常（Normal）\n");
    else if (bm < 30)
        printf("過重（Overweight）\n");
    else
        printf("肥胖（Obese）\n");
    return 0;

}