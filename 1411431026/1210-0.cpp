#include <stdio.h>
#define RESPONSES_SIZE 40 // define array sizes
#define FREQUENCY_SIZE 11

// function main begins program execution
int main(void)
{
    // initialize frequency counters to 0
    int frequency[FREQUENCY_SIZE] = { 0 }, answer, rating,i,j;

    // place the survey responses in the responses array
    int responses[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
         1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
         5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    // for each answer, select value of an element of array responses
    // and use that value as an index in array frequency to 
    // determine element to increment
    for (answer = 0; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];
    }

    printf("%s%    13s%17s\n","Rating", "Frequency", "Histogram");

    // for each element of array n, output a bar of the histogram
    for (i = 0; i < FREQUENCY_SIZE; ++i) {
        printf("%7u%13d       ", i, frequency[i]);

        for ( j = 1; j <= frequency[i]; ++j) { // print one bar
            printf("% c", '*');
        }

        puts(" "); // end a histogram bar with a newline
    }
}





