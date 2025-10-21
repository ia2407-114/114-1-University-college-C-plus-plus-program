#include<stdio.h>
int main(void) {
	float weightkilograms, hightmeters, BMI;
	printf("enter your weightkilograms and hightmeters\n ");
	scanf_s("%f %f", &weightkilograms, &hightmeters);
	BMI = weightkilograms/hightmeters/hightmeters;
	if (BMI > 30)
		printf("your BMI is %.2f obest ", BMI);
	else if(BMI>25)
		printf("your BMI is %.2f overweight", BMI);
	else if (BMI > 18.5)
		printf("your BMI is %.2f normal ", BMI);
	else
		printf("your BMI is %.2f underweight ", BMI);
return 0;

}