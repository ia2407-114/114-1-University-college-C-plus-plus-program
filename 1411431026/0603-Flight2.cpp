#include "0603-Flight2.h"

// flight_object
void flight_object::create_flight_object(string obj)
{
    cout << "建立飛行物資料\n";
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

// airliner
void airliner::create()
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
    cout << "\n===== 大型客機資料 =====\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量:" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員數目:" << service_person << endl;
    cout << "製造者:" << manufacturer << endl;
}

// battleplane
void battleplane::create()
{
    cout << "武器名稱:";
    cin >> weapon;

    cout << "製造者:";
    cin >> manufacturer;
}

void battleplane::display()
{
    cout << "\n===== 戰鬥機資料 =====\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量:" << kerosene << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}

// bombplane
void bombplane::create()
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
    cout << "\n===== 轟炸機資料 =====\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量:" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}

// 儲存到 bomb.txt
void bombplane::saveToFile(ofstream& out)
{
    out << "===== 轟炸機資料 =====\n";
    out << "名稱:" << name << endl;
    out << "編號:" << id << endl;
    out << "駕駛員人數:" << pilot << endl;
    out << "煤油量:" << kerosene << endl;
    out << "乘客人數:" << passenger << endl;
    out << "武器名稱:" << weapon << endl;
    out << "製造者:" << manufacturer << endl;
}