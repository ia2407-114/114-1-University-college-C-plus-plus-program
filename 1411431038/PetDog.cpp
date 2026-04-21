#include "PetDog.h"  
#include <iostream>  

using namespace std; 


PetDog::PetDog(string n, int by, int bm, int bd, int ay, int am, int ad)
    : name(n), birthYear(by), birthMonth(bm), birthDay(bd),
    adoptYear(ay), adoptMonth(am), adoptDay(ad) {
} 


bool PetDog::validateDates() {

    int todayYear = 2026, todayMonth = 4, todayDay = 8;


    int today = todayYear * 10000 + todayMonth * 100 + todayDay;         
    int birthday = birthYear * 10000 + birthMonth * 100 + birthDay;     
    int adoption = adoptYear * 10000 + adoptMonth * 100 + adoptDay;      


    if (birthday > today || adoption > today || birthday > adoption) {
        return false;
    }

    int age = todayYear - birthYear;

    if (todayMonth < birthMonth || (todayMonth == birthMonth && todayDay < birthDay)) {
        age--; 
    }

    return (age >= 0 && age <= 20);
}

void PetDog::displayInfo() {
    cout << "\n========== 寵物狗資料 ==========" << endl; 

    if (validateDates()) {
        cout << "狀態： 資料合理" << endl;                                   
        cout << "姓名：" << name << endl;                                       
        cout << "生日：" << birthYear << "/" << birthMonth << "/" << birthDay << endl; 
        cout << "領養日：" << adoptYear << "/" << adoptMonth << "/" << adoptDay << endl; 
    }
    else {
      
        cout << "狀態： 錯誤 (年齡不符 0-20 歲或日期邏輯錯誤)" << endl;
    }
    cout << "================================" << endl; 
}