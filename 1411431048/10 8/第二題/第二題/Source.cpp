#include<stdio.h>
int main(void)
{
	float a, b, c;
	printf("Enter your weight and height\n");
	scanf_s("%d",&a);
	scanf_s("%f",&b);
	printf("bmi is %f\n",(float)a/(b*b));
}