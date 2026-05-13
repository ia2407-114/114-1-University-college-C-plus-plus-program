#include "0513-2.h"


Pet::Pet(string petName, int petAge, float petWeight)
{
    cout << "建立一隻寵物...\n";
    name = petName;
    age = petAge;
    weight = petWeight;
}

Pet::~Pet()
{
    cout << getName() << " 已離開程式。\n";
}

void Pet::displayPet()
{
    cout << "\n--- 寵物基本資料 ---" << endl;
    cout << "姓名: " << name << endl;
    cout << "年齡: " << age << " 歲" << endl;
    cout << "體重: " << weight << " 公斤" << endl;
}

string Pet::getName()
{
    return name;
}

int Pet::getAge()
{
    return age;
}

float Pet::getWeight()
{
    return weight;
}

Dog::Dog(string petName, int petAge, float petWeight, int babies, float speed)
    : Pet(petName, petAge, petWeight)
{
    babyCount = babies;
    runSpeed = speed;
}

void Dog::displayDog()
{
    cout << "\n=== 狗的資料 ===" << endl;
    cout << "姓名: " << getName() << endl;
    cout << "年齡: " << getAge() << " 歲" << endl;
    cout << "體重: " << getWeight() << " 公斤" << endl;
    cout << "產仔數量: " << babyCount << endl;
    cout << "奔跑速度: " << runSpeed << " 公里/小時" << endl;
}


Bird::Bird(string petName, int petAge, float petWeight, int eggs, float speed)
    : Pet(petName, petAge, petWeight)
{
    eggCount = eggs;
    flySpeed = speed;
}

void Bird::displayBird()
{
    cout << "\n=== 鳥的資料 ===" << endl;
    cout << "姓名: " << getName() << endl;
    cout << "年齡: " << getAge() << " 歲" << endl;
    cout << "體重: " << getWeight() << " 公斤" << endl;
    cout << "生蛋數量: " << eggCount << endl;
    cout << "飛行速度: " << flySpeed << " 公里/小時" << endl;
}