#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class PET {
    // 【關鍵】宣告獨立函數為朋友
    friend void printDate(const PET& p);

public:
    PET(const std::string&, const std::string&, const Date&, const Date&);
    void print() const;
    ~PET();
private:
    std::string firstName;
    std::string category;
    const Date birthDate; // 私有成員
    const Date adoptDate; // 私有成員
};

#endif