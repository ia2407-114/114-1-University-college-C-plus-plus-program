#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <iostream>
#include <string>
using namespace std;

// 飛行物體類別
class flight_object
{
public:
    string name;
    int id;
    int pilot;
    float kerosene;
    string manufacturer;

    void create_flight_object(string obj);
};

// 大型客機類別
class airliner : public virtual flight_object
{
protected:
    int passenger;
    int service_person;

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

#endif