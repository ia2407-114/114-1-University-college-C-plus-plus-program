#include "cinema.h"

int main()
{
    int no;

    
    writeMovie();

    
    showMovieList();

    
    cout << "\n請輸入要查看第幾筆資料：";
    cin >> no;

    showMovieDetail(no);

    return 0;
}