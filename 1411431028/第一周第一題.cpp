// Fig. 11.2: fig11_02.c
// Creating a sequential file
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* cfPtr; // cfPtr = clients.txt file pointer   

    // fopen opens file. Exit program if unable to create file 
    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        puts("File could not be opened");
    }
    else {
        puts("Enter the id, name,computer,math and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        unsigned int id; // account number
        char name[30]; // account name
        int math, computer;
        double avg; // account balance


        scanf("%d %29s %3d %3d", &id, name,&computer,&math);
        avg = (float)computer + math / 2;

        // write account, name and balance into file with fprintf
        while (!feof(stdin)) {
            fprintf(cfPtr, "%d %s %3d %3d %.2f\n", id, name,computer,math, avg);
            printf("%s", "? ");
            scanf("%d %29s %3d%3d", &id, name, &computer, &math);
        }

        fclose(cfPtr); // fclose closes file   
    }
}





/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

