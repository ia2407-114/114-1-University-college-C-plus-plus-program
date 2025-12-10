#include <stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11
#define SIZE 5

int main(void)
{
    int frequency[FREQUENCY_SIZE] = { 0 }, answer, rating;

    int responses[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
             1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
             5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    for (answer = 0; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];
    }

    printf("%s%17s\n", "Rating", "Frequency");

    for (rating = 1; rating < FREQUENCY_SIZE; ++rating) {
        printf("%6d%17d\n", rating, frequency[rating]);
    }

    int n[SIZE] = { 19, 3, 15, 7, 11 };

    printf("%s%13s%17s\n", "Element", "Value", "Histogram");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%7u%13d             ", i, n[i]);

        for (int j = 1; j <= n[i]; ++j) {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}