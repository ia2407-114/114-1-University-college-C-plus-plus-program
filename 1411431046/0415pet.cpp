#include <iostream>
#include "pet.h"
using namespace std;

Pet::Pet(const string& n, const string& c,
    const Date& b, const Date& a)
    : name(n),
    category(c),
    birthDate(b),
    adoptDate(a)
{
    cout << "Pet constructor: " << name << endl;
}

void Pet::print_all_data() const
{
    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;

    cout << "Birthday: ";
    birthDate.printStandard();

    cout << "  Adopt Date: ";
    adoptDate.printStandard();

    cout << endl;
}

void Pet::check_birth() const
{
    cout << name << " birthday: ";
    birthDate.printStandard();
    cout << endl;
}

void Pet::check_adopt() const
{
    cout << name << " adopt date: ";
    adoptDate.printStandard();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Bye Bye~~ " << name << endl;
}