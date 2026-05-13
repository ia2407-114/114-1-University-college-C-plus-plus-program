#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

class Pet {
public:
    Pet(std::string n, int a);
    ~Pet();
    void display_pet();
private:
    std::string name;
    int age;
};

class Dog : public Pet {
public:
    Dog(std::string n, int a, int ls, float rs);
    ~Dog();
    void display_dog();
private:
    int litter_size;
    float run_speed;
};

class Bird : public Pet {
public:
    Bird(std::string n, int a, int ec, float fs);
    ~Bird();
    void display_bird();
private:
    int egg_count;
    float fly_speed;
};

#endif