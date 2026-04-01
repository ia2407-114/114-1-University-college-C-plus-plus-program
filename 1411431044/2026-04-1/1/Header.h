#include <iostream>
#include <string>
using namespace std;

class Pet
{
public:
    
    Pet(string name, int age);

   
    ~Pet();

    
    void displayPetInfo() const;

private:
    
    string petName;
    int petAge;
};
