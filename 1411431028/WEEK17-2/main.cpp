#include <iostream>
#include "Cinema.h"

using namespace std;

int main() {
    const char* filename = "movie.bin";

    
    saveMovies(filename, 5);

    
    displayAllMovies(filename);

    
    int choice;
    cout << "\n請輸入要查看的電影編號: ";
    cin >> choice;
    displaySpecificMovie(filename, choice);

    return 0;
}