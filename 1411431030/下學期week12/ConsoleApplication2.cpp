#include <iostream>
#include <string>
using namespace std;

class pet
{
private:
    string name;
    int year;

public:
    pet()
    {
        cout << "執行父類別pet的建構元函式\n";
        cout << "寵物資訊:\n";
        cout << "名稱:";
        cin >> name;
        cout << "年齡:";
        cin >> year;
    }

    ~pet()
    {
        cout << "執行父類別pet的解構元函式.\n";
    }

    void display()
    {
        cout << "\n寵物名稱:" << name << endl;
        cout << "年齡:" << year << endl;
    }
};

class dog :public pet
{
private:
    int born;
    int runspeed;

public:
    // airliner類別建構元函式,設定大型客機的資料  
    dog()
    {
        cout << "\n執行子類別dog的建構元函式\n";
        cout << "產仔數:";
        cin >> born;
        cout << "奔跑速度:";
        cin >> runspeed;
    }

    // airliner類別解構元函式
    ~dog()
    {
        cout << "執行子類別dog的解構元函式.\n";
    }

    // 顯示大型客機的資料
    void display()
    {
        cout << "產仔數:" << born << endl;
        cout << "奔跑速度:" << runspeed << endl;
    }
};

class bird :public pet
{
private:
    int born;  // 乘客人數   
    int flyspeed;

public:
    // airliner類別建構元函式,設定大型客機的資料  
    bird()
    {
        cout << "\n執行子類別bird的建構元函式\n";
        cout << "生蛋數:";
        cin >> born;
        cout << "飛行速度:";
        cin >> flyspeed;
    }

    // airliner類別解構元函式
    ~bird()
    {
        cout << "執行子類別bird的解構元函式.\n";
    }

    // 顯示大型客機的資料
    void display()
    {
        cout << "生蛋數:" << born << endl;
        cout << "飛行速度:" << flyspeed << endl;
    }
};

int main()
{
    dog air1;
	bird air2;
    air1.pet::display();
    air1.dog::display();
	air2.pet::display();
	air2.bird::display();

    return 0;
}
