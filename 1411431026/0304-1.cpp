// Fig. 11.11: fig11_11.c
// Writing data randomly to a random-access file
#include <stdio.h>

// clientData structure definition               
struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};          
 
int main(void) 
{ 
   FILE *cfPtr; // accounts.dat file pointer

   // fopen opens the file; exits if file cannot be opened
   if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL) {
      puts("File could not be opened.");
   } 
   else { 
      // create clientData with default information
      struct student s = {0, "", 0, 0, 0.0};

      // require user to specify account number
      printf("Enter account number""(1 to 100, 0 to end input): ");
      scanf("%d", &s.id);

      // user enters information, which is copied into file
      while (s.id != 0) { 
         // user enters last name, first name and balance
         printf("Enter name, computer, math: ");
        
         // set record lastName, firstName and balance value
         scanf("%19s %d %d", s.name, &s.computer, &s.math);
         s.avg = (s.computer + s.math) / 2.0;

         // seek position in file to user-specified record   
         fseek(cfPtr, (s.id - 1) * sizeof(struct student), SEEK_SET);         

         // write user-specified information in file              
         fwrite(&s, sizeof(struct student), 1, cfPtr);

         // enable user to input another account number
         printf("Enter student id(1~100,0 to end): ");
         scanf("%d", &s.id);
      } 

      fclose(cfPtr); // fclose closes the file
   } 
} 

