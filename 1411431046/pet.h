#ifndef PET_H
#define PET_H

#include <string>
#include "date.h"

using namespace std;

class Pet
{
public:
    Pet(const string&, const string&, const Date&, const Date&);
    void print_all_data() const;
    void check_birth() const;
    void check_adopt() const;
    ~Pet();

private:
    string name;
    string category;
    const Date birthDate;
    const Date adoptDate;
};

#endif