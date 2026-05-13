#include "0513-2.h"

int main()
{
    
    Dog dog1("旺旺", 3, 18.5, 5, 40.5);

    
    Bird bird1("小白", 2, 1.8, 8, 25.3);

    // 父類別
    dog1.displayPet();
    bird1.displayPet();

    // 子類別
    dog1.displayDog();
    bird1.displayBird();

    return 0;
}