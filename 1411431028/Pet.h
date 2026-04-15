#ifndef PET_H
#define PET_H

#include <string>
#include "date.h"

class Pet {
public:
    Pet(std::string, std::string, Date, Date);
    ~Pet();
    void check_birth() const;
    void check_adopt() const;
    void print_all_data() const;
private:
    std::string name;
    std::string category;
    Date birthday;
    Date adoptDate;
};

#endif