#include <stdio.h>

int main(void)
{
	FILE* cfPtr; // cfPtr = clients.txt file pointer

	// fopen opens file. Exit program if unable to create file
	if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
		puts("File could not be opened");
	}
	else {
		puts("Enter the account, name, and balance.");
		puts("Enter EOF to end input.");
		printf("%s", "? ");

		unsigned int id; // account number
		char name[30]; // account name
		int math, computer;
		double avg; // account balance

		scanf("%d%29s%3d%3d", &id, name,&computer,&math);
		avg = ((float)computer + math) / 2;

		// write account, name and balance into file with fprintf
		while (!feof(stdin)) {
			fprintf(cfPtr, "%u %s %3d %3d %.2f\n",
				id, name, computer, math, avg);
			printf("%s", "? ");
			scanf("%d%29s%3d%3d", &id, name, &computer, &math);
		}

		fclose(cfPtr); // fclose closes file
	}
}

