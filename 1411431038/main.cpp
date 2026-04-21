#include <iostream>
#include <string>
#include "PET.h" 
using namespace std;

int main()
{
    string name, category;
    int bYear, bMonth, bDay;
    int aYear, aMonth, aDay;

    // 建立三個寵物
    for (int i = 1; i <= 3; ++i) {
        cout << "\n開始建立第 " << i << " 隻寵物" << endl;
        cout << "請輸入名字與品種 (以空白隔開): ";
        cin >> name >> category;

        bool isValid = false;

        // 迴圈直到輸入正確的日期為止
        while (!isValid) {
            cout << "請輸入生日 (西元年 月 日，以空白隔開): ";
            cin >> bYear >> bMonth >> bDay;

            cout << "請輸入領養日 (西元年 月 日，以空白隔開): ";
            cin >> aYear >> aMonth >> aDay;

            Date bDate(bYear, bMonth, bDay);
            Date aDate(aYear, aMonth, aDay);

            // 實例化 PET 物件
            PET currentPet(name, category, bDate, aDate);

            // 呼叫物件內部的檢查函數
            if (!currentPet.check_birth()) {
                cout << "[錯誤] 生日格式不合理，請重新輸入！\n\n";
            }
            else if (!currentPet.check_adopt()) {
                cout << "[錯誤] 領養日格式錯誤，或領養日早於生日，請重新輸入！\n\n";
            }
            else {
                // 檢查通過，印出詳細資料
                currentPet.print_all_data();
                isValid = true; // 跳出 while 迴圈
            }
            // 離開這層 while 單次迴圈時，currentPet 會消滅，並觸發 ~PET() 印出 Bye Bye~~
        }
    }

    cout << "程式順利結束。" << endl;
    return 0;
}