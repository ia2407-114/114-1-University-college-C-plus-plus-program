#include <iostream>
#include "pet.h"
using namespace std;

int main()
{
    int y, m, d;

    for (int i = 1; i <= 3; i++)
    {
        string name, category;

        cout << "Input name: ";
        cin >> name;

        cout << "Input category: ";
        cin >> category;

        cout << "Input birthday (year month day): ";
        cin >> y >> m >> d;
        Date birth(y, m, d);

        cout << "Input adopt date (year month day): ";
        cin >> y >> m >> d;
        Date adopt(y, m, d);

        Pet p(name, category, birth, adopt);

        p.check_birth();
        p.check_adopt();
        p.print_all_data();
    }

    return 0;
}