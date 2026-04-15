#include <iostream>
#include "pet.h"
using namespace std;

Pet::Pet(string n, string c, Date b, Date a)
    : name(n), category(c), birthday(b), adoptDate(a) {
}

Pet::~Pet() {
    cout << "Pet " << name << " Bye Bye~~" << endl;
}

void Pet::check_birth() const {
    cout << "Birthday Check: " << endl;
    cout << "  "; birthday.printUniversal(); cout << endl;
    cout << "  "; birthday.printStandard(); cout << endl;
}

void Pet::check_adopt() const {
    cout << "Adoption Date Check: " << endl;
    cout << "  "; adoptDate.printUniversal(); cout << endl;
    cout << "  "; adoptDate.printStandard(); cout << endl;
}

void Pet::print_all_data() const {
    cout << "\n======= Pet Detailed Data =======" << endl;
    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;
    check_birth();
    check_adopt();
    cout << "=================================" << endl;
}