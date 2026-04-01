#include <string>
using namespace std;

class Pet
{
public:
    // 建構子
    Pet(string name, int age);

    // 解構子
    ~Pet();

    // 成員函數（只寫宣告）
    void setPetName(string name);
    void setPetAge(int age);

    string getPetName() const;
    int getPetAge() const;

    void displayMessage() const;

private:
    string PetName;
    int PetAge;
};


