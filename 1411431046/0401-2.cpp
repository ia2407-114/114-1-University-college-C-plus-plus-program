#include <iostream>
#include "pet.h"
using namespace std;

int main()
{
   
    Pet Petdog("kevin", 5);

    cout << endl;
    Petdog.displayMessage();

    return 0;
}