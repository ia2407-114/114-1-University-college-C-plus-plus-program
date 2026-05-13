#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
using namespace std;


// ¤÷Ãþ§O Pet
class Pet
{
private:
    string name;     
    int age;         
    float weight;    

public:
   
    Pet(string, int, float);

    ~Pet();

    void displayPet();

protected:
    
    string getName();
    int getAge();
    float getWeight();
};


class Dog : public Pet
{
private:
    int babyCount;     
    float runSpeed;     

public:
    Dog(string, int, float, int, float);

    void displayDog();
};

class Bird : public Pet
{
private:
    int eggCount;       
    float flySpeed;     

public:
    Bird(string, int, float, int, float);

    void displayBird();
};

#endif