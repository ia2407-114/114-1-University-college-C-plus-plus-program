#include <iostream>
using namespace std;

// 1. 建立抽象類別 Shape
class Shape {
public:
    // 純虛擬函數 Volume
    virtual double Volume() const = 0;

    // 虛擬解構子，確保衍生類別釋放記憶體時不會發生記憶體洩漏
    virtual ~Shape() {}
};

// 2. 衍生類別：圓錐體體積
class Cone : public Shape {
private:
    double radius;
    double height;

public:
    Cone(double r, double h) : radius(r), height(h) {}

    double Volume() const override {
        return (1.0 / 3.0) * 3.1415926535 * radius * radius * height;
    }
};

// 3. 衍生類別：球體體積
class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    double Volume() const override {
        return (4.0 / 3.0) * 3.1415926535 * radius * radius * radius;
    }
};

// 4. 衍生類別：圓柱體體積
class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double Volume() const override {
        return 3.1415926535 * radius * radius * height;
    }
};

int main() {
    // 宣告輸入所需的變數
    double r, h;

    // 宣告父類別的物件指標 a1
    Shape* a1 = nullptr;

    cout << "--- 幾何圖形體積計算系統 ---" << endl << endl;

    // 1. 輸入圓錐體參數並計算
    cout << "請輸入 [圓錐體] 的半徑與高度 (以空格隔開): ";
    cin >> r >> h;
    a1 = new Cone(r, h); // 動態建立圓錐體物件
    cout << "=> 圓錐體體積: " << a1->Volume() << endl << endl;
    delete a1;          // 釋放記憶體，避免記憶體洩漏

    // 2. 輸入球體參數並計算
    cout << "請輸入 [球體] 的半徑: ";
    cin >> r;
    a1 = new Sphere(r);  // 動態建立球體物件
    cout << "=> 球體體積:   " << a1->Volume() << endl << endl;
    delete a1;          // 釋放記憶體

    // 3. 輸入圓柱體參數並計算
    cout << "請輸入 [圓柱體] 的半徑與高度 (以空格隔開): ";
    cin >> r >> h;
    a1 = new Cylinder(r, h); // 動態建立圓柱體物件
    cout << "=> 圓柱體體積: " << a1->Volume() << endl << endl;
    delete a1;          // 釋放記憶體

    return 0;
}