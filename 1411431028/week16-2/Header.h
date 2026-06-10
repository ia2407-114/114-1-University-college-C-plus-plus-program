#ifndef ANIMAL_MANAGER_H
#define ANIMAL_MANAGER_H

#include <string>
#include <vector>

struct Animal {
    std::string name;
    int age;
    int height;
};

class AnimalManager {
public:
    void inputAndSave(const std::string& filename); 
    void processAndAppend(const std::string& filename); 
    void displayFile(const std::string& filename);
};

#endif