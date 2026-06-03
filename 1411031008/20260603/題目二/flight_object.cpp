#include "flight_object.h"
#include <fstream>

// flight_object
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

// airliner
void airliner::create_airliner()
{
    cout << "乘客人數:";
    cin >> passenger;

    cout << "服務人員的數目:";
    cin >> service_person;

    cout << "製造者:";
    cin >> manufacturer;
}

void airliner::display()
{
    cout << "\t顯示大型客機的資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
    cout << "製造者:" << manufacturer << endl;
}

// battleplane
void battleplane::create_battleplane()
{
    cout << "製造者:";
    cin >> manufacturer;
}

void battleplane::display()
{
    cout << "\n顯示戰鬥機的資料\n";
    cout << "戰鬥機名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}

// bombplane
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
    
    cout << "\n顯示轟炸機的資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;

    // 輸出到 bomb.txt
    ofstream fout("bomb.txt");

    if (!fout)
    {
        cout << "檔案開啟失敗！" << endl;
        return;
    }

    fout << "顯示轟炸機的資料\n";
    fout << "名稱:" << name << endl;
    fout << "編號:" << id << endl;
    fout << "駕駛員人數:" << pilot << endl;
    fout << "煤油量(公升):" << kerosene << endl;
    fout << "乘客人數:" << passenger << endl;
    fout << "武器名稱:" << weapon << endl;
    fout << "製造者:" << manufacturer << endl;

    fout.close();

    cout << "\n資料已存入 bomb.txt" << endl;
}