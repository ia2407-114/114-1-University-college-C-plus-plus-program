#include <iostream>
#include <string> 
using namespace std;

// Pet 類別
class Pet
{
public:
    // ? 建構子（初始化資料）
    Pet(string name, int age)
    {
        setPetName(name);
        setPetAge(age);
    }

    // ? 解構子（結束時印出訊息）
    ~Pet()
    {
        cout << "Goodbye my pet " << PetName << " !" << endl;
    }

    void setPetName(string name)
    {
        if (name.length() > 2 && name.length() < 5)
            PetName = name;
        else
            cout << "Name error!\n";
    }

    void setPetAge(int Age)
    {
        if (Age <= 20 && Age >= 0)
            PetAge = Age;
        else
            cout << "Age error!\n";
    }

    string getPetName() const
    {
        return PetName;
    }

    int getPetAge() const
    {
        return PetAge;
    }

    void displayMessage() const
    {
        cout << "Welcome to see my pet\n"
            << getPetName() << " " << getPetAge() << "!"
            << endl;
    }

private:
    string PetName = "amy";
    int PetAge = 1;
};


int main()
{
    string nameOfPet;
    int ageOfPet;

    cout << "Please enter the pet name:" << endl;
    getline(cin, nameOfPet);

    cout << "Please enter the pet age:" << endl;
    cin >> ageOfPet;

    //  建構子建立物件
    Pet myPet(nameOfPet, ageOfPet);

    cout << endl;
    myPet.displayMessage();

    // 呼叫解構子
    
}