#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 抽象類別
class flight_object
{
protected:
    string name;
    int id;
    int pilot;
    float kerosene;
    string manufacturer;

public:
    void create_flight_object(string obj);

    // 純虛擬函數
    virtual void create() = 0;
    virtual void display() = 0;

    virtual ~flight_object() {}
};

// 大型客機類別
class airliner : virtual public flight_object
{
protected:
    int passenger;
    int service_person;

public:
    void create() override;
    void display() override;
};

// 戰鬥機類別
class battleplane : virtual public flight_object
{
protected:
    string weapon;

public:
    void create() override;
    void display() override;
};

// 轟炸機類別
class bombplane : public airliner, public battleplane
{
public:
    void create() override;
    void display() override;

    // 儲存資料到檔案
    void saveToFile(ofstream& out);
};

#endif