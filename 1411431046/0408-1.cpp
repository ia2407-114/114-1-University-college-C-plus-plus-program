#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
    Date d1;                 
    Date d2(2000);        
    Date d3(2026, 4);      
    Date d4(1989, 4, 8);   

    cout << "Constructed with:\n\nd1: all arguments defaulted\n  ";
      if (d1.isValid()) {
        d1.showAD();
        d1.showROC();
    }

    cout << "\n\nd2: year specified\n  ";
      if (d2.isValid()) {
        d2.showAD();
        d2.showROC();
    }

    cout << "\n\nd3: year and month specified\n  ";
      if (d3.isValid()) {
        d3.showAD();
        d3.showROC();
    }

    cout << "\n\nd4: year, month and day specified\n  ";
      if (d4.isValid()) {
        d4.showAD();
        d4.showROC();
    }

    
    try
    {
        Date d5(2026, 13, 40); // 錯誤日期
        if (!d5.isValid())
            throw invalid_argument("Invalid date");
    }
    catch (invalid_argument& e)
    {
        cerr << "\n\nException while initializing d5: "
            << e.what() << endl;
    }
    Date d;

    
    d.inputDate();

    
    if (!d.isValid()) {   
        cout << " 錯誤日期！" << endl;
    }
    else {
       
        d.showAD();
        d.showROC();
    }

    return 0;
}