// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "pet.h"

using namespace std;

int main()
{
    int y, m, d;

    
    cout << "輸入 Bob 的生日 (年 月 日): ";
    cin >> y >> m >> d;
    Date birth1(y, m, d); 

    cout << "輸入 Bob 的領養日 (年 月 日): ";
    cin >> y >> m >> d;
    Date adopt1(y, m, d);

    PET pet1("Bob", "turtle", birth1, adopt1);


   
    cout << "\n輸入 Ken 的生日 (年 月 日): ";
    cin >> y >> m >> d;
    Date birth2(y, m, d);

    cout << "輸入 Ken 的領養日 (年 月 日): ";
    cin >> y >> m >> d;
    Date adopt2(y, m, d);

    PET pet2("Ken", "dog", birth2, adopt2);


    
    cout << "\n輸入 Leo 的生日 (年 月 日): ";
    cin >> y >> m >> d;
    Date birth3(y, m, d);

    cout << "輸入 Leo 的領養日 (年 月 日): ";
    cin >> y >> m >> d;
    Date adopt3(y, m, d);

    PET pet3("Leo", "cat", birth3, adopt3);


    
    cout << endl;
    pet1.print();
    pet2.print();
    pet3.print();

    return 0;
} // end main
