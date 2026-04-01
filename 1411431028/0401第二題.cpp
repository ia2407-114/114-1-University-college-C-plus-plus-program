#include <iostream>
#include "pet.h" 
using namespace std;

int main() {
    Pet myPetcat("curry", 3);
    Pet myPetdog("kobe", 15);

    myPetcat.displayMessage();
    myPetdog.displayMessage();

    return 0;
}