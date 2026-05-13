#include <iostream>
#include <string>
using namespace std;

// 寵物類別 
class pet {
private:
    string name; 
    int age;     

public:
    // pet類別建構元
    pet() {
        cout << "執行父類別pet的建構元函式\n";
        cout << "寵物姓名:";
        cin >> name;
        cout << "寵物年齡:";
        cin >> age;
    }

    
    ~pet() {
        cout << "執行父類別pet的解構元函式.\n";
    }

    
    void display() {
        cout << "\n寵物姓名:" << name << endl;
        cout << "寵物年齡:" << age << "歲" << endl;
    }
};

// 狗狗類別 
class dog : public pet {
private:
    int litter_size; 
    float run_speed; 

public:
    
    dog() {
        cout << "\n執行子類別dog的建構元函式\n";
        cout << "產仔數量:";
        cin >> litter_size;
        cout << "奔跑速度(km/h):";
        cin >> run_speed;
    }

    
    ~dog() {
        cout << "執行子類別dog的解構元函式.\n";
    }

    
    void display_dog() {
        cout << "產仔數量:" << litter_size << endl;
        cout << "奔跑速度:" << run_speed << " km/h" << endl;
    }
};

// 小鳥類別 
class bird : public pet {
private:
    int egg_count;   
    float fly_speed; 

public:
    
    bird() {
        cout << "\n執行子類別bird的建構元函式\n";
        cout << "生蛋數量:";
        cin >> egg_count;
        cout << "飛行速度(km/h):";
        cin >> fly_speed;
    }

    
    ~bird() {
        cout << "執行子類別bird的解構元函式.\n";
    }

    
    void display_bird() {
        cout << "生蛋數量:" << egg_count << endl;
        cout << "飛行速度:" << fly_speed << " km/h" << endl;
    }
};

int main() {
    
    dog d1;
    d1.display();
    d1.display_dog();

    cout << "\n----------------------------\n";

    
    bird b1;
    b1.display();
    b1.display_bird();

    cout << endl;
    return 0;
}