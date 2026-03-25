#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    // 1. 注意這裡 N 改為大寫，與 main 一致
    void setPetName(string name) {
        petName = name;
    }
    // 2. 注意這裡 A 改為大寫，與 main 一致
    void setPetAge(string age) {
        petage = age;
    }
    // 3. 修正拼字：去掉多餘的 e
    string getPetName() const {
        return petName;
    }
    string getPetAge() const {
        return petage;
    }

    void displayMessage() const {
        cout << "Welcome to pet room!" << endl;
        cout << "Pet Name: " << petName << endl;
        // 4. 注意這裡 petage 必須跟 private 宣告的一模一樣
        cout << "Pet Age: " << petage << "!" << endl;
    }

private:
    string petName;
    string petage; // 這裡 A 是小寫
};

int main() {
    Pet myPet;
    string nameIn, ageIn;

    // 呼叫時請確保名稱與上面 class 裡定義的完全一樣
    cout << "Initial name: " << myPet.getPetName() << endl;

    cout << "\nPlease enter pet name: ";
    getline(cin, nameIn);
    cout << "Please enter pet age: ";
    getline(cin, ageIn);

    myPet.setPetName(nameIn);
    myPet.setPetAge(ageIn);

    cout << endl;
    myPet.displayMessage();

    return 0;
}   