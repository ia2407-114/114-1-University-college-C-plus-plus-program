#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    
    Dog(string n, int a);
    ~Dog();

    
    void getInfo();
};

#endif

