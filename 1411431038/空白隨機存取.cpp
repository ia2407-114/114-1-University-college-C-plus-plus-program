#include <stdio.h>
 
struct student{
	int id;
	char name[20];
	int computer,math;
	double avg;
};
int main(void)
{ 
   FILE *cfPtr; // accounts.dat file pointer

   // fopen opens the file; exits if file cannot be opened
   if ((cfPtr = fopen("accounts.dat", "wb")) == NULL) {
      puts("File could not be opened.");
   } 
   else { 
      // create clientData with default information       
      struct student blankstudent = {0, "",0,0, 0.0}; 
   
      // output 100 blank records to file                              
      for (unsigned int i = 1; i <= 100; ++i) {                                   
         fwrite(&blankstudent, sizeof(struct student), 1, cfPtr);
      }                                                      

      fclose (cfPtr); // fclose closes the file
   } 
} 
