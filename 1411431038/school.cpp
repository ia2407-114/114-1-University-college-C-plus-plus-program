#include "school.h"
#include <iostream>

using namespace std; // 實作檔內可以使用，不會污染到外部標頭檔

// --- student 類別實作 ---
void student::data_input() {
    cout << "學生基本資料:\n";
    cout << "姓名:";
    cin >> name;
    cout << "學號:";
    cin >> id;
}

// --- teacher 類別實作 ---
teacher::teacher() {
    cout << "== 輸入教師基本資料 ==" << endl;
    cout << "請輸入教師編號: ";
    cin >> id;
    cout << "請輸入教師姓名: ";
    cin >> name;
}

void teacher::data_input() {
    cout << "== 輸入教師課程資料 ==" << endl;
    cout << "請輸入課程編號: ";
    cin >> course_id;
    cout << "請輸入課程名稱: ";
    cin >> course_name;
    cout << "請輸入課程學分: ";
    cin >> course_credit;
}

// --- classroom 類別實作 ---
void classroom::show() {
    cout << "\n======== 教室課程資訊 ========" << endl;
    cout << "教師姓名: " << teacher::name << endl;
    cout << "學生姓名: " << student::name << endl;
    cout << "課程編號: " << course_id << endl;
    cout << "課程名稱: " << course_name << endl;
    cout << "課程學分: " << course_credit << " 學分" << endl;
}