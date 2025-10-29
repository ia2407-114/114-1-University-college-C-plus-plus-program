#include<stdio.h>
#include<math.h>

int square(int x);
int x, n,count;

int main(void) {
	scanf("%d", &n);
	for (int x = 1;x <= n;++x) {
		scanf("%d", &n);
		unsigned factorial = 1; 

		for (int i = 1; i <= n; ++i) {
			factorial *= i;
			count += factorial;
	}
 }