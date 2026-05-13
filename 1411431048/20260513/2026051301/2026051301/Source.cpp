// Fig. 10.8: fig10_08.cpp
// Date class test program.
// Fig. 10.8: fig10_08.cpp
// Time class test program.
#include <iostream>
#include <stdexcept>
#include "date.h"
using namespace std;

int main()
{
    try {
        
        Time t1;
        cout << "t1 (預設時間): " << t1 << endl;

       
        Time t2(23, 59, 50);
        cout << "\nt2 (初始時間): " << t2 << endl;

        
        cout << "執行 ++t2: " << ++t2 << " (應為 23:59:51)" << endl;

        
        cout << "執行 t2++: " << t2++ << " (應顯示遞增前的值: 23:59:51)" << endl;
        cout << "現在的 t2: " << t2 << " (應變為 23:59:52)" << endl;

        
        cout << "\n將 t2 加上 7 秒..." << endl;
        t2 += 7; // 23:59:52 + 7秒 = 23:59:59
        cout << "加上 7 秒後的 t2: " << t2 << endl;

        cout << "再加 1 秒（觸發跨天歸零）..." << endl;
        ++t2; 
        cout << "跨天後的 t2: " << t2 << endl;

        
        cout << "\n嘗試設定不合法時間 (25時0分0秒)..." << endl;
        Time errorTime(25, 0, 0);

    }
    catch (const invalid_argument& e) {
        cout << "補捉到錯誤訊息: " << e.what() << endl;
    }

    return 0;
} // end main

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 **************************************************************************/

    // end main

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
