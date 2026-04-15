#include <iostream>
#include <string>
#include "pet.h"
using namespace std;

int main() {
    int y, m, d;
    // Pre-defined names and categories as requested
    string names[3] = { "Buddy", "Kitty", "Lucky" };
    string cats[3] = { "Golden Retriever", "Persian Cat", "Holland Lop" };

    for (int i = 0; i < 3; ++i) {
        try {
            cout << "\nInput date data for " << names[i] << " (" << cats[i] << "):" << endl;

            cout << "Enter Birthday (YYYY MM DD): ";
            cin >> y >> m >> d;
            Date birth(y, m, d);

            cout << "Enter Adoption Date (YYYY MM DD): ";
            cin >> y >> m >> d;
            Date adopt(y, m, d);

            // Construct and display
            Pet myPet(names[i], cats[i], birth, adopt);
            myPet.print_all_data();

            // Destructor triggers at the end of each iteration
        }
        catch (invalid_argument& e) {
            cerr << "Error: " << e.what() << ". Please re-enter for this pet." << endl;
            --i;
        }
    }

    return 0;
}