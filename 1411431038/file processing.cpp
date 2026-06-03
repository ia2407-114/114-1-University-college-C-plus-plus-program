#include "file_processing.h"
#include <iostream>
#include <fstream>
#include <cstdlib> 

using namespace std;


void flight_object::create_flight_object(string obj) {
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


void airliner::create_airliner() {
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
    cout << "製造者:";
    cin >> manufacturer;
}

void airliner::display() {
    cout << "\t顯示大型客機的資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
    cout << "製造者:" << manufacturer << endl;
}


void battleplane::create_battleplane() {
    cout << "製造者:";
    cin >> manufacturer;
}

void battleplane::display() {
    cout << "\n顯示衍生類別battleplane物件的資料\n";
    cout << "戰鬥機名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}


void bombplane::create_bombplane() {
    cout << "乘客人數:";
    cin >> passenger;
    cout << "武器名稱:";
    cin >> weapon;
    cout << "製造者:";
    cin >> manufacturer;
}

void bombplane::display() {
    cout << "\n顯示轟炸機的資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}


void bombplane::save_to_file(string filename) {
    ofstream appendfile;
    cout << "開啟 " << filename << " 文字檔，並新增資料於檔尾\n";

    appendfile.open(filename, ios_base::app);
    if (appendfile.fail()) {
        cout << filename << " 檔案無法開啟!\n";
        exit(1);
    }


    appendfile << "--- 轟炸機資料 ---" << '\n';
    appendfile << "名稱:" << name << '\n';
    appendfile << "編號:" << id << '\n';
    appendfile << "駕駛員人數:" << pilot << '\n';
    appendfile << "煤油量(公升):" << kerosene << '\n';
    appendfile << "乘客人數:" << passenger << '\n';
    appendfile << "武器名稱:" << weapon << '\n';
    appendfile << "[名稱]: " << name << ", [編號]: " << id << ", [製造者]: " << manufacturer << '\n';

    if (appendfile.fail()) {
        cout << "寫入失敗\n";
        exit(1);
    }

    appendfile.close();
    if (appendfile.fail()) {
        cout << filename << " 檔案無法關閉!\n";
        exit(1);
    }
    cout << "資料已成功追加至 " << filename << " !\n";
}