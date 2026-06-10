#include "Animal.h"

void Animal::setData(std::string n, int a, int h) { name = n; age = a; height = h; }
int Animal::getAge() const { return age; }
int Animal::getHeight() const { return height; }

void Animal::printFormatted(std::ostream& os) {
    os << name << "\t" << age << "\t" << height << "\n";
}

bool Animal::readData(std::ifstream& is) {
    return (is >> name >> age >> height) ? true : false;
}