#ifndef CINEMA_H
#define CINEMA_H

struct cinema {
    char name[10];
    char date[9];
    char place[7];
    int price;
};

void saveMovies(const char* filename, int count);
void displayAllMovies(const char* filename);
void displaySpecificMovie(const char* filename, int no);

#endif