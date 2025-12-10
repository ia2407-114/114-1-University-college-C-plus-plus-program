#include <stdio.h>
#define SIZE 20

// function main begins program execution
int main(void)
{
    // initialize a
    int a[SIZE] = {66,67,66,70,73,74,75,75,62,32,44,46,27,12,80,63,66,90,11,66 },temp;
    int id[SIZE] = {12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37 };

    puts("Data items in original order");

    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", id[i]);
    }
  
        // bubble sort                                         
           // loop to control number of passes                    
        for (unsigned int pass = 1; pass < SIZE; ++pass) {

            // loop to control number of comparisons per pass   
            for (size_t i = 0; i < SIZE - 1; ++i) {

                // compare adjacent elements and swap them if first 
                // element is greater than second element           
                if (a[i] < a[i + 1]) {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                    temp = id[i];
                    id[i] = id[i + 1];
                    id[i + 1] = temp;
                }
            }
        }

    puts("\nData items in ascending order");
    puts("\nID       score");

        // output sorted array
        for (size_t i = 0; i < SIZE; ++i) {
            printf("%2d%9d\n",id[i],a[i]);
        }

    puts("");
}