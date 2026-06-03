#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
using namespace std;

// 飛行物體類別（基底類別）
class flight_object
{
public:
    string name;       // 飛行物名稱   
    int id;            // 飛行物編號   
    int pilot;         // 駕駛員人數   
    float kerosene;    // 煤油量          
    string manufacturer; // 製造者      

    void create_flight_object(string obj);
};

// 大型客機類別
class airliner : public virtual flight_object
{
protected:
    int passenger;       // 乘客人數   
    int service_person;  // 服務人員的數目       
public:
    void create_airliner();
    void display();
};

// 戰鬥機類別
class battleplane : public virtual flight_object
{
protected:
    string weapon;
public:
    void create_battleplane();
    void display();
};

// 轟炸機類別
class bombplane : public airliner, public battleplane
{
public:
    void create_bombplane();
    void display();
};

#endif // FLIGHT_H