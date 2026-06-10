#include "Header.h"
#include <iostream>

int main() {
    AnimalManager manager;
    std::string file = "animal.txt";

    manager.inputAndSave(file);
    manager.processAndAppend(file);
    manager.displayFile(file);

    return 0;
}