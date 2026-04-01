#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    
    Dog(string n, int a) {
        
        if (n.length() > 2 && n.length() < 5) {
            name = n;
        }
        else {
            name = "未知";
            cout << "姓名長度錯誤，已設為預設值！\n";
        }

        if (a <= 20) {
            age = a;
        }
        else {
            age = 0;
            cout << "年齡錯誤，已設為預設值！\n";
        }
    }

    
    ~Dog() {
        cout << name << "，再見了！" << endl;
    }

    void getInfo() {
        cout << "寵物姓名: " << name << endl;
        cout << "寵物年齡: " << age << endl;
    }
};

int main() {
    string name;
    int age;

    cout << "請輸入寵物姓名: ";
    cin >> name;
    cout << "請輸入寵物年齡: ";
    cin >> age;

    
    Dog d(name, age);
    d.getInfo();

    return 0; 
}
