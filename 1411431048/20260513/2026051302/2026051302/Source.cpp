#include <iostream>
#include <string>
using namespace std;


class Pet {
private:
    int age;        
    string name;    

public:
    
    Pet(int a, string n) : age(a), name(n) {
        cout << "==> 寵物基底類別建構子被呼叫（產生 " << name << "）" << endl;
    }

    
    virtual ~Pet() {
        cout << "<== 寵物基底類別解構子被呼叫（銷毀 " << name << "）" << endl;
    }

    
    void printPetInfo() const {
        cout << "名字: " << name << ", 年齡: " << age << " 歲";
    }
};


class Dog : public Pet {
private:
    int litterSize;  
    double runSpeed;  

public:
    
    Dog(int a, string n, int ls, double rs) : Pet(a, n), litterSize(ls), runSpeed(rs) {
        cout << "    ==> 衍生類別 Dog 建構子被呼叫" << endl;
    }

    
    ~Dog() {
        cout << "    <== 衍生類別 Dog 解構子被呼叫" << endl;
    }

    
    void printDogInfo() const {
        printPetInfo(); 
        cout << ", 產仔數量: " << litterSize << " 隻, 奔跑速度: " << runSpeed << " km/h" << endl;
    }
};


class Bird : public Pet {
private:
    int eggCount;       
    double flySpeed;    

public:
    
    Bird(int a, string n, int ec, double fs) : Pet(a, n), eggCount(ec), flySpeed(fs) {
        cout << "    ==> 衍生類別 Bird 建構子被呼叫" << endl;
    }

    
    ~Bird() {
        cout << "    <== 衍生類別 Bird 解構子被呼叫" << endl;
    }

    
    void printBirdInfo() const {
        printPetInfo(); 
        cout << ", 生蛋數量: " << eggCount << " 顆, 飛行速度: " << flySpeed << " km/h" << endl;
    }
};
int main() {
    cout << "--- 建立 Dog 物件 ---" << endl;
    Dog myDog(3, "狗(Dog)", 5, 35.5);

    cout << "\n--- 建立 Bird 物件 ---" << endl;
    Bird myBird(1, "鳥(Bird)", 3, 50.2);

    cout << "\n--- 印出寵物詳細資料 ---" << endl;
    myDog.printDogInfo();
    myBird.printBirdInfo();

    cout << "\n--- 程式結束，釋放物件記憶體 ---" << endl;
    return 0;
}