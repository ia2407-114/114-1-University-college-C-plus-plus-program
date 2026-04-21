#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" 

class PET
{
public:
    // 建構子：name, category, birthday, adoptDate
    PET(const std::string&, const std::string&, const Date&, const Date&);

    ~PET(); // 解構子

    bool check_birth() const;   // 檢查生日是否合理
    bool check_adopt() const;   // 檢查領養日是否合理 (包含不能早於生日)
    void print_all_data() const; // 印出詳細資料

private:
    std::string name;
    std::string category;
    Date birthDate;
    Date adoptDate;
};

#endif