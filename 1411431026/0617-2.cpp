#include <iostream>
#include "0617-Cinema2.h"

using namespace std;

int main()
{
    const char* filename = "movie.bin";

    
    WriteMovieData(filename);

    ShowMovieList(filename);

    int no;

    cout << "\n輸入要看的電影名稱之序號:";
    cin >> no;

    ShowMovieDetail(filename, no);

    return 0;
}