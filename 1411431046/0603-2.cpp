#include "0603-2.h"

void flight_object::create_flight_object(string obj)
{
    cout << "建立飛行物的資料\n";
    cout << "實作一架" << obj << endl;

    cout << "名稱:";
    cin >> name;

    cout << "編號:";
    cin >> id;

    cout << "駕駛員人數:";
    cin >> pilot;

    cout << "煤油量(公升):";
    cin >> kerosene;
}

void airliner::create_airliner()
{
    cout << "乘客人數:";
    cin >> passenger;

    cout << "服務人員數目:";
    cin >> service_person;

    cout << "製造者:";
    cin >> manufacturer;
}

void airliner::display()
{
    cout << "\n顯示大型客機資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量:" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員數目:" << service_person << endl;
    cout << "製造者:" << manufacturer << endl;
}

void battleplane::create_battleplane()
{
    cout << "武器名稱:";
    cin >> weapon;

    cout << "製造者:";
    cin >> manufacturer;
}

void battleplane::display()
{
    cout << "\n顯示戰鬥機資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量:" << kerosene << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}

void bombplane::create_bombplane()
{
    cout << "乘客人數:";
    cin >> passenger;

    cout << "武器名稱:";
    cin >> weapon;

    cout << "製造者:";
    cin >> manufacturer;
}

void bombplane::display()
{
    cout << "\n顯示轟炸機資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}