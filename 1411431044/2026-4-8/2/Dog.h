#ifndef DOG_H
#define DOG_H
#include <string>
#include "Date.h"

class Dog {
public:
    Dog(std::string = "Unknown", int = 2000, int = 1, int = 1, int = 2000, int = 1, int = 1);
    void setName(std::string);
    void setBirthDate(int, int, int);
    void setAdoptionDate(int, int, int);
    void printInfo() const;
private:
    std::string name;
    Date birthDate;
    Date adoptionDate;
};

#endif