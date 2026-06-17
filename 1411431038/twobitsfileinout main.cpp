#include "twobitsfileinout.h"

int main()
{
    const char* filename = "movie.bin";

    // 1. 執行寫入功能
    writeMoviesToFile(filename);

    // 2. 執行讀取並顯示功能
    readMoviesFromFile(filename);

    return 0;
}