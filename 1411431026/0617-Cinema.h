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
void ReadMovieData(const char* filename);

#endif
