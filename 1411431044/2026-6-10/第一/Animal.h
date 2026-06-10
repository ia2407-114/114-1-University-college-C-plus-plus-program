#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
#include <fstream>

class Animal {
public:
    void setData(std::string n, int a, int h);
    int getAge() const;
    int getHeight() const;
    void printFormatted(std::ostream& os);
    bool readData(std::ifstream& is);

private:
    std::string name;
    int age;
    int height;
};
#endif