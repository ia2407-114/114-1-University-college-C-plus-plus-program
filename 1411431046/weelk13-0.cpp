#include <stdio.h>

#define RESPONSES_SIZE 40       
#define FREQUENCY_SIZE 11      
int main(void)
{
    int frequency[FREQUENCY_SIZE] = { 0 };
    int responses[RESPONSES_SIZE] = {
        1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7,
        6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10
    };

    int answer, i, j;

    
    for (answer = 0; answer < RESPONSES_SIZE; ++answer) {
        frequency[responses[answer]]++;
    }

    
    printf("%s%13s%17s\n", "Rating", "Frequency", "Histogram");

    
    for (i = 1; i < FREQUENCY_SIZE; ++i) {

        
        printf("%7d%13d       ", i, frequency[i]);

        
        for (j = 1; j <= frequency[i]; j++) {
            printf("*");
        }

        puts(""); 
    }

    return 0;
}