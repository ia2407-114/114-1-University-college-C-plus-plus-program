#include "AnimalManager.h"
#include <iostream>

int main() {
    
    AnimalManager manager("animal.txt");

    
    manager.writeAnimalData(3);

    
    manager.readAndDisplayData();

    return 0;
}
