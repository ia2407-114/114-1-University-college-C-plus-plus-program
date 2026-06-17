#include "c.h"
#include <iostream>

using namespace std;

int main()
{
    const char* filename = "movie.bin";

    
    writeMovieData(filename, 5);

    cout << "\n-----------------------------\n";

   
    readAndPrintMovieData(filename);

    return 0;
}
