#include <iostream>   
#include "PetDog.h"   

using namespace std;  

int main() {          
  
    string name;                 
    int by, bm, bd, ay, am, ad;   

   
    cout << "請輸入狗的姓名: ";
    cin >> name; 

    
    cout << "請輸入生日 (年 月 日): ";
    cin >> by >> bm >> bd; 

    
    cout << "請輸入領養日 (年 月 日): ";
    cin >> ay >> am >> ad;


    PetDog myDog(name, by, bm, bd, ay, am, ad);


    myDog.displayInfo();

    return 0; 
}