#include "0617-Cinema.h"

int main()
{
    const char* filename = "movie.bin";

    WriteMovieData(filename);

    ReadMovieData(filename);  

    return 0;
}