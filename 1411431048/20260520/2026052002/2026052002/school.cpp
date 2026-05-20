#include <iostream>
#include "school.h"
using namespace std;

student::student() {
    cout << "--- 輸入學生資料 ---" << endl;
    cout << "請輸入學生編號: ";
    cin >> id;
    cout << "請輸入學生姓名: ";
    cin >> name;
}

teacher::teacher() {
    cout << "--- 輸入教師資料 ---" << endl;
    cout << "請輸入教師編號: ";
    cin >> id;
    cout << "請輸入教師姓名: ";
    cin >> name;
}

void teacher::data_input() {
    cout << "--- 輸入課程資料 ---" << endl;
    cout << "請輸入課程編號: ";
    cin >> course_id;
    cout << "請輸入課程名稱: ";
    cin >> course_name;
    cout << "請輸入學分: ";
    cin >> course_credit;
}

void classroom::show() {
    cout << "\n===============================" << endl;
    cout << "       教室課堂資訊摘要        " << endl;
    cout << "===============================" << endl;
    cout << "課程編號: " << course_id << endl;
    cout << "課程名稱: " << course_name << endl;
    cout << "學分:     " << course_credit << endl;
    cout << "教師姓名: " << teacher::name << " (編號: " << teacher::id << ")" << endl;
    cout << "學生姓名: " << student::name << " (編號: " << student::id << ")" << endl;
    cout << "===============================" << endl;
}
