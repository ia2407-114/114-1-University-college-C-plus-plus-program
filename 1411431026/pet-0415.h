#ifndef PET_H
#define PET_H

#include <string>
#include "date-0415.h" // include Date class definition

class PET
{
public:
    PET(const std::string&, const std::string&,
        const Date&, const Date&);
    void check_birth() const;
    void check_adopt() const;
    void print_all_data() const;
    void print() const;
    ~PET(); // provided to confirm destruction order
private:
    std::string firstName; // composition: member object
    std::string category; // composition: member object
    const Date birthDate; // composition: member object
    const Date adoptDate; // composition: member object
}; // end class PET

#endif
