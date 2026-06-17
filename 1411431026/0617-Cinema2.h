#ifndef CINEMA_H
#define CINEMA_H

struct Cinema
{
    char name[10];
    char date[9];
    char place[7];
    int price;
};

void WriteMovieData(const char* filename);
void ShowMovieList(const char* filename);
void ShowMovieDetail(const char* filename, int no);

#endif