#include <stdio.h>
int main(void) { 
	int n,i,a=1; 
	float sum=0; 
	printf("請輸入項數\n"); 
	scanf_s("%d", &n); 
	for (i = 1; i <= n; i++) { 
		if (i % 2 != 0) 
			sum = sum + 4.0 /a ; 
		else 
			sum = sum - 4.0 /a ; 
		a += 2; 
	} 
	printf("%f", sum);
	return 0; 

}
