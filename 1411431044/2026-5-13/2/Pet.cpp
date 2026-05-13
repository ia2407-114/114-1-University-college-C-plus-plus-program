#include "Pet.h"
using namespace std;

Pet::Pet(string n, int a) : name(n), age(a) {}
Pet::~Pet() {}

void Pet::display_pet() {
    cout << "\nName: " << name << "\nAge: " << age << endl;
}

Dog::Dog(string n, int a, int ls, float rs) : Pet(n, a), litter_size(ls), run_speed(rs) {}
Dog::~Dog() {}

void Dog::display_dog() {
    cout << "Litter Size: " << litter_size << "\nRun Speed: " << run_speed << " km/h" << endl;
}

Bird::Bird(string n, int a, int ec, float fs) : Pet(n, a), egg_count(ec), fly_speed(fs) {}
Bird::~Bird() {}

void Bird::display_bird() {
    cout << "Egg Count: " << egg_count << "\nFly Speed: " << fly_speed << " km/h" << endl;
}