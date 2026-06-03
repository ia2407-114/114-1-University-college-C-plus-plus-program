#include "FlightObject.h"

void flight_object::create_flight_object(string obj) {
    cout << "實作一架" << obj << endl;
    cout << "名稱:"; cin >> name;
    cout << "編號:"; cin >> id;
    cout << "駕駛員人數:"; cin >> pilot;
    cout << "煤油量:"; cin >> kerosene;
}
void airliner::create_airliner() {
    cout << "乘客人數:"; cin >> passenger;
    cout << "服務人員:"; cin >> service_person;
    cout << "製造者:"; cin >> manufacturer;
}
void battleplane::create_battleplane() {
    cout << "製造者:"; cin >> manufacturer;
}
void bombplane::create_bombplane() {
    cout << "乘客人數:"; cin >> passenger;
    cout << "武器:"; cin >> weapon;
    cout << "製造者:"; cin >> manufacturer;
}
void bombplane::display(ostream& out) {
    out << "--- 轟炸機資料 ---" << endl;
    out << "名稱:" << name << endl;
    out << "編號:" << id << endl;
    out << "駕駛員人數:" << pilot << endl;
    out << "煤油量:" << kerosene << endl;
    out << "乘客人數:" << passenger << endl;
    out << "武器:" << weapon << endl;
    out << "製造者:" << manufacturer << endl;
}