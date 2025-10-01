//Fig .2.5:fig02_05.c
//Addition program.
#include <stdio.h>

//fuction main begins program execution
int main(void)
{
	printf("Enter one integer score\n");

	int y;
	scanf("%d", &y);

	if (y >= 60) {
		printf("恭喜通過");
	}
	if (y < 60) {
		printf("再加油");
	}
	return 0;
}