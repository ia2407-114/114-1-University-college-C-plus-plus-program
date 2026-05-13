#include <iostream>
#include "Pet.h"
using namespace std;

int main() {
    Dog myDog("Buddy", 3, 5, 25.0);
    myDog.display_pet();
    myDog.display_dog();

    Bird myBird("Bluey", 1, 3, 40.0);
    myBird.display_pet();
    myBird.display_bird();

    return 0;
}