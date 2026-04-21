#include <iostream>
#include <stdexcept> 
#include "Time.h" 
using namespace std;

int main()
{
    Time t;


    cout << "The initial CE YEAR is ";
    t.CE_Year();
    cout << "\nThe initial ROC YEAR is ";
    t.ROC_Year();
    cout << "\n\n";

    int inputYear, inputMonth, inputDay;
    cout << "請輸入西元年、月、日 : ";
    t.setTime(inputYear, inputMonth, inputDay);
    /*if (cin >> inputYear >> inputMonth >> inputDay)
    {

        try
        {
            
            cout << "\n>>> 時間設定成功！\n";
        }
        catch (invalid_argument& e)
        {

            cout << "\n>>> Exception: " << e.what() << endl;
            cout << ">>> 提示：輸入的日期無效（可能非閏年或超出月份天數），設定失敗。\n";
        }
    }
    else
    {
        cout << "\n>>> 輸入格式錯誤！請輸入數字。\n";
    }*/


    cout << "\n--- 目前的時間狀態 ---"<< "\nCE Year: ";
    t.CE_Year();
    cout << "\nROC Year: ";
    t.ROC_Year();
    cout << endl;

    return 0;
}