#include <iostream>
#include <string>
using namespace std;

class pet
{
private:
    string name;  
    int old;      
    int birthday;   
    int adoptday; 

public:
    pet(string n, int o, int bd, int ad) : name(n), old(o), birthday(bd), adoptday(ad) {};
    pet()
    {
        cout << "\n你的寵物:\n";
        cout << "名稱:";
        cin >> name;
        cout << "年齡:";
        cin >> old;
        cout << "生日:";
        cin >> birthday;
        cout << "領養日:";
        cin >> adoptday;
    }


    void petinformation()
    {
        cout << "\n寵物名稱:" << name << endl;
        cout << "年齡:" << old << endl;
        cout << "生日:" << birthday << endl;
        cout << "領養日:" << adoptday << endl;
    }
};

class dog :public pet
{
private:
    int weight;
    int length;
    int runspeed;   

public: 
    dog(string n, int o, int bd, int ad, int w,int l, int rp)
        : pet(n, o, bd, ad), weight(w), length(l), runspeed(rp){}

    ~dog() {}

    dog()
    {
        cout << "\n狗特徵\n";
        cout << "體重:";
        cin >> weight;
        cout << "長度:";
        cin >> length;
        cout << "速度:";
        cin >> runspeed;
    }


    void display_dog()
    {
        cout << "體重:" << weight << endl;
        cout << "長度:" << length << endl;
        cout << "速度:" << runspeed << endl;
    }
};

class bird :public pet
{
private:
    int weight;
    int flyspeed;

public:

    bird(string n, int o, int bd, int ad, int w, int fp): pet(n, o, bd, ad), weight(w), flyspeed(fp) {}

    ~bird() {}

    bird()
    {
        cout << "\n鳥特徵\n";
        cout << "體重:";
        cin >> weight;
        cout << "速度:";
        cin >> flyspeed;
    }


    void display_bird()
    {
        cout << "體重:" << weight << endl;
        cout << "速度:" << flyspeed << endl;
    }
};

int main()
{   
    dog pet1("小黑", 3, 20210101, 20210505, 20, 5, 30);
    bird pet2("小黃", 1, 20230202, 20230606, 2, 50);
    pet1.petinformation();
    pet1.display_dog();
    pet2.petinformation();
    pet2.display_bird();

    return 0;
}