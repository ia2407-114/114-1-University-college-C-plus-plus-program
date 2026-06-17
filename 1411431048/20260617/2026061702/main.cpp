#include "b.h"
#include <iostream>

using namespace std;

int main()
{
    const char* filename = "movie.bin";


    writeMovieData(filename, 5);

    cout << "\n-----------------------------\n";


    readAndPrintMovieData(filename);
    cout << "\n輸入要看的電影名稱之序號: ";
    int no;
    cin >> no;

    
    queryMovieByNo(filename, no);

    return 0;
}