#pragma once
struct cinema
{
    char name[10];
    char date[9];
    char place[7];
    int price;
};


void writeMovieData(const char* filename, int count);
void readAndPrintMovieData(const char* filename);
void queryMovieByNo(const char* filename, int no);