#include <iostream>
#include "pet.h" // pet class definition
using namespace std;

int main()
{
	Date birth(1949, 7, 24);
	Date adopt(1998, 3, 12);
	pet pet1("Bob", "Blue", birth, adopt);
	pet pet2("cc", "cat", birth, adopt);
	pet pet3("gj", "dog", birth, adopt);
	int y, m, d;
	cout << "請輸入要查詢的日期 (年 月 日): ";
	cin >> y >> m >> d;


	if (y == 1949 && m == 7 && d == 24) {
		cout << "日期正確，顯示檔案內容：" << endl;
	pet1.print();
	pet2.print();
	pet3.print();
}

 else {
	 cout << "日期不符，無法讀取檔案。" << endl;
	}
	if (y ==1998  && m == 3 && d == 12) {
		cout << "日期正確，顯示檔案內容：" << endl;
		pet1.print();
		pet2.print();
		pet3.print();
	}

	else {
		cout << "日期不符，無法讀取檔案。" << endl;
	}

	return 0;
}