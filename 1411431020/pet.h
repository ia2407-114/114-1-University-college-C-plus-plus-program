#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition

class PET
{
public:
    PET(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~PET(); // provided to confirm destruction order

    void check_birth(); // 檢查年齡合理性
    void check_adopt(); // 檢查領養日合理性

private:
    std::string firstName; // composition: member object
    std::string category; // composition: member object
    const Date birthDate; // composition: member object
    const Date adoptDate; // composition: member object
}; // end class PET

#endif
