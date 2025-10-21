//Fig. 2.5: fig02_05.c
//Addition program.
#include<stdio.h>

//function main begins program execution



int main(void)
{
	int p,r,q,w,x,y,z;

	 printf("Enter p\n");//prompt
	 scanf_s("%d", &p);

	 printf("Enter r\n");//prompt
	 scanf_s("%d", &r);

	 printf("Enter q\n");//prompt
	 scanf_s("%d", &q);

	 printf("Enter w\n");//prompt
	 scanf_s("%d", &w);

	 printf("Enter x\n");//prompt
	 scanf_s("%d", &x);

	 printf("Enter y\n");//prompt
	 scanf_s("%d", &y);

	 z = p * r % q + w / x - y;

	 

	 printf("%d * %d mod %d + %d / %d - %d is %d\n", p, r, q, w, x, y, z);


	 return 0;

}


