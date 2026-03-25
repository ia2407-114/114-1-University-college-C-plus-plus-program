#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    
    void setName(string n) {
        if (n.length() > 2 && n.length() < 5) {
            name = n;
        }
        else {
            cout << "姓名長度錯誤！\n";
        }
    }

    void setAge(int a) {
        if (a <= 20) {
            age = a;
        }
        else {
            cout << "年齡錯誤！\n";
        }
    }

    // get function
    void getInfo() {
        cout << "寵物姓名: " << name << endl;
        cout << "寵物年齡: " << age << endl;
    }
};

int main() {
    Dog d;
    string name;
    int age;

    cout << "請輸入寵物姓名: ";
    cin >> name;
    d.setName(name);

    cout << "請輸入寵物年齡: ";
    cin >> age;
    d.setAge(age);

    d.getInfo();

    return 0;
}